#include <stdio.h>
int potencia(int x,int pot)
{
	long int res=1;
	int i;
	for(i=1;i<=pot;i++)
	res = res * x;
	return res;
}
auxiliar(int tam)
{
	int i;

	for(i = 1;i<=tam;i++)
		printf("%c",150);
}

primeiraSomatoria()
{
	int n;
	int a;
    int i;
    unsigned long int somatoria=0;
    int inicial;
    int deci;
    printf("\t\t\t\t\t AVISO IMPORTANTE: \n");
    printf("\n \tCERTIFIQUE-SE QUE O TOTAL DA SOMATORIA NÃO ULTRAPASSE 4.294.967.295\n\n");
    printf("\t\t\t\t<PRESSIONE ENTER PARA PROSSEGUIR>\n");
    system("pause");
    system("cls");
	printf("Entre com o valor de  a: "); //RECEBENDO VALOR DE A - ESTE VALOR DEFINE O VALOR DA CONSTANTE
    scanf("%d",&a);
	printf("Entre com o valor de  n: "); //RECEBENDO VALOR DE N - ESTE VALOR DEFINE O LIMITE DA SOMATÓRIA
    scanf("%d",&n);
	printf("Entre com o valor de  k: "); //RECEBENDO VALOR DE K - ESTE VALOR DEFINE O VALOR INICIAL DA SOMATÓRIA
    scanf("%d",&inicial);
    system("cls");
    		for(i=inicial;i<=n;i++){
                somatoria = somatoria + potencia(a,i);
                printf("Somatorio \n\n");
                printf("     \t     n                \n");
                printf("1-  \t  E       k           \n");
                printf("\     \t     k = a            \n\n");
                printf("RESULTADO FINAL DO SOMATÓRIO = %d\n ",somatoria);
                    printf("\n<PRESSIONE QUALQUER TECLA PARA CONTINUAR>");
                    system("pause");
    		}

}

//---------------------------------------------------------
segundaSomatoria()
{
	unsigned long int a,i;
	int t,inicial,n,m;
    unsigned long int somatoria=0;
    printf("\t\t\t\t\t AVISO IMPORTANTE: \n");
    printf("\n \t\tCERTIFIQUE-SE QUE O TOTAL DA SOMATORIA NÃO ULTRAPASSE 4.294.967.295\n\n");
    printf("\t\t\t\t<PRESSIONE ENTER PARA PROSSEGUIR>\n");
    system("pause");
    system("cls");

	printf("Entre com o valor de  a: "); //RECEBENDO VALOR DE A ( CONSTANTE )
		scanf("%d",&a);
	printf("Entre com o valor de  n: "); //RECEBENDO VALOR DE N ( VALOR LIMITE DA SOMATÓRIA )
		scanf("%d",&n);
	printf("Entre com o valor de  k: "); //RECEBENDO VALOR DE K ( VALOR INICIAL DA SOMATÓRIA )
		scanf("%d",&inicial);
	printf("Entre com o valor de  m: "); //RECEBENDO VALOR DE M ( VALOR CONSTANTE + EXPONENCIAÇÃO )
		scanf("%d",&m);
			system("cls");
    		for(i=inicial;i<=n;i++) //GERANDO VALORES
    		{
				t = i;
    			t = pow(t,m);
				somatoria = somatoria + potencia(a,t);
			}
			printf("\t Somatório:\n");
			 printf("      \t      n      m         \n");
             printf("2- \t   E       k          \n");
             printf("     \t      k = a           \n\n");
    		printf("RESULTADO FINAL DO SOMATÓRIO = %d\n ",somatoria);
		}

//------------------------------------------------------
terceiraSomatoria()
{
	//int n,m;
	unsigned long int a,t,i,n,m;
    unsigned long int somatoria =0;
    unsigned long int pot;
    int inicial;

	printf("\t\t\t\t\t AVISO IMPORTANTE: \n");
    printf("\n \t\tCERTIFIQUE-SE QUE O TOTAL DA SOMATORIA NÃO ULTRAPASSE 4.294.967.295\n\n");
    printf("\t\t\t\t<PRESSIONE ENTER PARA PROSSEGUIR>\n");
    system("pause");
      system("cls");
	printf("Entre com o valor de a :"); //RECEBENDO VALOR DE A ( CONSTANTE )
		scanf("%d",&a);
	printf("Entre com o valor de n :"); //RECEBENDO VALOR DE N ( LIMITE DA SOMATÓRIA )
		scanf("%d",&n);
	printf("Entre com o valor de k :"); //RECEBENDO VALOR DE K ( VALOR INICIAL DA SOMATÓRIA + EXPONENCIAÇÃO)
		scanf("%d",&inicial);
	printf("Entre com o valor de m: "); //RECEBENDO VALOR DE M (VALOR CONSTANTE + EXPONENCIAÇÃO )
		scanf("%d",&m);
    		for(i=inicial;i<=n;i++) //GERANDO VALORES
			{
    			t = i;
    			t = potencia(m,t);
				somatoria = somatoria + potencia(a,t); //ARMAZENANDO VALORES
			}
			printf("\t SOMATÓRIO:\n"); //ESTRUTURA
			 printf("      \t     n     k          \n");
             printf("3- \t  E       m           \n");
             printf("     \t     k = a            \n\n");
    		printf("RESULTADO FINAL DO SOMATÓRIO = %d\n ",somatoria);
}
//------------------------------------------------------------------------------------------------------------------
constanteum()
{
    int n;
    int i;
    double res;
    double somatoria;
    int k;

	printf("Entre com o valor de k: "); //RECEBENDO VALOR DE K ( VALOR INICIAL DA SOMTÓRIA )
		scanf("%d",&k);

	printf("Entre com o valor de n: "); //RECEBENDO VALOR DE N ( VALOR LIMITE DA SOMATÓRIA )
		scanf("%d",&n);

	system("cls"); //FUNÇÃO PARA LIMPAR A TELA

	for(i=0;i<=n;i++) //GERANDO VALORES
    {
    	res = (4*i+1)*(4*i+3);
    	res = 8 / res;
		somatoria = somatoria + res; //ARMAZENDO VALORES
		res = 0; //ZERANDO VALORES, POIS FORAM ARMAZENADOS EM SOMATÓRIA.
    }

	printf("\n\n"); //ESTRUTURA
	printf("\t\t\t\t\t\t\t\t SOMATÓRIA: \n");
	//auxiliar(25);

	printf("\n\t\t\t\t\t\t\t\t%c%c%c%c%c n = %d \n",150,150,150,150,187,n);
    printf("\t\t\t\t\t\t\t\t%c\n",186);
    printf("\t\t\t\t\t\t\t\t%c                       8\n",186);
    printf("\t\t\t\t\t\t\t\t%c                ",186);

	auxiliar(18);

	printf("\n");
    printf("\t\t\t\t\t\t\t\t%c%c%c           =  (4k + 1) (4k + 3)        \n",204,150,150);
    printf("\t\t\t\t\t\t\t\t%c\n",186);
   	printf("\t\t\t\t\t\t\t\t%c\n",186);
   	printf("\t\t\t\t\t\t\t\t%c\n",186);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c k = %d\n\n\n\n\n\n",150,150,150,150,188,k);
    printf("\n");

	printf("\n%c%c%c%c%c n = %d \n",150,150,150,150,187,n);
    printf("%c\n",186);
    printf("%c  %.12f\n",186,somatoria);
    printf("%c                            8                          8                          8             (...)  =         %.12f\n",186,somatoria);
    printf("%c                 ",186);
    auxiliar(22);
    printf("   +  ");
    auxiliar(22);
    printf("   +  ");
    auxiliar(22);
    printf("              ");
    auxiliar(22);
    printf("\n");
	printf("%c%c%c           =  (4 * %d + 1) (4 * %d + 3)    (4 * %d + 1) (4 * %d + 3)      (4 * %d + 1) (4 * %d + 3)                    RESULTADO  \n",204,150,150,k,k,k+1,k+1,k+2,k+2);
    printf("%c\n",186);
   	printf("%c\n",186);
   	printf("%c\n",186);
    printf("%c%c%c%c%c k = %d\n\n\n\n\n\n",150,150,150,150,188,k);

    printf("\n<PRESSIONE ENTER PARA CONTINUAR>");
	system("pause");

}





