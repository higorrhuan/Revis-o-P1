#include <stdio.h>
#include <math.h>

int main(){
int num, soma;
int positivo, quantpositivo;
int negativo, quantnegativo;
int i;

while(1){

printf("Digite um Numero: \n");
scanf("%d", &num);


if(num == 0){
    break;
}
if(num > 0){
    positivo *= num;
    quantpositivo ++;
}
else{
    negativo += num;
    quantnegativo ++;
}
}

printf("Multiplicação: %d\n",positivo);
printf("Soma: %d\n",negativo);
printf("Quantidade positivo: %d", quantpositivo);
printf("Quantidade negativo: %d", quantnegativo);


}
