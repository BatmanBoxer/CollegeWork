#include <stdio.h>
int main() {
  int num1, num2;
  char opertion;

  printf("enter the first number\n");
  scanf("%d", &num1);

  //cool trick to bypass enter  skipping scanf
  while (getchar() != '\n');

  printf("enter the operation to perform\n");
  scanf("%c", &opertion);

  printf("enter the second number\n");
  scanf("%d", &num2);

  switch (opertion) {
  case '+':
    printf("%d", num1 + num2);
    break;
  case '-':
    printf("%d", num1 - num2);
    break;
  case '*':
    printf("%d", num1 * num2);
    break;
  case '/':
    if (num2 != 0) {
      printf("%d", num1 / num2);
      break;
    } else {
      printf("dont put 0 in denominator");
      return 1;
    }
  default:
    printf("invalid operation");
    break;
  }

  return 0;
}
