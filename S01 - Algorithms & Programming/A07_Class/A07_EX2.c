#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main() {
	
	char opt = 's';
	int num1 = 0;
	
	do{
		if(num1 % 2 != 0){
			printf("\n\n%i", num1);
		}		
		num1 += 1;
	} while(num1 != 100);
	
	return 0;
}