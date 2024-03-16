#include <stdio.h>

int main() {
    int dg1;
    int dg2;
    char operational;

    printf("Enter first value: ");
    scanf("%d", &dg1);

    printf("Enter second value: ");
    scanf("%d", &dg2);

    getchar(); // Consume the newline character in the input buffer

    printf("Enter operation to do (+ or - , / , * etc... ): ");
    scanf(" %c", &operational); // Use " %c" to skip any leading whitespace characters

    if (operational == '-') {
        printf("The subtraction of %d from %d is %d\n", dg2, dg1, dg1 - dg2);
    } else if (operational == '+') {
        printf("The addition of %d and %d is %d\n", dg1, dg2, dg1 + dg2);
    } else if (operational=='/') {
       printf("The division of %d with %d is %d\n",dg1,dg2,dg1/dg2);
    }else if (operational=='%'){
        printf("The modulus of %d with %d is %d\n",dg1,dg2,dg1%dg2);
    }else if (operational=='*'){
        printf("The multiplication of %d with %d is %d\n",dg1,dg2,dg1*dg2);
    }else{
        printf("OPERATION NOT FOUND");
    };

    return 0;
}
