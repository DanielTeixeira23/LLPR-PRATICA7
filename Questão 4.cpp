#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	char a[500], aux;
	
	printf("Digite uma frase: ");
	gets(a);
	
	int max = strlen(a) - 1;
	
	for(int i=0; i<=max/2; i++){
		aux = a[i];
		a[i] = a[max - i];
		a[max - i] = aux;
	}
	
	printf("\n");
	printf("O inverso da string é: %s\n", a);
	
	return 0;
}
