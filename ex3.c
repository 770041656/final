#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc,char*argv[]){
    double a[100];
    int b = 1;
    int c = 0;
    int d = 0;
    double temp;
    
    if(argc == 1){
        printf("The program needs at least one integer parameter to run\n");
    }
    else{
    for(b = 1;b < argc;b++,c++){
        if(*argv[b] >= '0'&&*argv[b] <= '9')
        {
            a[c] = atof(argv[b]);
            }
            else{
               printf("The parameter has to be an integer format\n");
               return 0;  
            }
    }
    for(d = 0;d < argc-2;d++){
     if(a[d] < a[d+1]) 
{
    temp = a[d];
    a[d] = a[d+1];
    a[d+1] = temp;}
}
printf("Min parameter is %g\n",a[argc-2]);
return 0;
}
}