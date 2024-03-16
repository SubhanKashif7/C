#include <stdio.h>
#include <math.h>

int main(){
    double num;
    double numto;

    printf("Enter The Number to find its power : ");
    scanf("%lf",&num);

    printf("To which : ");
    scanf("%lf",&numto);

    double res = pow(num,numto);
    printf("The %lf to power of %lf is %lf",num,numto,res);

    return 0;
}