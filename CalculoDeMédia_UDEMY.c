#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, ""); //Autoriza acentos em portugues.
	
	float Nota1;
	float Nota2; //Definindo vari�veis.
	
	printf("\n\tC�lculo de M�dia: \nInsira sua nota da prova 1: \n"); //Instru��o para usu�rio.
	scanf("%f", &Nota1); //Redefinindo o valor da Nota1
	
	printf("\nInsira a nota da prova 2: \n"); //Instru��o para usu�rio.
	scanf("%f", &Nota2); //Redefinindo o valor da Nota1
	
	printf("A m�dia das Notas 1: %.2f e Nota 2: %.2f �: %.2f", Nota1, Nota2, (Nota1 + Nota2)/2); //Instru��o para usu�rio e calculo da m�dia.
	system("pause"); // permite que o usu�rio tenha tempo pra ler o resultado.
}
