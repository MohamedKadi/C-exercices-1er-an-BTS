#include <stdio.h>

int main() {
  int T[] = {1, 2, 3, 4, 2, 2, 2, 5, 6, 7, 2, 2, 2, 8};
  int n = sizeof(T) / sizeof(T[0]);
  int specific_number = 2; // Replace with desired number

  int i, j, max_start, max_len;
  max_len = 0;
  max_start = 0;

  for (i = 0; i < n; i++) {
    int count = 1;
    for (j = i + 1; j < n; j++) {
      if (T[j] == specific_number) {
        count++;
      } else {
        break;
      }
    }
    if (count > max_len) {
      max_len = count;
      max_start = i;
    }
  }

  if (max_len > 0) {
    printf("The longest consecutive sequence of %d starts at index %d and has a length of %d\n", specific_number, max_start, max_len);
  } else {
    printf("No consecutive sequence of %d found in the array.\n", specific_number);
  }

  return 0;
}

