#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  for (int i = 1; i < argc; i++) {
    printf("%s ", argv[i]);
  }

  puts("");
  return 0;
}
