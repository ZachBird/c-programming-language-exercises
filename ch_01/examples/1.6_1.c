#include <stdio.h>

int main() {
  int c, i, white_cnt, other_cnt;
  int digit_cnt[10];

  white_cnt = other_cnt = 0;
  for (i = 0; i < 10; ++i) {
    digit_cnt[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (c >= '0' && c <= '9') {
      digit_cnt[c - '0']++;
    } else if (c == ' ' || c == '\n' || c == '\t') {
      white_cnt++;
    } else {
      other_cnt++;
    }
  }

  printf("digits = ");
  for (i = 0; i < 10; ++i) {
    printf("%d ", digit_cnt[i]);
  }

  printf("\nwhite space = %d", white_cnt);
  printf("\nother = %d \n", other_cnt);
}