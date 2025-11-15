#include <stdio.h>

int main() {
  float a, b;
  char op;

  printf("Hello! This is a simple calculator. Feel free to calculate!\n");

  printf("Enter your first number: ");
  scanf ("%f", &a);

second_number:
  printf("Enter your second number: ");
  scanf("%f", &b);

operation:
  printf("Enter your desired operation (+, -, *, /): ");
  scanf(" %c", &op);

  switch(op) {
    case '+':
      printf("%.2f + %.2f = %.2f\n", a, b, a + b);
      printf("There you go! Thank you for using this calculator!\n");
      break;
    
    case '-':
      printf("%.2f - %.2f = %.2f\n", a, b, a - b);
      printf("There you go! Thank you for using this calculator!\n");
      break;

    case '*':
      printf("%.2f * %.2f = %.2f\n", a, b, a * b);
      printf("There you go! Thank you for using this calculator!\n");
      break;

    case '/':
      if (b == 0) {
        printf("Error: Division by zero is not allowed. Please try again with a non-zero denominator. \n");
        goto second_number;
      }
      else {
        printf("%.2f / %.2f = %.2f\n", a, b, a / b);
        printf("There you go! Thank you for using this calculator!\n");
        break;
      }
    default:
      printf("That is not a valid operation >:(\n");
      goto operation;
      break;
  }
  return 0;
}