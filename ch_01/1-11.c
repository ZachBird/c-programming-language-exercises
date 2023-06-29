#include <stdio.h>

#define OUT 0
#define IN 1

// Test Case
// 1. Input: no input; Output: 0 0 0
// 2. Input: one character word; Output: 1 1 2
// 3. Input: two character word; Output: 1 1 3
// 4. Input: 2 one character words; Output: 1 2 4
// 5. Input: 2 one character words - one word per line; Output: 2 2 4

// Boundaries
// 1. no input
// 2. no words - just newlines
// 3. no words - just blanks, tabs, and newlines
// 4. one word per line - no blanks and tabs
// 5. word starting at the beginning of the line
// 6. word starting after some blanks

int main() {
  int c, new_line, new_word, count, state;

  new_line = new_word = count = 0;
  state = OUT;

  while ((c = getchar()) != EOF) {
    count++;
    // new line
    if (c == '\n') {
      new_line++;
    }

    // new word
    if (c == ' ' || c == '\n' || c == '\t') {
      state = OUT;
    } else {
      new_word++;
      state = IN;
    }
  }

  printf("Char count: %d \n", count);
  printf("New line: %d \n", new_line);
  printf("New word: %d \n", new_word);
}