#include <stdio.h>
#include <stdlib.h>

int main(){
    double a;
    double b;
    double i;

    scanf("%lf %lf",&a,&b);
    i = (a + b) * (a + b);
    printf("%.2lf\n",i);
} 