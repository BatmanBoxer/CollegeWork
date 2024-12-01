#include <ctype.h>
#include <stdio.h>
#include <sys/types.h>

int main(){
  char ch = 'u';

  printf("enter a character\n");
  scanf("%ch",&ch);

  
  switch (ch) {
    case 'a': case 'e': case 'i': case 'o': case 'u':
      printf("small case vowel");
      return 0;
      break;//kind off not needed since we are returning but still to make it  pleasing i put in the break
    case 'A': case 'E': case 'I': case 'O': case 'U':
      printf("big case vowel");
      return 0;
      break;
  }

  if (isalpha(ch)) {
    printf("consonant");
    return 0;
  }
  if (isdigit(ch)) {
    printf("number"); 
    return 0;
  }
  if (isspace(ch)) {
    printf("digit"); 
    return 0;
  }
  printf("special character");
  return 0;

}
