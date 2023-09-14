#include <stdio.h>

int main() {
  long num = 612852475143;
  int i;
  long l_prime_fac = -1;

  for (i = 2; i * i <= num; i++) {
    while (num % i == 0) {
      l_prime_fac = i;
      num /= i;
    }
  }

  if (num > 1) {
    l_prime_fac = num;
  }

  printf("%ld\n", l_prime_fac);

  return 0;
}
