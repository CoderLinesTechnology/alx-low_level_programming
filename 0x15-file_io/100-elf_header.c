#include "main.h"
/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
	int fd;
	ELFHeader elf_header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("open");
		return (98);
	}
	if (lseek(fd, 0, SEEK_SET) == -1)
	{
		perror("lseek");
		close(fd);
		return (98);
	}
	if (read(fd, &elf_header, sizeof(elf_header)) != sizeof(elf_header))
	{
		perror("read");
		close(fd);
		return (98);
	}
	close(fd);
	if (elf_header.e_ident[0] != 0x7f || elf_header.e_ident[1] != 'E' || elf_header.e_ident[2] != 'L' || elf_header.e_ident[3] != 'F')
	{
		fprintf(stderr, "Error: The file is not an ELF file.\n");
		return (98);
	}
	printf("ELF Header:\n");
	printf("	Magic:         %02x %02x %02x %02x\n", elf_header.e_ident[0], elf_header.e_ident[1], elf_header.e_ident[2], elf_header.e_ident[3]);
	printf("	Class:         %d-bit\n", elf_header.e_ident[4] == 1 ? 32 : 64);
	printf("	Data:          %s\n", elf_header.e_ident[5] == 1 ? "little-endian" : "big-endian");
	printf("	Version:       %d\n", elf_header.e_ident[6]);
	printf("	OS/ABI:        %d\n", elf_header.e_ident[7]);
	printf("	ABI Version:   %d\n", elf_header.e_ident[8]);
	printf("	Type:          %d\n", elf_header.e_type);
	printf("	Entry point:   0x%016llx\n", elf_header.e_entry);
	return (0);
}
