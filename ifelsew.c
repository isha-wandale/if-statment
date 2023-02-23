
#include <stdio.h>
int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // true if number is less than 0
    if (number < 0) {
        printf("You entered %d.\n", number);
    }

    printf("The if statement is easy.");

    return 0;
}


/*
output:
ccf@ccf-Precision-Tower-3431:~$ gcc ifelsew.c
ccf@ccf-Precision-Tower-3431:~$ ./a.out
Enter an integer: 6
The if statement is easy.


/*
