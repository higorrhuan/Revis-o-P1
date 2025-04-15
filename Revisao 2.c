#include <stdio.h>
#define A 2
#define B 3
#define C 5


int main(){

double a,b,c;
double media, soma;

printf("Digite a Nota: ");
scanf("%lf", &a);
printf("Digite a Nota: ");
scanf("%lf", &b);
printf("Digite a Nota: ");
scanf("%lf", &c);

soma = (a*A) + (b*B) + (c*C);
media = soma / 10;

printf("Media e: %.3lf", media);

}
