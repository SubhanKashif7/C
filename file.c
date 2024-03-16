#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("./file.txt","a");
    fprintf(fptr, "\nHi everybody!");
    
    fclose(fptr);


    return 0;
}
