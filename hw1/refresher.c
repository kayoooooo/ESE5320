#include "stdio.h"
#include "stdlib.h"

int main(int argc, char** argv) {
  int a[2][4] = {{10, 20, 30, 40}, {50, 60, 70, 80}};
  int* b[2] = {a[0], a[1]};
  printf("Stack: Address=%p, Value=%d\n", &(a[0][0]), a[0][0]);
  printf("Stack: Address=%p, Value=%d\n", &(a[0][1]), a[0][1]);
  printf("Stack: Address=%p, Value=%d\n", &(a[0][2]), a[0][2]);
  printf("Stack: Address=%p, Value=%d\n", &(a[0][3]), a[0][3]);
  printf("Stack: Address=%p, Value=%d\n", &(a[1][0]), a[1][0]);
  printf("Stack: Address=%p, Value=%d\n", &(a[1][1]), a[1][1]);
  printf("Stack: Address=%p, Value=%d\n", &(a[1][2]), a[1][2]);
  printf("Stack: Address=%p, Value=%d\n", &(a[1][3]), a[1][3]);
  printf("Stack: Address=%p, Value=%p\n", b, b[0]);
  printf("Stack: Address=%p, Value=%p\n", b + 1, b[1]);
}