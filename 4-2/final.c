#include <stdio.h>

int global_val = 1;
int i_num;

int func(int i) {
  static int i_num;
  i_num += i;

  return i_num;
}

int main() {
  int i_num = 2;
  int val = 20;

  for(int i = 0; i < 3; i++) {
    auto int i_num = 2;

    val += func(i);
  }

  {
    auto int i_num = 2;
    int global_val = 1;
    int val = 10;

    val += func(1);
  }

  {
    auto int i_num = 3;
    int global_val = 1;
    int val = 20;

    val += func(2);
  }

  global_val++;
  i_num++;

  printf("%d %d %d", global_val, i_num, val);

  return 0;
}