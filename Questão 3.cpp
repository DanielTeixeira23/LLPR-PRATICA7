#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	char x[300];
	char inverso[300];
	
	printf("Escreva uma frase: ");
	gets(x);
	
	int max = strlen(x)-1;
	
	for(int i=0; i<=max; i++){
		inverso[i] = x[max-i];
	}
	
	printf("\n");
	printf("A frase invertida é: %s", inverso);
	
	return 0;
	
}
