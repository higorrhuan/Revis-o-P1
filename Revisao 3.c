#include <stdio.h>

int main(){
double x, y,z;
double soma;

printf("Digite seu numero: ");
scanf("%lf", &x);
printf("Digite numero de horas trabalhadas: ");
scanf("%lf", &y);
printf("Digite o valor a receber por hora: ");
scanf("%lf", &z);

soma = y*z;

printf("NUMERO = %.0lf\n", x);
printf("SALARIO = R$%.3lf", soma);




}
