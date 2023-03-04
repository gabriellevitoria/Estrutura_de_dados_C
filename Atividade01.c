// arquivos de cabeçalho
#include <stdio.h>
#include <locale.h>
 //programa principal
 int main()
 {
 	//para falar Portyguês
 	
 	setlocale(LC_ALL,"Portuguese");
    //declaração de variáveis
	 int x1 = 3;
	 int x2 = 48;
	 
	 float f1 = 35.98;
	 float f2 = -7.36;
	 
	 double d1 = 25.71;
	 double d2 = -9.32;
	 
	 char c1 ='G';
	 char c2 = 'D';
	 
	 bool b1 = true;
	 bool b2 = false;
	 
	 //exbibição de conteúdos e endereços
	 printf("TIPO INTEIRO\n");
	 printf("------------\n");
	 
	 printf("Variavel x1 - endereco %p - qtd byte %d - conteudo %4d\n" , &x1,sizeof(x1), x1);
	 printf("Variavel x2 - endereco %p - qtd byte %d - conteudo %4d\n" , &x2,sizeof(x2), x2);
	 
	 
	 printf("TIPO FLOAT\n");
	 printf("------------\n");
	 
	 printf("Variavel f1 - endereco %p - qtd byte %d - conteudo %.3f\n" , &f1, sizeof(f1), f1);
	 printf("Variavel f2 - endereco %p - qtd byte %d - conteudo %.3f\n" , &f2, sizeof(f2), f2);
	 
	 
	 printf("TIPO DOUBLE\n");
	 printf("------------\n");
	 
	 printf("Variavel d1 - endereco %p - qtd byte %d - conteudo %.3f\n" , &d1, sizeof(d1), d1);
	 printf("Variavel d2 - endereco %p - qtd byte %d - conteudo %.3f\n" , &d2, sizeof(d2), d2);
	 
	 printf("TIPO CHAR\n");
	 printf("------------\n");
	 
	 printf("Variavel c1 - endereco %p - qtd byte %d - conteudo %c\n" , &c1, sizeof(c1), c1);
	 printf("Variavel c2 - endereco %p - qtd byte %d - conteudo %c\n" , &c2, sizeof(c2), c2);
	 
	 printf("TIPO BOOLEAN\n");
	 printf("------------\n");
	 
	 printf("Variavel b1 - endereco %p - qtd byte %d - conteudo %d\n" , &b1, sizeof(b1), b1);
	 printf("Variavel b2 - endereco %p - qtd byte %d - conteudo %d\n" , &b2, sizeof(b2), b2);
	 
	 
	 //finalização
	 return 0;	 
 }