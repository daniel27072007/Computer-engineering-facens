#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main() {
 int num1;
 char let1, let2;
 
 //ex1
 printf("EX1");
 printf("\nmeses");
 printf("\nDigite um mes:");
 scanf("%i", &num1);
 fflush(stdin);
 
 switch(num1)
 	{
 		case 1: printf("%i e o mes de janeiro", num1);
 				break;
 				
 		case 2: printf("%i e o mes de fevereiro", num1);
 				break;
				 
		case 3: printf("%i e o mes de marco", num1);
 				break;		
 				
 		case 4: printf("%i e o mes de abril", num1);
 				break;		
 				
 		case 5: printf("%i e o mes de maio", num1);
 				break;
 				
 		case 6: printf("%i e o mes de junho", num1);
 				break;		
 				
 		case 7: printf("%i e o mes de julho", num1);
 				break;		
 				
 		case 8: printf("%i e o mes de agosto", num1);
 				break;		
 				
 		case 9: printf("%i e o mes de setembro", num1);
 				break;		
 				
 		case 10: printf("%i e o mes de outubro", num1);
 				break;		
 				
 		case 11: printf("%i e o mes de novembro", num1);
 				break;		
 				
 		case 12: printf("%i e o mes de dezembro", num1);
 				break;
 				
 		default: printf("nao existe mes %i", num1);
 	}
 		
 //ex2 e 3
 printf("\n\nEX 2 & 3");
 printf("\nvogal");
 printf("\nDigite uma letra:");
 scanf("%c", &let2);
 fflush(stdin);
 
 let1 = tolower(let2);
 		
 switch(let1)
	{
		case 'a': printf("%c e uma vogal", let1);
				break;
		case 'e': printf("%c e uma vogal", let1);
				break;
		case 'i': printf("%c e uma vogal", let1);
				break;
		case 'o': printf("%c e uma vogal", let1);
				break;
		case 'u': printf("%c e uma vogal", let1);
				break;
		default: printf("%c e consoante", let1);
	}
	
//ex4
 printf("\n\nEX4");
 printf("\nsistema");
 printf("\nDigite o num do erro:");
 scanf("%i", &num1);
 fflush(stdin);
 
 switch(num1)
 	{
 		case 200: printf("%i = tudo OK", num1);
 		break;
 		case 400: printf("%i = pagina nao encontrada", num1);
 		break;
 		case 500: printf("%i = Erro interno no servidor", num1);
 		break;
 		case 503: printf("%i = Servico indisponivel", num1);
 		break;
 		default: printf("%i = nao e um erro", num1);
 	}

return 0;
}