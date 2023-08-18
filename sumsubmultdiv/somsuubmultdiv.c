#include <stdio.h>

main(){

   //operadores aritimeticos
   //soma(+), subtração(-), divisão(/)
   //multipicação(), modulo(%), potencia(*)
   //atencao à ordem de precedencia


   int num1 , num2 , soma, subtracao, mult, div;

   printf("Digite o primeiro numero inteiro\n");
   scanf("%d", &num1);
   printf("Digite o segundo numero inteiro\n");
   scanf("%d", &num2);

   soma = num1 + num2;
   subtracao = num1 - num2;
   mult = num1 * num2;
   div = num1 / num2;

   printf("\nA soma e: %d", soma);

  
   printf("\nA subtracao e: %d", subtracao);


   printf("\nA multiplicacao e: %d", mult);


   printf("\nA divisao e: %d", div);

}