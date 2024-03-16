#include <stdio.h>
int main(){
    int area;
    int length;
    printf("Enter Your length in m:  ");
    scanf("%d",&length);

    area = length*length;

    printf("THE AREA OF RECTANGLE IS %d\n",area);
    return 0;
}