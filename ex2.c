#include <stdlib.h>
#include <stdio.h>

int main(void){
    char i[64];
    int j,k;

    gets(i);
    j=strlen(i);
    for (k=0;k<=strlen(i);k++){
printf("%c",i[--j]);
}
return 0;
} 