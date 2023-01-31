#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	char frase[100];
	int a = 0;
	
	printf("Digite uma frase: ");
	gets(frase);
	
	for(int i=0; i<100; i++){
		if(
			frase[i] == 'a' || frase[i] == 
			'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' ||
			frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U'){ 
			a++;
		}
		
		if(frase[i]=='\0'){
			break;
		}
	}
	printf("\n");
	printf("A frase digitada tem %d vogais", a);

	return 0;
}
