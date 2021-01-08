#include <stdio.h>
#include <stdlib.h>

/*
	Quest�es de programa�ao em C da prov do bepid do IFCE 
*/
int main(int argc, char *argv[]) {
	int i;
	questao6();
	questao7();
	questao8();
	questao10();
	getchar();
	return 1337;
}

/*
Fun��o que printa o numero da questao
*/
void printaNquestao(int n){
	printf("\n\n---------------Questao N %d---------------\n\n",n);
}

/*
As afirma��es abaixo s�o relativas � lingugagem C

I - Se p � um ponteiro para x, o comando (*p)++ incrementa x.
II - O operador '&' retorna o endere�o da vari�vel que a ele sucede.
III - p[2] equivale a *(p+2).
*/
void questao6(){
	printaNquestao(6);
	//Instanciamos o ponteiro P
	int *p;
	
	//Instanciamos a variavel x
	int x = 10;
	
	//Atribuimos o endere�o de memoria de X para P
	p = &x;
	
	//Incrementa o valor do espa�o de mem�ria que P est� apontando
	(*p)++;
	printf("Valor de X: %d\n",x);
	
	//Instanciando o vetor de inteiros
	int v[3] = {1,2,3};
	
	//Acessando o valor do vetor via ponteiro
	printf("Valor de *(v+2): %d",*(v+2));
}

/*
Sabendo que o ^ (circunflexo) � o operador bin�rio bit-a-bit XOR,
assinale a alternativa correta com base no c�digo em linguagem C apresentado a seguir
*/
void questao7(){
	printaNquestao(7);
	//Instanciando e Atribuindo os valores para as vari�veis A e B
	int a = 3;
	int b = 2;
	//Mostrando os valores iniciais
	printf("A -%d \nB -%d \n",a,b);
	
	//
	a = a^b;
	printf("Valor de A apos a primeira troca de valores %d \n",a);
	
	b = b^a;
	printf("Valor de B apos a primeira troca de valores %d \n",b);
	
	a = a^b;
	printf("Valor de A apos a primeira troca de valores %d \n",a);
	
	printf("Valores de A e B apos a Atribuicao\n");
	printf("A - %d | B - %d \n",a,b);
	
}

/*
Assinale a alternativa que mostra a sa�da apresentada no console 
ap�s a execu��o do c�digo em linguagem C abaixo. 
*/
void questao8(){
	printaNquestao(8);
	static int x = 2;
	x += 5;
	printf("Valor de X na quest�o 8 : %d",x);
}

/*
Ap�s a execu��o do trecho de c�digo abaixo, qual ser� o valor da vari�vel q? 

RESPOSTA: alternativa D - A execu��o desse c�digo resulta num erro.

void questao09(){
	int n = 28, d = 8, q;
	for(q=0;n>=d;n=n-d){q++;}
	printf("QUEST�O 7 VALOR DE Q:%d",q);
}
*/

/*
Marque a alternativa que apresenta corretamente a sa�da 
do console ap�s a execu��o do c�digo C abaixo. 
RETORNO/RESPOSTA: e) 30 - 40 - 50.
*/
void questao10(){
	printaNquestao(10);
	//Instanciando vetor de inteiros com 5 itens
	int vet[5]={10,20,30,40,50};
	
	//Contador 
	int i =1;
	
	do{
		//Realiza um pr� incremento e depois printa o valor da posi��o no vetor
		printf("%d - ", vet[++i]);
		
	}while(i<4);
}

