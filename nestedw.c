#include <stdio.h>
int main() {
    int number1, number2;
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    if (number1 >= number2) {
      if (number1 == number2) {
        printf("Result: %d = %d",number1,number2);
      }
      else {
        printf("Result: %d > %d", number1, number2);
      }
    }
    else {
        printf("Result: %d < %d",number1, number2);
    }

    return 0;
}
/*
output:
ccf@ccf-Precision-Tower-3431:~$ gcc nestedw.c
ccf@ccf-Precision-Tower-3431:~$ ./a.out
Enter two integers: 
6 
9
Result: 6 < 9

/*
