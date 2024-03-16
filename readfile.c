#include <stdio.h>

int main(){
    FILE  *fptr;
    fptr = fopen("file.txt","r");

    char textInFile[100];
    fgets(textInFile,100,fptr);

    printf("%s",textInFile);

    fclose(fptr);
    return 0;
}