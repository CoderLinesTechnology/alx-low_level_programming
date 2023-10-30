#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdint.h>
#include <string.h>

typedef struct {
    unsigned char e_ident[16];
    uint16_t e_type;
    uint16_t e_machine;
    uint32_t e_version;
    uint64_t e_entry;
    uint64_t e_phoff;
    uint64_t e_shoff;
    uint32_t e_flags;
    uint16_t e_ehsize;
    uint16_t e_phentsize;
    uint16_t e_phnum;
    uint16_t e_shentsize;
    uint16_t e_shnum;
    uint16_t e_shstrndx;
} Elf64_Ehdr;

/**
 * print_elf_header - prints the ELF header information
 * @header: pointer to the ELF header structure
 */
void print_elf_header(const Elf64_Ehdr *header)
{
	int i;

	printf("\tMagic:\t\t\t");
	for (i = 0; i < 16; ++i)
		printf("%02x ", header->e_ident[i]);
	printf("\n");

	printf("\tClass:\t\t\t%s\n", (header->e_ident[4] == 1) ? "ELF32" : "ELF64");
	printf("\tData:\t\t\t%s\n", (header->e_ident[5] == 1) ? "2's complement, little endian" : "2's complement, big endian");
	printf("\tVersion:\t\t%d (current)\n", header->e_ident[6]);
	printf("\tOS/ABI:\t\t\tUNIX - ");
    switch (header->e_ident[7]) {
        case 0:
            printf("System V\n");
            break;
        case 3:
            printf("Linux\n");
            break;
        default:
            printf("Other\n");
            break;
    }
    printf("\tABI Version:\t\t%d\n", header->e_ident[8]);
    printf("\tType:\t\t\t%s\n", (header->e_type == 2) ? "EXEC (Executable file)" : "Other");
    printf("\tEntry point address:\t%#lx\n", (unsigned long)header->e_entry);
}

/**
 * main - entry point of the program
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[]) {
    int fd;
    Elf64_Ehdr header;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        return (EXIT_FAILURE);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        perror("Error");
        return (EXIT_FAILURE);
    }

    if (read(fd, &header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr)) {
        perror("Error reading ELF header");
        close(fd);
        return (EXIT_FAILURE);
    }

    if (header.e_ident[0] != 0x7f || strncmp((char *)(header.e_ident + 1), "ELF", 3) != 0) {
        fprintf(stderr, "Error: Not an ELF file\n");
        close(fd);
        return (EXIT_FAILURE);
    }

    print_elf_header(&header);
    close(fd);
    return (EXIT_SUCCESS);
}
