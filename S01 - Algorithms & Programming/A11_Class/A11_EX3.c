#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char str[11];

int main(){
	
	printf("\nDigite uma sequencia de 10 letras:");
	gets(str);
	
	for (int i = 0; i < 6; i++){
		printf("%c\n", str[i]);
	}
	
	return 0;
}