#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main() {
	
	char opt = 's';
	int num1, num2, num3, num4 = 0;
	float nun1, nun2, nun3, nun4 = 0;
	
	printf("digite o divisor:");
	scanf("%i", &num1);
	fflush(stdin);
	
	printf("\ninicio do intervalo:");
	scanf("%i", &num2);
	fflush(stdin);
	printf("\nfinal do intervalo:");
	scanf("%i", &num3);
	fflush(stdin);
	
	num4 = num2;
	
	printf("numeros divisiveis por %i entre %i e %i", num1, num2, num3);
	while(num4 != num3){
		if(num4 % num1 == 0){
			printf("\n%i", num4);
		}
		num4 += 1;
	}
	return 0;
}