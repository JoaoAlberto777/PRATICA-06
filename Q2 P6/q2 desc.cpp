#include <stdio.h>
#include <locale.h>

	int main(){
		setlocale(LC_ALL, "Portuguese_Brazil");
		int Idoso, Estudante, Idade;
		
		printf("Seletor de Desconto 2.0");
			printf("\n Digite Sua Idade: ");
			scanf("%d", &Idade);
			printf("\n Voc� � Estudante? Digite 1 para SIM ou 0 para N�O: ");
			scanf("%d", &Estudante);
			
			if((Idade >= 65) || (Estudante == 1)){
				printf("\n Meia Entrada");
			}else{
				printf("\n Entrada Completa :(");
				
			}
		return 0;
	}
