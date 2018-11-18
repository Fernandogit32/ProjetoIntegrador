
#include <stdio.h>

void primeirasomatoria()
{
	int n;
	int a;
    int i;
    int somatoria = 0;
   printf("     \t     n                \n");
    printf("1-  \t  E       k           \n");
    printf("\     \t     k = a            \n\n");
    printf("----------------------------\n\n");
	printf("Entre com o valor de  a: ");
	scanf("%d",&a);

	printf("Entre com o valor de n: ");
	scanf(" %d",&n);


    for(i=1;i<=n;i++)
	somatoria = somatoria + potencia(a,i); //

	printf("O resultado é %d",somatoria);

}


int potencia(int c, int x)
{
	int i;
	int consts = c;

	for(i=2;i<=x;i++)
        {
            c = consts * c;
        }
	return c;
}
//---------------------------------------------------------
void segundaSomatoria()
{
    int n;
	int a;
    int i;
    int m;
    int t;
    unsigned int somatoria = 0;
    printf("      \t      n      m         \n");
    printf("2- \t   E       k          \n");
    printf("     \t      k = a           \n\n");
    printf("----------------------------\n\n");
	printf("Entre com o valor de a: ");
	scanf("%d",&a);

	printf("Entre com o valor de n: ");
	scanf(" %d",&n);

    printf("Entre com o valor de m: ");
    scanf("%d",&m);

    for(i=1;i<=n;i++)
    {
    t = i;
    t = potencia(t,m);
	somatoria = somatoria + potencia(a,t);
    }

	printf("O resultado é %d",somatoria);

}

//---------------------------------------------------------------

terceiraSomatoria()
{
    int n;
	int a;
    int i;
    int m = 1;
    int t;
    unsigned long int somatoria = 0;
    printf("      \t     n     k          \n");
    printf("3- \t  E       m           \n");
    printf("     \t     k = a            \n\n");
    printf("-----------------------------\n\n");
	printf("Entre com o valor de a :");
	scanf("%d",&a);

	printf("Entre com o valor de n :");
	scanf(" %d",&n);

    printf("Entre com o valor de m: ");
    scanf("%d",&m);

    for(i=1;i<=n;i++)
    {
    t = i;
    t = potencia(m,t);
	somatoria = somatoria + potencia(a,t);
	//printf("PROCESSO %d --->  %d ^ %d ^ %d  = %lu \n",i,a,m,i,somatoria);
    }

	printf("O resultado é %ld",somatoria);
}

//------------------------------------------------------



