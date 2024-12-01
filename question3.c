#include <ctype.h>
#include <stdio.h>

int main() {
  char ch;
  printf("enter a character\n");
  scanf("%c", &ch);

  if (isupper(ch)) {
    printf("the character '%c' is an uppercase letter.\n", ch);
    return 0;
  }
  if (islower(ch)) {
    printf("the character '%c' is a lowercase letter.\n", ch);
    return 0;
  }

  printf("the character '%c' is not an alphabetic letter.\n", ch);
  return 0;
}
