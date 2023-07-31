#include <stdio.h>

#define MAX_HISTOGRAM 15
#define MAX_WORD 11
#define IN 1
#define OUT 0

int horizontal(int *word_cnt, int max_value);
int vertical(int *word_cnt, int max_value);

int main() {
  int c, i, cur_word_cnt, state;
  int len;
  int max_value;
  int overflow_cnt;
  int word_cnt[MAX_WORD];

  state = OUT;
  cur_word_cnt = 0;
  overflow_cnt = 0;
  for (i = 0; i < MAX_WORD; ++i) {
    word_cnt[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      state = OUT;
      if (cur_word_cnt > 0) {
        if (cur_word_cnt < MAX_WORD) {
          word_cnt[cur_word_cnt]++;
        } else {
          overflow_cnt++;
        }
      }
      cur_word_cnt = 0;
    } else if (state == OUT) {
      state = IN;
      cur_word_cnt = 1;
    } else {
      cur_word_cnt++;
    }
  }

  max_value = 0;
  for (i = 1; i < MAX_WORD; ++i) {
    if (word_cnt[i] > max_value) {
      max_value = word_cnt[i];
    }
    printf("index %d, value %d \n", i, word_cnt[i]);
  }
  // printf("max_value: %d", max_value);

  // horizontal(word_cnt, max_value);
  vertical(word_cnt, max_value);
}

int horizontal(int *word_cnt, int max_value) {
  int i, len;

  for (i = 1; i < MAX_WORD; ++i) {
    if (word_cnt[i] > 0) {
      // printf("%2d", (len = word_cnt[i] * MAX_HISTOGRAM / max_value));
      if ((len = word_cnt[i] * MAX_HISTOGRAM / max_value) <= 0) {
        len = 1;
      }
      // printf("%d", len);
    } else {
      len = 0;
    }
    // printf("%d", len);
    printf("%2d letters word [%2d]: ", i, word_cnt[i]);
    while (word_cnt[i] > 0) {
      putchar('*');
      word_cnt[i]--;
    }
    putchar('\n');
  }

  return 0;
}

int vertical(int *word_cnt, int max_value) {
  int i;

  for (i = MAX_WORD; i > 0; --i) {
    // printf("%d - %d - %d \n", i, MAX_WORD - i, word_cnt[MAX_WORD - i]);
    int j = 1;
    while (j < MAX_WORD) {
      if (word_cnt[j] > i - 1) {
        printf("%-3s", ".");
      } else {
        printf("%-3s", "_");
      }
      j++;
    }
    putchar('\n');
  }

  for (i = 1; i < MAX_WORD; ++i) {
    printf("%-3d", word_cnt[i]);
  }
  putchar('\n');

  return 0;
}