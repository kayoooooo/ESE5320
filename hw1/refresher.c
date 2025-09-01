#include "stdio.h"
#include "stdlib.h"

int main(int argc, char** argv) {
  int x = 20;
  int* y = &x;
  int* z = malloc(sizeof(int));
  *z = 50;
  int* w = malloc(sizeof(int) * 3);
  w[0] = 5;
  w[1] = 6;
  w[2] = 7;
  printf("Stack: Address=%p, Value=%d\n", (void*)&x, x);
  printf("Stack: Address=%p, Value=%p\n", (void*)&y, y);
  printf("Stack: Address=%p, Value=%p\n", (void*)&z, z);
  printf("Stack: Address=%p, Value=%p\n", (void*)&w, w);
  printf("Heap: Address=%p, Value=%d\n", (void*)z, *z);
  printf("Heap: Address=%p, Value=%d\n", (void*)w, w[0]);
  printf("Heap: Address=%p, Value=%d\n", (void*)&(w[1]), w[1]);
  printf("Heap: Address=%p, Value=%d\n", (void*)&(w[2]), w[2]);
}