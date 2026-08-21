#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main() {
 int num1, num2, num3;
 char let1, let2;
 float nun1, nun2, nun3;
 
 //ex1
 printf("EX1");
 printf("\ntipos num");
 printf("\nDigite um numero:");
 scanf("%i", &num1);
 fflush(stdin);
 
 if (num1 > 0){
 	num2 = 1;
 }
 else if (num1 == 0){
 	num2 = 0;
 }
 else if (num1 < 0){
 	num2 = -1;
 }
 
 switch (num2)
 {
 	case 1: printf("%i e positivo", num1);
 	break;
 	case 0: printf("%i e nulo", num1);
 	break;
 	case -1: printf("%i e negativo", num1);
 	break;
 	default: printf("isso nao e um numero");
 }

 //ex2
 printf("\n\nEX2");
 printf("\nintervalo");
 printf("\nDigite dois numeros\n");
 scanf("%i", &num1);
 fflush(stdin);
 scanf("%i", &num2);
 fflush(stdin);
 printf("Digite mais um numero:");
 scanf("%i", &num3);
 fflush(stdin);
 
 if (num3 > num1 && num3 < num2){
 	let1 = 'v';
 }
 else{
 	let1 = 'f';
 }
 
 switch(let1)
 {
 	case 'v': printf("%i esta entre %i e %i", num3, num1, num2);
 			  break;
 	case 'f': printf("%i nao esta entre %i e %i", num3, num1, num2);
 			  break;
 	default: break;
 }
 
  //ex3
  printf("\n\nEX3");
  printf("\nIMC");
  printf("\nDigite seu peso em kilos:\n");
  scanf("%f", &nun1);
  fflush(stdin);
  printf("\nDigite sua altura em metros:\n");
  scanf("%f", &nun2);
  
  nun3 = nun1 / (nun2 * 2);
  
  if (nun3 < 18.5){
  	printf("%.2f = Abaixo do Peso", nun3);
  }
  else if (18.5 <= nun3 < 25){
  	printf("%.2f = Saudavel", nun3);
  }
  else if (25 <= nun3 < 30){
  	printf("%.2f = Sobrepeso", nun3);
  }
  else if (30 <= nun3 < 35){
  	printf("%.2f = Obesidade Grau 1", nun3);
  }
  else if (35 <= nun3 < 40){
  	printf("%.2f = Obesidade Grau 2", nun3);
  }
  else if (40 <= nun3){
  	printf("%.2f = Obesidade Grau 3", nun3);
  }
 
 
  //ex4
  printf("\n\nEX4");
  printf("\nnumeros repitidos");
  printf("\nDigite 3 numeros\n");
  scanf("%f", &nun1);
  fflush(stdin);
  scanf("%f", &nun2);
  fflush(stdin);
  scanf("%f", &nun3);
  fflush(stdin);
  
  // 1 , 2, 3
  if (nun1 != nun2 && nun1 != nun3 && nun2 != nun3){
  	printf("nao tem numeros repetidos");
  }
  // 1, 1, 3
  else if (nun1 == nun2 && nun1 != nun3){
  	printf("%.2f se repete 2 vezes", nun1);
  }
  // 1, 1, 1
  else if (nun1 == nun2 && nun1 == nun3){
  	printf("%.2f se repete 3 vezes", nun1);
  }
  // 1, 2, 1
  else if (nun1 != nun2 && nun1 == nun3){
  	printf("%.2f se repete 2 vezes", nun1);
  }
  // 1, 2, 2
  else if (nun1 != nun2 && nun2 == nun3){
  	printf("%.2f se repete 2 vezes", nun2);
  }
  
  //ex5
  printf("\n\nEX5");
  printf("\nmaior numero");
  printf("\nDigite 3 numeros\n");
  scanf("%f %f %f", &nun1, &nun2, &nun3);
  fflush(stdin);
  
  //se nun1 for o maior
  if (nun1 > nun2 && nun1 > nun3){
  	printf("%.02f e o maior numero", nun1);
  }
  //se nun2 for o maior
  else if (nun2 > nun1 && nun2 > nun3){
  	printf("%.02f e o maior numero", nun2);
  }
  //se nun3 for o maior
  else if (nun3 > nun2 && nun3 > nun1){
  	printf("%.02f e o maior numero", nun3);
  }
  
  //ex6
  printf("\n\nEX6");
  printf("\ncalculadora");
  printf("\nescreva uma operaçao\n");
  scanf("%f %c %f", &nun1, &let1, &nun2);
  fflush(stdin);
  
  switch(let1){
  	case '+': printf("%.2f %c %.2f = %.2f", nun1, let1, nun2, nun1+nun2);
  		break;
  	case '-': printf("%.2f %c %.2f = %.2f", nun1, let1, nun2, nun1-nun2);
  		break;
  	case 'x': printf("%.2f %c %.2f = %.2f", nun1, let1, nun2, nun1*nun2);
  		break;
  	case '/': printf("%.2f %c %.2f = %.2f", nun1, let1, nun2, nun1/nun2);
  		break;
  	default: printf("opcao invalida");
  }
  
  //ex7
  printf("\n\nEX7");
  printf("\ntriangulos");
  printf("\ndigite as medidias dos tres lados do trinagulo\n");
  scanf("%f %f %f", &nun1, &nun2, &nun3);
  fflush(stdin);
  
  if (nun1 == nun2 && nun1 == nun3){
  	printf("Triangulo equilatero");
  }
  else if (nun1 == nun2 && nun1 != nun3 || nun1 == nun3 && nun1 != nun2 || nun2 == nun3 && nun2 != nun1){
  	printf("Triangulo isoceles");
  }
  else if (nun1 != nun2 && nun1 != nun3 && nun2 != nun3){
  	printf("Triangulo escaleno");
  }
  
return 0;
}
