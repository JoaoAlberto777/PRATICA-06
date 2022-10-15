#include <stdio.h>
#include <locale.h>

	int main(){
		setlocale(LC_ALL, "Portuguese_Brazil");
		int IdadeP1, IdadeP2;
		
		printf("Seletor de Desconto 3");
		printf("\n P1 Insira Sua Idade: ");
		scanf("%d", &IdadeP1);
		printf("\n P2 Insira Sua Idade: ");
		scanf("%d", &IdadeP2);
			if(IdadeP1 % 2 == 0){
				printf("\n Vocês Ganharam o Desconto!!");
			}else{
				printf("\n Vocês Não Ganharam o Desconto :(");
			}
			return 0;
	}
