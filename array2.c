#include <stdio.h>

int main(){
    int myage = 13;
    int* pointerToMyAge = &myage;
    printf("%p",pointerToMyAge);
    return 0;
}