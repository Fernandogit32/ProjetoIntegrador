#include <stdio.h>
int proposicaop, proposicaoq;
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
void proposicaoRegra(){
     printf("\tUse 0 para F\n");
    printf("\tUse 1 para V\n");
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
//--------------------------------------------------------------------------------------------------------
constantedois()
{
	float n;
    float i;
    double res;
    double somatoria;
    float k;
    double soma;
    double div;
    float cons;


	printf("\nQuanto maior o valor de K maior a proximação do número Euler\n\n");
	printf("\n\Valor de K: "); //RECEBENDO VALOR DE K ( VALOR INICIAL DA SOMTÓRIA )
		scanf("%f",&k);

	system("cls"); //FUNÇÃO PARA LIMPAR A TELA

    div = 1.0/k;
    soma = 1.0 + div;
    res = pow(soma,k);
    printf("\n RESULTADO:\n ");
    printf("                        1\n",186);
    printf("                   (1 + ",186);
    auxiliar(3);
    printf(")^k\n                         k");
    printf("\n\n");

    printf("                         1\n",186);
    printf("                   (1 + ",186);
    auxiliar(3);
    printf(")^%.0f     = %.20f\n                         %.0f",k,res,k);
    printf("\n");
    printf("\n<PRESSIONE ENTER PARA CONTINUAR>");
	 system("pause");
}
//--------------------------------------------------------------------------------------------------------
void logica1(){
    proposicaoRegra();
    printf("digite o valor da proposição p:");
    scanf("%d",&proposicaoq);
        if (proposicaop==1)
	            {
	            	printf("\n\tVoce digitou o valor logico verdadeiro para p\n");
	            	printf("~p = F");
	            }
        if(proposicaop==0)
	           {
	            	printf("\n\tVoce digitou o valor logico falso para p\n");
	            	printf("~p= V");

	           }
        printf("\n<PRESSIONE ENTER PARA CONTINUAR>");
        system("pause");
}
//---------------------------------------------------//-----------------------
        void logica2(){
                proposicaoRegra();
	            printf("digite o valor da proposição p:");
	            scanf("%d",&proposicaop);
	            printf("digite o valor da proposição q:");
	            scanf("%d",&proposicaoq);
	          	if (proposicaop == 0 && proposicaoq == 0)
	          	{
	            	printf("\tF ^ F = F");
	          	}
	          	if (proposicaop == 0 && proposicaoq == 1)
	          	{
	            	printf("\tF ^ V = F");
	          	}
	          	if (proposicaop == 1 && proposicaoq == 0)
	          	{
	            	printf("\tV ^ F = F");
	          	}
	          	if (proposicaop == 1 && proposicaoq == 1)
	          	{
	            	printf("\tV ^ V = V");
	          	}
}
//--------------------------------------------------------------------------------------------------------
void logica3(){
                proposicaoRegra();
	            printf("digite o valor da proposição p:");
	            scanf("%d",&proposicaop);
	            printf("digite o valor da proposição q:");
	            scanf("%d",&proposicaoq);
	          	if (proposicaop == 0 && proposicaoq == 0)
	          	{
	            	printf("\n\tVoce digitou o valor logico falso para p e falso para q\n");
	            	printf("\tF v F = F");
	          	}
	          	if (proposicaop == 0 && proposicaoq == 1)
	          	{
	            	printf("\n\tVoce digitou o valor logico falso para p e verdadeiro para q\n");
	            	printf("\tF v V = V");
	          	}
	          	if (proposicaop == 1 && proposicaoq == 0)
	          	{
	            	printf("\n\tVoce digitou o valor logico verdadeiro para p e falso para q\n");
	            	printf("\tV v F = V");
	          	}
	          	if (proposicaop == 1 && proposicaoq == 1)
	          	{
	            	printf("\tV v V = V");
	          	}

}
//--------------------------------------------------------------------------------------------------------
void logica4(){
                proposicaoRegra();
	            printf("digite o valor da proposição p:");
	            scanf("%d",&proposicaop);
	            printf("digite o valor da proposição q:");
	            scanf("%d",&proposicaoq);
	          	if (proposicaop == 0 && proposicaoq == 0)
	          	{
	            	printf("\n\tVoce digitou o valor logico falso para p e falso para q\n");
	            	printf("\tF %c F = F",190);
	          	}
	          	if (proposicaop == 0 && proposicaoq == 1)
	          	{
	            	printf("\n\tVoce digitou o valor logico falso para p e verdadeiro para q\n");
	            	printf("\tF %c V = V",190);
	          	}
	          	if (proposicaop == 1 && proposicaoq == 0)
	          	{
	            	printf("\n\tVoce digitou o valor logico verdadeiro para p e falso para q\n");
	            	printf("\tV %c F = V",190);
	          	}
	          	if (proposicaop == 1 && proposicaoq == 1)
	          	{
	            	printf("\n\tVoce digitou o valor logico verdadeiro para p e verdadeiro para q\n");
	            	printf("\tV v V = F\n");
                    printf("\t  -  \n");
	          	}

}
//--------------------------------------------------------------------------------------------------------
void logica5(){
      proposicaoRegra();
	            printf("digite o valor da proposição p:");
	            scanf("%d",&proposicaop);
	            printf("digite o valor da proposição q:");
	            scanf("%d",&proposicaoq);
	          	if (proposicaop == 0 && proposicaoq == 0)
	          	{
	            	printf("\tVoce digitou o valor logico falso para p e falso para q\n");
	            	printf("\tF -> F = V");
	          	}
	          	if (proposicaop == 0 && proposicaoq == 1)
	          	{
	            	printf("\tVoce digitou o valor logico falso para p e verdadeiro para q\n");
	            	printf("\tF -> V = V");
	          	}
	          	if (proposicaop == 1 && proposicaoq == 0)
	          	{
	            	printf("\tVoce digitou o valor logico verdadeiro para p e falso para q\n");
	            	printf("\tV -> F = F");
	          	}
	          	if (proposicaop == 1 && proposicaoq == 1)
	          	{
	            	printf("\tVoce digitou o valor logico verdadeiro para p e verdadeiro para q\n");
	            	printf("\tV -> V = V");
	          	}

}
//--------------------------------------------------------------------------------------------------------
void logica6(){
                proposicaoRegra();
	            printf("digite o valor da proposição p:");
	            scanf("%d",&proposicaop);
	            printf("digite o valor da proposição q:");
	            scanf("%d",&proposicaoq);
	          	if (proposicaop == 0 && proposicaoq == 0)
	          	{
	            	printf("\tVoce digitou o valor logico falso para p e falso para q\n");
	            	printf("\tF <-> F = V");
	          	}
	          	if (proposicaop == 0 && proposicaoq == 1)
	          	{
	            	printf("\tVoce digitou o valor logico falso para p e verdadeiro para q\n");
	            	printf("\tF <-> V = F");
	          	}
	          	if (proposicaop == 1 && proposicaoq == 0)
	          	{
	            	printf("\tVoce digitou o valor logico verdadeiro para p e falso para q\n");
	            	printf("\tV <-> F = F");
	         	}
	          	if (proposicaop == 1 && proposicaoq == 1)
	          	{
	            	printf("\tVoce digitou o valor logico verdadeiro para p e verdadeiro para q\n");
	            	printf("\tV <-> V = V");
	          	}
}
//--------------------------------------------------------------------------------------------------------
void matriz1(){
  int linhaA;
  int colunaA;


system("cls");

printf("\n\n\n Para adicionarmos duas ou mais matrizes é preciso que todas elas tenham o mesmo número de linhas\n");
printf("      e de colunas. A soma dessas matrizes irá resultar em outra matriz que também terá o mesmo\n");
printf("      número de linhas e de colunas.\n\n\n\n");

  printf("Digite a quantidade de linhas que deseja para a matriz:  ");
  scanf("%d",&linhaA);
  printf("Digite a quantidade de colunas que deseja para a matriz:  ");
  scanf("%d",&colunaA);
  int matriza[linhaA][colunaA],i, j;
  int matrizb[linhaA][colunaA];
  int resultado[linhaA][colunaA];

  printf ("\n Digite os valores para os elementos da matriz A : \n");
  for ( i=0; i<linhaA; i++ ){
  puts("\n");
    for ( j=0; j<colunaA; j++ )
    {
    printf("\n Digite o valor da Linha %d e da Coluna %d da Matriz A: ", i, j);
       scanf ("%d", &matriza[i][j]);
    }

  }

   printf("\n\n******************* Elementos digitados: ********************* \n\n");
   for ( i=0; i<linhaA; i++ ){
   puts("\n");
   printf("\t");
    for ( j=0; j<colunaA; j++ )
    {
       printf ("|%d|",matriza[ i ][ j ]);
    }
   }

  system("pause");

//--------------------------------------------------------------------------------------------------

    printf ("\n Digite os valores para os elementos da matriz B: \n Segunda coluna:\n");
  for ( i=0; i<linhaA; i++ ){
  puts("\n");
    for ( j=0; j<colunaA; j++ )
    {
       printf("\n Digite o valor da Linha %d e da Coluna %d da Matriz B: ", i, j);
       scanf ("%d", &matrizb[i][j]);
    }

  }

   printf("\n\n******************* Elementos digitados: ********************* \n\n");
   for ( i=0; i<linhaA; i++ ){
   puts("\n");
   printf("\t");
    for ( j=0; j<colunaA; j++ )
    {
       printf ("|%d|",matrizb[ i ][ j ]);
    }
   }

  system("pause");

  printf("\n----------------- Resultado da soma das colunas -------------------------");

  for ( i=0; i<linhaA; i++ )
{
  for ( j=0; j<colunaA; j++ )
       resultado[i][j] = matriza[i][j]+matrizb[i][j];

}

for ( i=0; i< linhaA; i++ )
    {
   puts("\n");

    for ( j=0; j<colunaA; j++ )
       printf ("|%d|",matriza[i][j]);

     printf("   ------>   ");

    for ( j=0; j<colunaA; j++ )
       printf ("|%d|",matrizb[i][j]);

    printf("   ---RESULTADO--->   ");

    for ( j=0; j<colunaA; j++ )
       printf ("|%d|",resultado[i][j]);
    }
    system("pause");


}
//--------------------------------------------------------------------------------------------------------
void matriz2(){
    int linha = 0;
int coluna;
  system("cls");
printf("\n\n\n Para subtrairmos duas ou mais matrizes é preciso que todas elas tenham o mesmo número de linhas\n");
printf("      e de colunas. A subtração dessas matrizes irá resultar em outra matriz que também terá o mesmo\n");
printf("      número de linhas e de colunas.\n\n\n\n");

  printf("Digite a quantidade de linhas que deseja para a matriz:  ");
  scanf("%d",&linha);
  printf("Digite a quantidade de colunas que deseja para a matriz:  ");
  scanf("%d",&coluna);
  int matriza[linha][coluna],i, j;
  int matrizb[linha][coluna];
  int resultado[linha][coluna];

  printf ("\n Digite os valores para os elementos da matriz A: \n Primeira coluna:\n");
  for ( i=0; i<linha; i++ ){
  puts("\n");
    for ( j=0; j<coluna; j++ )
    {
      printf("\n Digite o valor da Linha %d e da Coluna %d da Matriz A: ", i, j);
       scanf ("%d", &matriza[i][j]);
    }

  }

   printf("\n\n******************* Elementos digitados: ********************* \n\n");
   for ( i=0; i<linha; i++ ){
   puts("\n");
   printf("\t");
    for ( j=0; j<coluna; j++ )
    {
       printf ("|%d|",matriza[ i ][ j ]);
    }
   }

  system("pause");

//--------------------------------------------------------------------------------------------------

    printf ("\n Digite os valores para os elementos da matriz B: \n Segunda coluna:\n");
  for ( i=0; i<linha; i++ ){
  puts("\n");
    for ( j=0; j<coluna; j++ )
    {
        printf("\n Digite o valor da Linha %d e da Coluna %d da Matriz B: ", i, j);
       scanf ("%d", &matrizb[i][j]);
    }

  }

   printf("\n\n******************* Elementos digitados ********************* \n\n");
   for ( i=0; i<linha; i++ ){
   puts("\n");
   printf("\t");
    for ( j=0; j<coluna; j++ )
    {
       printf ("|%d|",matrizb[ i ][ j ]);
    }
   }

 system("pause");

  printf("\n-----------------Resultado do produto das colunas-------------------------");

  for ( i=0; i<linha; i++ )
  {
  for ( j=0; j<coluna; j++ )
       resultado[i][j] = matriza[i][j]-matrizb[i][j];
  }

for ( i=0; i<linha; i++ )
    {
   puts("\n");

    for ( j=0; j<coluna; j++ )
       printf ("|%d|",matriza[i][j]);

     printf("   ------>   ");

    for ( j=0; j<coluna; j++ )
       printf ("|%d|",matrizb[i][j]);

    printf("   ---RESULTADO--->   ");

    for ( j=0; j<coluna; j++ )
       printf ("|%d|",resultado[i][j]);
    }
    system("pause");

}
//--------------------------------------------------------------------------------------------------------
matriz3(){

system("cls");
int i, j, lA, cA, lB, cB, X;
printf("\n\n\n Para descobrirmos o produto de duas ou mais matrizes é preciso que todas elas tenham o mesmo número de linhas\n");
printf("      e de colunas. O produto dessas matrizes irá resultar em outra matriz que também terá o mesmo\n");
printf("      número de linhas e de colunas.\n\n\n\n");

printf("\n Digite a quantidade de linhas da matriz A : ");
scanf("%d",&lA);
printf("\n Digite a quantidade de colunas da matriz A : ");
scanf("%d",&cA);
printf("\n Digite a quantidade de linhas da matriz B : ");
scanf("%d",&lB);
printf("\n Digite a quantidade de colunas da matriz B : ");
scanf("%d",&cB);
float matrizA[lA][cA],matrizB[lB][cB],matrizC[lA][cB],Aux=0;
if(cA==lB)
{
for(i=0; i<lA; i++)
{
        for(j=0; j<cA; j++)
        {
         printf("\n\n Digite o valor da Linha %d e da Coluna %d da Matriz A: ", i, j);
        scanf("%f", &matrizA[i][j]);
        }
        printf("\n");
        }
for(i=0; i<lB; i++)
{
        for(j=0; j<cB; j++)
        {
         printf("\n Digite o valor da Linha %d e da Coluna %d da Matriz B: ", i, j);
        scanf("%f", &matrizB[i][j]);
        }
        printf("\n");
        }
printf("Matriz A \n\n");
for(i=0; i<lA; i++)
{
        for(j=0; j<cA; j++)
        {
        printf("%6.f", matrizA[i][j]);
        }
        printf("\n\n");
        }
printf("Matriz B \n\n");
for(i=0; i<lB; i++)
{
        for(j=0; j<cB; j++)
        {
        printf("%6.f", matrizB[i][j]);
        }
        printf("\n\n");
        }
for(i=0; i<lA; i++)
{
        for(j=0; j<cB; j++)
        {
                 matrizC[i][j]=0;
                 for(X=0; X<lB; X++)
                 {
                 Aux += matrizA[i][X] * matrizB[X][j];
                 }
                 matrizC[i][j]=Aux;
                 Aux=0;
                 }
                 }
                 printf("\n\n");
printf("Matriz Gerada da Multiplicação: A*B \n\n");
for(i=0; i<lA; i++)
{
        for(j=0; j<cB; j++)
        {
        printf("%6.f", matrizC[i][j]);
        }
        printf("\n\n");
        }
        printf("\n\n");
        }
else
{
printf("\n\n Nao ha como multiplicar as matrizes dadas \n");
}
system("pause");
}
//--------------------------------------------------------------------------------------------------------
matriz4(){
    system("cls");
int linha = 0;
int coluna;
   printf("\n\n\n    O determinante de uma Matriz é dado pelo valor numérico resultante da subtração entre\n");
   printf("  o somatório do produto dos termos da diagonal principal e do somatório do produto\n");
   printf("  dos termos da diagonal secundária. Nas matrizes quadradas de ordem 3x3 esses\n");
   printf("  cálculos podem ser efetuados repetindo-se a primeira e a segunda coluna, aplicando em seguida\n");
   printf("  a regra de Sarrus. Lembrando que uma matriz é quadrada quando o número de linhas\n");
   printf("  é igual ao número de colunas.\n\n\n");
  printf("Digite a quantidade de linhas que deseja para a matriz:  ");
  scanf("%d",&linha);
  printf("Digite a quantidade de colunas que deseja para a matriz:  ");
  scanf("%d",&coluna);
  int matriza[linha][coluna],i, j;
  int matrizb[linha][coluna];
  int matrizc[15];
  if(linha!=coluna)
  {
   printf("   Lembrando que uma matriz é quadrada quando o número de linhas\n");
   printf("  é igual ao número de colunas.\n\n\n");
   return 0;
  }
  printf ("\n Digite os valores para os elementos da matriz: \n Primeira coluna:\n");
  for ( i=0; i<linha; i++ ){
  puts("\n");
    for ( j=0; j<coluna; j++ )
    {
      printf("\n Digite o valor da Linha %d e da Coluna %d da Matriz: ", i, j);
       scanf ("%d", &matriza[i][j]);
    }

  }

   printf("\n\n******************* Elementos digitados: ********************* \n\n");
   for ( i=0; i<linha; i++ ){
   puts("\n");
   printf("\t");
    for ( j=0; j<coluna; j++ )
    {
       printf ("|%d|",matriza[ i ][ j ]);
    }
   }

  system("pause");

if (linha==2)
{
    printf("\n\n\tMatriz quadrada de ordem 2x2.\n\n  ");
matrizc[2]= matriza[0][0]*matriza[1][1];
matrizc[3]= matriza[0][1]*matriza[1][0];

       matrizc[4]= matrizc[2]-matrizc[3];
       printf("\nResultado da matriz determinante 2x2 = %d\n", matrizc[4]);
}
if(linha==3)
{
    printf("\n\n\tMatriz quadrada de ordem 3x3.\n\n  ");
matrizc[0]= matriza[0][0]*matriza[1][1]*matriza[2][2];
matrizc[1]= matriza[0][1]*matriza[1][2]*matriza[2][0];
matrizc[2]= matriza[0][2]*matriza[1][0]*matriza[2][1];



matrizc[3]= matriza[2][0]*matriza[1][1]*matriza[0][2];
matrizc[4]= matriza[2][1]*matriza[1][2]*matriza[0][0];
matrizc[5]= matriza[2][2]*matriza[1][0]*matriza[0][1];



matrizc[7]=matrizc[0]+matrizc[1]+matrizc[2];
matrizc[8]=matrizc[3]+matrizc[4]+matrizc[5];
matrizc[9]=matrizc[7]-matrizc[8];
printf("\nResultado da matriz determinante 3x3 = %d\n", matrizc[9]);
        system("pause");
}
if(linha==4)
{
    printf("\n\n\tMatriz quadrada de ordem 3x3.\n\n  ");
matrizc[0]= matriza[0][0]*matriza[1][1]*matriza[2][2];
matrizc[1]= matriza[0][1]*matriza[1][2]*matriza[2][0];
matrizc[2]= matriza[0][2]*matriza[1][0]*matriza[2][1];
matrizc[3]= matriza[0][2]*matriza[1][0]*matriza[2][1];



matrizc[4]= matriza[2][0]*matriza[1][1]*matriza[0][2];
matrizc[5]= matriza[2][1]*matriza[1][2]*matriza[0][0];
matrizc[6]= matriza[2][2]*matriza[1][0]*matriza[0][1];
matrizc[7]= matriza[2][2]*matriza[1][0]*matriza[0][1];



matrizc[7]=matrizc[0]+matrizc[1]+matrizc[2];
matrizc[8]=matrizc[3]+matrizc[4]+matrizc[5];
matrizc[9]=matrizc[7]-matrizc[8];
printf("\nResultado da matriz determinante 3x3 = %d\n", matrizc[9]);

   system("pause");
}

   system("pause");

}
//--------------------------------------------------------------------------------------------------------
void funcao1(){
    int k;

    printf("Digite o valor de k: ");
	scanf("%d",&k);
    printf("Resultado de f(x)= %d = %d\n", k, k);
    printf("Resultado igual valor inserido pois se trata de uma funcao constante,\né caracterizada por apresentar uma lei de formacao f(x) = c,\n na qual c é um numero real.");
}
//--------------------------------------------------------------------------------------------------------
void funcao2(){
    int x, k;
    double funcao;
    printf("Digite o valor de x: ");
    scanf("%d",&x);
    printf("Digite o valor de k: ");
    scanf("%d",&k);
    funcao = pow(x,k);//função para expoente pow(base, expoente)
    printf("\nValor de %c(x)= x^k =  %.5f",159,funcao);
}
//--------------------------------------------------------------------------------------------------------
void funcao3(){
    int x, k;
    double funcao;
    printf("Digite o valor de x: ");
    	scanf("%d",&x);
    printf("Digite o valor de k: ");
        scanf("%d",&k);
    funcao = pow(k,x);//função para expoente pow(base, expoente)
    printf("\nValor de %c(x)= k^x eh: %.5f",159,funcao);
}
//--------------------------------------------------------------------------------------------------------
void funcao4(){
     int x, k;
    float log1;
    float log2;
    float resultado;
    printf("Digite o valor de k: ");
        scanf("%d",&k);
    printf("Digite o valor de x: ");
        scanf("%d",&x);
    log1 = log(x);
    log2 = log(k);
    resultado = log1/log2;
    printf("\nValor de %c(x)= x^k =  %.5f",159,resultado);
}
//--------------------------------------------------------------------------------------------------------
void funcao5(){
     int x;
    printf("Digite o Numero a ser Convertido em graus: ");
    scanf("%d",&x);
    printf("\nValor de %c(x)= sen(%d) = :%.5f\n",159,x,sin(x*3.14159265/180));
}
//--------------------------------------------------------------------------------------------------------
void funcao6(){

    int x;
    printf("Digite o Numero a ser Convertido em graus: ");
        scanf("%d",&x);
    printf("\nValor de %c(x)= cos(%d) = :%.5f",159,x,cos(x*3.14159265/180));
}
//--------------------------------------------------------------------------------------------------------
void funcao7(){
     int x;
    printf("Digite o Numero a ser Convertido em graus: ");
        scanf("%d",&x);
    printf("\nValor de %c(x)= tan(%d) = :%.5f",159,x,tan(x*3.14159265/180));
}
//--------------------------------------------------------------------------------------------------------
void funcao8(){
     int x;
    printf("Digite o numero para calcular a Raiz: ");
        scanf("%d",&x);
    printf("\nRaiz de %d = %.5f",x,sqrt(x));
}
//--------------------------------------------------------------------------------------------------------
void funcao9(){
     float x;
    float div;
    printf("Digite o valor de x: ");
        scanf("%f",&x);
    if(x==0)
        printf("ERRO: nao pode ser dividido por 0\n");
    else
    {
        div = 1 / x;
        printf("Valor de %c(x)= 1/%f = %.4f",159,x,div);
    }
}
//--------------------------------------------------------------------------------------------------------
void funcao10(){
     int x;
    double e = 2.718281828459045235360287;
    printf("Digite o valor de x: ");
        scanf("%d",&x);
    printf("Valor de %c(x)=e^%d = %.5f",159, x,pow(e,x));
}
//--------------------------------------------------------------------------------------------------------
void funcao11(){
     int x;
    printf("Digite o valor de x: ");
        scanf("%d",&x);
    printf("\nvalor de %c(x)= log(%d) = %.5f",159, x, log(x));
}
//--------------------------------------------------------------------------------------------------------

void combinatoria1(){
    int k,x,y,z,n,p,i;


            	system("cls");
            	printf("\tPermutação Simples(Apenas numeros inteiros)\n\n Formula: P(n)=n!\n\n De o valor de \"n\" \n");  // Formula matematica que sera efetuada
            		scanf("%d",&n);  // Entrada de valor "n"
            	x = n;  // Esrrutura de repetição para efetuar a fatoração de "n"
            	for(i=n-1;i>=1;i--)
                	x = x*i;

            	if (n<0)  // Condição caso o usuario entre com um numero não aceitavel
                	printf("\"ERRO\" Conta Invalida!(Numero negativo ou igual a zero)\n\n");  // Mensagem de erro na tela
            	else
                	printf("Resultado: P(%d)=%d \n\n",n,x);  // Mensagem mostrando o resultado na tela

				 system("pause");  // Esquema para pausar o programa
            	printf("(Pressione ENTER para voltar)\n\n");
            	 system("pause");  // Entrada de qualque tecla para voltar ao menu

}
//--------------------------------------------------------------------------------------------------------
void combinatoria2(){
    int k,x,y,z,n,p,i;
    system("cls");
            	printf("\tPermutação com Repetição(Apenas numeros inteiros)\n\n            n \n Formula: Pr  = n!/k!\n            k \n\n De o valor de \"n\" e \"k\" \n");  //Formula do calculo a ser efetuado
            		scanf("%d",&n);  // Entrada do valor de "n"
            	x = n;  // Esrrutura de repetição para efetuar a fatoração de "n"
            	for(i=n-1;i>=1;i--)
                	x = x*i;

            		scanf("%d",&k);  // Entrada do valor de "k"
            	y = k;  // Esrrutura de repetição para efetuar a fatoração de "k"
            	for(i=k-1;i>=1;i--){
                	y = y*i;
            }
            	if (n==0)  // Estrutura de condição de "erro"
                	printf("\"ERRO\" Conta Invalida!(\"n\" não pode ser igual a 0)\n\n");  // Mensagem de erro caso "n" seja igual a zero
            	else if (k==0)  // Outra condição de "erro"
                	printf("\"ERRO\" Não é possivel divisão por zero!\n\n");  // Mensagem de erro, não é possivel divisão por zero
            	else
                	printf("              %d \n Resultado: Pr    = %d\n              %d \n\n",n,x/y,k);  // Mensagem do resultado na tela
            	 system("pause");  // Esquema para pausar o programa
            	printf("(Pressione ENTER para voltar)\n\n");
            	 system("pause"); // Entrada de qualque tecla para voltar ao menu

}
//-----------------------------------------------------------------------------------------------------------------
void combinatoria3(){
    int k,x,y,z,n,p,i;
    system("cls");
	            printf("\tArranjo Simples(Apenas numeros inteiros)\n\n Formula: A(n,p)= n!/(n-p)!\n\n De o valor de \"n\" e \"p\" \n");  // Formula a ser efetuada
	            	scanf("%d",&n);  // Entrada do valor de "n"
	            x = n; // Esrrutura de repetição para efetuar a fatoração de "n"
	            for(i=n-1;i>=1;i--)
	                x = x*i;

	            	scanf("%d",&p);  // entrada do valor de "p"
	            y = n-p;  // Esrrutura de repetição para efetuar a fatoração de "n-p"

				for(i=n-p-1;i>=1;i--)
	                y = y*i;

            	if (n==0)  // Estrutuda de condição
                	printf("\"ERRO\" Conta Invalida!(o valor de \"n\" deve ser diferente de zero)\n\n");  // Mensagem de erro na tela caso "n" seja igual a zero
            	else
                	printf("Resultado: A(%d,%d)= %d\n\n",n,p,x/y);  // Mensagem do resultado na tela
            	 system("pause");  // Esquema para pausar o programa
            	printf("(Pressione ENTER para voltar)\n\n");
            	 system("pause");  // Entrada de qualque tecla para voltar ao menu
}
//----------------------------------------------------------------------------------------------------
void combinatoria4(){
    int k,x,y,z,n,p,i;
    system("cls");
	            printf("\tArranjo com Repetição(Apenas numeros inteiros)\n\n Formula A(n,p)= n^p \n\n De o valor de \"n\" e \"p\" \n");  // Formula a ser efetuada
	            	scanf("%d",&n); // Entrada do valor de "n"
	            	scanf("%d",&p); // Entrada do valor de "p"
	            x = pow(n,p);  // função de potencia da biblioteca math.h
	            if (n==5)
                printf("Resultado: Ar(%d,%d)= %d^%d ou seja %d \n\n",n,p,n,p,x+1);
                else
	            printf("Resultado: Ar(%d,%d)= %d^%d ou seja %d \n\n",n,p,n,p,x);  // Mensagem do ressultado na tela
	             system("pause");  // Esquema para pausar o programa
	            printf("(Pressione ENTER para voltar)\n\n");
	             system("pause");  // Entrada de qualque tecla para voltar ao menu
}
//---------------------------------------------------------------------------------------------------------
void combinatoria5(){
            int k,x,y,z,n,p,i;
            system("cls");
            	printf("\tCombinação Simples(Apenas numeros inteiros)\n\n Formula C(n,p)= n!/p!(n-p)! \n\n De o valor de \"n\" e \"p\" \n");  // Formula a ser efetuada
            	scanf("%d",&n);  // Enttrada do valor de "n"
            	x = n;  // // Esrrutura de repetição para efetuar a fatoração de "n"
            	for(i=n-1;i>=1;i--)
                	x = x*i;

            	scanf("%d",&p);  // Entrada do valor de "p"
            	y = p;  // Esrrutura de repetição para efetuar a fatoração de "p"

            	for(i=p-1;i>=1;i--)
                	y = y*i;

            	z = n-p; // Esrrutura de repetição para efetuar a fatoração de "n-p"
            	for(i=n-p-1;i>=1;i--)
                	z = z*i;

            	if (p==0)  // Estrutura de condição
                	printf("\t\"ERRO\" Não é possivel divisão por zero!\n\n");  // Mensagem de erro, "p" deve ser diferente de 0
            	else
                	printf("Resultado: C(%d,%d)= %d\n\n",n,p,x/(y*z));  // Mensagem do Resultado na tela
            	 system("pause");  // Esquema para pausar o programa
            	printf("(Pressione ENTER para voltar)\n\n");
            	 system("pause");  // Entrada de qualque tecla para voltar ao menu
}
//--------------------------------------------------------------------------------------------------
void combinatoria6(){
            int k,x,y,z,n,p,i;
            system("cls");
            	printf("\tCombinação com repetição(Apenas numeros inteiros)\n\n Formula C(n+p-1,p)= (n+p-1)!/p!(n-1)! \n\n De o valor de \"n\" e \"p\" \n");  // Formula a ser efetuada
            	scanf("%d",&n);  // Entrada do valor de "n"
            	scanf("%d",&p);  // Entrada do valor de "p"
            	x = n+p-1;  // Esrrutura de repetição para efetuar a fatoração de "n+p-1"
            	for(i=n+p-1-1;i>=1;i--)
                	x = x*i;

            	y = p;  // Esrrutura de repetição para efetuar a fatoração de "p"
            	for(i=p-1;i>=1;i--)
                	y = y*i;
            	z = n-1;  // Esrrutura de repetição para efetuar a fatoração de "n-1"

				for(i=n-1-1;i>=1;i--)
                z = z*i;

            	if (p==0)  // Estrutura de condição
                	printf("\t\"ERRO\" Não é possivel divisão por zero!\n\n");  // Mensagem de erro o valor de "p" deve ser diferente de zero
            	else
                	printf("Resultado: C(%d+%d-1,%d)= %d\n\n",n,p,p,x/(y*z));  // Mensagem do resultado na tela
            	 system("pause");  // Esquema para pausar o programa
            	printf("(Pressione ENTER para voltar)\n\n");
            	 system("pause");;  // Entrada de qualque tecla para voltar ao menu
}

void derivada2(){
    int x;
	int a;
	int res;
	int opcao;

system("cls");
	printf("\tDigite o valor de X\n");
	scanf("%d",&x);

	printf("\tDigite o valor de A\n");
	scanf("%d",&a);

	printf("\n\t                                     d\n");
	printf("\t Aplicar a regra das potência:     ----- (x^a) = a * x ^ a-1 \n",205,205,205,205,205);
	printf("\t                                     dx\n");

	printf("\n\n");
	printf("\t Aplicação:                        %d * %dx ^ %d \n",a,x,a-1);
	printf("\n\n\n");

	res = a*x;
	//res = pow(res,a-1);

	printf("\n\n");
	printf("\t Resultado                         = %dx^%d\n",res,a-1);
	printf("\n\n");

	//printf("\n\t 1 - Realizar outra operação \n \t 0 - Voltar MENU inicial \n");
	//scanf("%d",&opcao);
	printf("\n<PRESSIONE ENTER PARA CONTINUAR>");
	system("pause");

}
void derivada3(){
    int x;
	int k;
	int res;
system("cls");
	printf("\tDigite o valor de K\n");
	scanf("%d",&k);

	printf("\tDigite o valor de X\n");
	scanf("%d",&x);

	printf("\n\t                                     d\n");
	printf("\t Aplicar a regra das potência:     ----- (x^a) = a * x ^ a-1 \n",205,205,205,205,205);
	printf("\t                                     dx\n");

	printf("\n\n");
	printf("\t Aplicação:                        %d * %dx ^ %d \n",x,k,x-1);
	printf("\n\n\n");

	res = x*k;
	//res = pow(res,x-1);

	printf("\n\n");
	printf("\t Resultado                         = %dx^%d\n",res,x-1);
	printf("\n\n");
	printf("\n<PRESSIONE ENTER PARA CONTINUAR>");
system("pause");
}

void derivada4(){
    float k;
   float x;
   float lnk;
 system("cls");
       printf("Digite o valor de k: ");
           scanf("%f",&k);
       printf("Digite o valor de x: ");
           scanf("%f",&x);
       lnk= log(k);
       printf(" d\n____ = logk(x) \n dx\n\n 1\n____ = %.6f\nxlnk\n",1/(x*lnk));
       printf("\n<PRESSIONE ENTER PARA CONTINUAR>");
	  system("pause");
}

void derivada5(){
    float x;
     system("cls");
    printf("Digite o valor de x: ");
    scanf("%f",&x);
    printf(" d\n_____ sen(x)= cos(x) \n dx\n\n cos(x) = %.5f",cos(x*3.14159265/180));
    printf("\n<PRESSIONE ENTER PARA CONTINUAR>");
	system("pause");
}
derivada6(){
     float x;
   double teste;
    system("cls");
       printf("Digite o valor de x: ");
           scanf("%f",&x);

       printf(" d\n_____ cos(x)= -sen(x) \n dx\n\n cos(x) = %.5f\n",sin(x*3.14159265/180*(-1)));
       printf("\n<PRESSIONE ENTER PARA CONTINUAR>");
	  system("pause");
}

derivada7(){
    float x;
   float cosseno;
   float sec;
 system("cls");
   printf("Digite o valor de x: ");
   	scanf("%f",&x);
   cosseno = cos(x*3.14159265/180);
   sec = pow(cosseno,2);
   printf(" d\n_____ cos(x)= sec^2(x) \n dx\n\n sec^2 = %.5f\n",1/sec);
   printf("\n<PRESSIONE ENTER PARA CONTINUAR>");
   system("pause");
}

derivada8(){
    float x;
   float raiz;
    system("cls");
    printf("Digite o valor de x: ");
        scanf("%f",&x);
    raiz=1/(2*sqrt(x));
    printf(" d\n____ = raiz de x \n dx\n\n     1\n___________ = %.5f\n2*raiz de x\n",raiz);
    printf("\n<PRESSIONE ENTER PARA CONTINUAR>");
system("pause");
}

derivada9(){

int x;
	int dec;
 system("cls");
	printf("\tDigite o valor de X\n");
	scanf("%d",&x);

	printf("\tDeseja acompanhar o passo a passo ?\n \t 1 - SIM \n \t 2 - NÃO");
	scanf("%d",&dec);
system("pause");
	system("cls");

	if (dec==1)
	{

		printf("\n\t1 PASSO:\n");
		printf("\t                                           1\n");
		printf("\tAplicar as propriedades dos expoentes:   ----- = a^-1\n",205,205,205,205,205);
		printf("\t                                           a\n");
		//printf("APLICAÇÃO:\n");

		printf("\t  1      d\n");
		printf("\t ----   ----  (x^-1) \n",205,205,205,205,205,205,205,205,205);
		printf("\t  %d     dx\n\n ",x);

	system("pause");
		system("cls");

		printf("\n\t2 PASSO:");
		printf("\n\t                                     d\n");
		printf("\t Aplicar a regra das potência:     ----- (x^a) = a * x ^ a-1 \n",205,205,205,205,205);
		printf("\t                                     dx\n");

		//printf("APLICAÇÃO:\n");
		printf("\t   1  \n");
		printf("\t ----(-1 * x ^-1 -1) \n",205,205,205,205);
		printf("\t  %d     \n\n ",x);
		printf("\t ");

		system("pause");
		system("cls");

		//simplificar
		printf("\n\t SIMPLIFICAR:\n");
		printf("\t 1 - Remover os parenteses (-a) = -a\n\n");
		printf("\t 2 - Subtrair: -1 -1 = -2\n\n");
		printf("\t 3 - Aplicar as propriedades dos expoentes: a^-b = 1 / a^b\n\n");
		printf("\t 4 - Multiplicar as fraçoes: a/ b  *  c/d = a * c / b * d\n\n");

		printf("\tRESULTADO\n\n");
		printf("\t    1  \n");
		printf("\t - ---- \n",205,205,205,205);
		printf("\t   %dx^2     \n\n ",x);
		printf("\t ");




	}
	if (dec==2)
	{
		printf("\t  1\n");
		printf("\t%c%c%c%c%c%c\n",205,205,205,205,205,205);
		printf("\t %dx%c",x,253);
	}

	printf("\n<PRESSIONE ENTER PARA CONTINUAR>");
system("pause");

}

void derivada11(){
    float x;
   float ln;
    system("cls");
    printf("Digite o valor de x: ");
    	scanf("%f",&x);
    printf("\nf(x)= ln(x)\n\n 1\n___ = %.5f\n x\n",1/x);
    printf("\n<PRESSIONE ENTER PARA CONTINUAR>");
system("pause");
}







