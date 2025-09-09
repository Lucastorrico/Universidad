#include <stdio.h>
void main(){
int N;
printf("ingrese un numero: \n");
scanf("%d", &N);
for(int i=1;i<11;i++){
    int r= N*i;
    printf("%d \n", r);
}

}
