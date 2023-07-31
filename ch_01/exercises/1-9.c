#include <stdio.h>

// int main() {
//   int c, sp_count;

//   sp_count = 0;

//   while ((c = getchar()) != EOF) {
//     if (c != ' ') {
//       putchar(c);
//       sp_count = 0;
//     } else {
//       if (sp_count == 0) {
//         putchar(c);
//       }
//       sp_count++;
//     }
//   }
// }

// optimized
int main() {
  int c, last_c;

  while ((c = getchar()) != EOF) {
    if (c != ' ' || last_c != ' ') {
      putchar(c);
    }
    last_c = c;
  }
}