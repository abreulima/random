#include <stdio.h>

int check_letter_K(char *a){

  // Creating variable for the iteration
  int i;

  // Using for to "walk" over everything character of the string
  // we will increment i while it's different from \0 (end of string)
  // a while also could be used it
  for (i = 0; a[i] != '\0'; i++)
  {

    // Get the letter in the position i and check if it's equal to 'K'
    // if it is equal we return 1, leaving the function
    if (a[i] == 'K')
    {
      return 1;
    }
  }

  // if we didn't return yet it's because we couldn't find the letter
  // 'k', and now we are sure there's no 'K' and we can return 0
  return 0;

}

int main(void) {

  printf("%d\n", check_letter_K("hello Karina")); // will return 1
  printf("%d\n", check_letter_K("hello Ivan")); // will return 0
  printf("%d\n", check_letter_K("k")); // will return 0 k != K
  printf("%d\n", check_letter_K("K")); // will return 1

  return 0;
}
