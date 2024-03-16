#include <stdio.h>

int main(){
    double marks;
    double *gmarks = &marks;
    double gm = *gmarks;
    gm = 200;
    printf("%lf\n",marks);
    // These are comments in C
    return 0;
}