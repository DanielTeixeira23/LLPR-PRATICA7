#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	char palavra[100];
	char x;
	int a=0;
	
	printf("Digite uma frase: ");
	gets(palavra);
	
	printf("Digite uma letra: ");
	scanf("%s", &x);
	
	for(int i=0; i<100; i++){
		if(palavra[i]== x){
			a++;
		}
		if(palavra[i]== '\0'){
			break;
		}
	}
	
	printf("\n");
	printf("Resposta: %d", a);
	
	return 0;
}
