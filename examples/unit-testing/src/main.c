#include <stdio.h>
#include "./money.h"

int main() {
  int a = 40;
  int b = 2;
  int total = calculate_total(&a, &b);

  printf("%d\n", total);
  return 0;
}
