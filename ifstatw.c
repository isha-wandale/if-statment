#include <stdio.h>
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    // True if the remainder is 0
    if  (number%2 == 0) {
        printf("%d is an even integer.",number);
    }
    else {
        printf("%d is an odd integer.",number);
    }

    return 0;
}



/*
output:
ccf@ccf-Precision-Tower-3431:~$ gcc ifstatw.c
ccf@ccf-Precision-Tower-3431:~$ ./a.out
Enter an integer: 8
8 is an even integer.
/*
