#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "funcoes.h"



int main(){

    int opcao=0;
    setlocale(LC_ALL, "Portuguese");

 //-------------------------//fun��o menu principal//-------------------------------
system("color ac");
printf("cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc\n");
printf("cccccccccccccccccc ccccccccccccccccccccccccccccccccccccccccccccccccc\n");
printf("cccccccccccccccc ccccccccccccccccccccccccccccccccccccccccccccccccccc\n");
printf("cccccccccccccc  cccccccccccccccccccccccccccccccccccccccccccccccccccc\n");
printf("cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc\n");
printf("cccc   ccc        c cccccccccc   ccc cccccc cc ccccccccccc    cccccc\n");
printf("ccc cccccc cccccc c ccccccccc cccccc cccccc cc cccccccccc cccc ccccc\n");
printf("cc ccccccc cccccc c cccccccc ccccccc cccccc cc ccccccccc ccccccc ccc\n");
printf("c cccccccc cccccc c ccccccc cccccccc cccccc cc cccccccc ccccccccc cc\n");
printf("c cccccccc        c ccccccc cccccccc cccccc cc cccccccc ccccccccc cc\n");
printf("cc ccccccc cccccc c cccccccc ccccccc cccccc cc ccccccccc ccccccc ccc\n");
printf("ccc cccccc cccccc c cccccccccc ccccc cccccc cc ccccccccccc ccccc ccc\n");
printf("cccc   ccc cccccc c       ccccc   cc        cc       cccccc    ccccc\n");
printf("cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc\n");
printf("cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc\n");
printf("cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc\n\n\n");

   void MenuPrincipal(){

   system("color 2e");
    printf("Menu Principal\n \n");
    printf("Escolha uma das Op��es\n \n");
    printf("1. Somat�rio \n");
    printf("2. Constantes\n");
    printf("3. L�gica Proporcional\n");
    printf("4. Matriz\n");
    printf("5. Fun��o\n");
    printf("6. Combinat�ria\n");
    printf("7. Deriva��o Num�ria\n");
    printf("8. Sair\n\n");
 int i;
   /*for(i = 0; i < 256; i++)
   {
      printf("%d %c\n", i, i);
   }*/
    scanf("%d",&opcao);




    void somatorio() {
    system("color 20");
    system("cls");
    printf("Escolha uma op��o \n\n");
    printf("Somatorio \n\n");
    printf("     \t     n                \n");
    printf("1-  \t  E       k           \n");
    printf("\     \t     k = a            \n\n");
    printf("----------------------------\n\n");
     printf("      \t      n      m         \n");
    printf("2- \t   E       k          \n");
    printf("     \t      k = a           \n\n");
    printf("----------------------------\n\n");
   printf("      \t     n     k          \n");
    printf("3- \t  E       m           \n");
    printf("     \t     k = a            \n\n");
    printf("-----------------------------\n\n");
    printf("4- Voltar ao menu Principal\n\n");
    scanf("%d",&opcao);
    switch(opcao)
    {
        case 1:

           system("cls");
           primeirasomatoria();
           printf("\nPressione qualquer tecla para continuar");
           system("pause");
           system("cls");
           MenuPrincipal();
        break;

        case 2:
            system("cls");
            segundaSomatoria();
            printf("\nPressione qualquer tecla para continuar");
            system("pause");
            system("cls");
            MenuPrincipal();
        break;

         case 3:
           system("cls");
           terceiraSomatoria();
           printf("\nPressione qualquer tecla para continuar");
           system("pause");
           system("cls");
           MenuPrincipal();
        break;

        case 4:
    system("cls");
    MenuPrincipal();
    default:
    system("cls");
    printf("Op��o Inv�lida Escolha Outra Op��o \n");
    system("pause");
    system("cls");
    somatorio();
    }
    }


    void constantes() {
        system("cls");
        system("color 20");
    printf("Escolha uma op��o \n\n");
    printf("Constantes \n\n");
    printf("1- Valor de PI\n\n");
    printf("2- valor de e\n\n");
    printf("3- Voltar ao menu Principal\n\n");
    scanf("%d",&opcao);
    switch(opcao)
    {
        case 1:

        break;

        case 2:

        break;

         case 3:
            system("cls");
            MenuPrincipal();
        break;
    default:
    system("cls");
    printf("Op��o Inv�lida Escolha Outra Op��o \n");
    system("pause");
    system("cls");
    constantes();
    }
    }



    void logicaProporcional() {
        system("cls");
           system("color 20");
    printf("Escolha uma op��o \n\n");
    printf("L�gica Proporcional \n\n");
    printf("1 ~ p \n\n");
    printf("2 p ^ q \n\n");
    printf("3 p v q \n\n");
    printf("4 p v q \n");
    printf("    -  \n");
    printf("5 p -> q \n \n");
    printf("6 p <-> q \n \n");
    printf("7 Voltar ao menu Principal\n\n");
    scanf("%d",&opcao);
    switch(opcao)
    {
        case 1:

        break;

        case 2:

        break;

        case 3:

        break;

        case 4:

        break;

        case 5:

        break;

        case 6:

        break;

         case 7:
            system("cls");
            MenuPrincipal();
        break;
    default:
    system("cls");
    printf("Op��o Inv�lida Escolha Outra Op��o \n\n");
    system("pause");
    system("cls");
    logicaProporcional();
    }
    }


    void matriz() {
        system("cls");
           system("color 20");
    printf("Escolha uma op��o \n\n");
    printf("Matriz \n\n");
    printf("1- Soma \n");
    printf("2- Subtra��o \n");
    printf("3- Produto \n");
    printf("4- Determinante \n");
    printf("5- Voltar ao menu Principal\n\n");
    scanf("%d",&opcao);
    switch(opcao)
    {
        case 1:

        break;

        case 2:

        break;

        case 3:

        break;

        case 4:

        break;

        case 5:
            system("cls");
            MenuPrincipal();
        break;

        default:
    system("cls");
    printf("Op��o Inv�lida Escolha Outra Op��o \n");
    system("pause");
    system("cls");
    matriz();
    }
    }


     void funcao() {
    system("cls");
       system("color 20");
    printf("Escolha uma op��o \n\n");
    printf("Fun�ao \n\n\n");
    printf("1- %c(x)=k\n\n",131);
    printf("\t k\n");
    printf("2- %c(x)=X\n\n",131);
    printf("\t x\n");
    printf("3- %c(x)=K \n\n\n",131);
    printf("4- %c(x)=log (x) \n",131);
    printf("\t   k\n\n");
    printf("5- %c(x)=sen(x) \n\n\n",131);
    printf("6- %c(x)=cos(x) \n\n\n",131);
    printf("7- %c(x)=tan(x) \n\n\n",131);
    printf("8- %c(x)=Raiz de X \n\n",131);
    printf("\t 1\n");
    printf("9- %c(x)= -\n",131);
    printf("\t x \n\n\n");
     printf("\t  x\n");
    printf("10- %c(x)=e \n\n\n",131);
    printf("11- %c(x)=ln(x) \n\n\n",131);
    printf("12- Voltar ao menu Principal\n\n");
    scanf("%d",&opcao);
    switch(opcao)
    {
        case 1:

        break;

        case 2:

        break;

        case 3:

        break;

        case 4:

        break;

        case 5:

        break;

        case 6:

        break;

            case 7:

        break;
            case 8:

        break;
            case 9:

        break;
            case 10:

        break;
            case 11:

        break;
            case 12:
                system("cls");
                MenuPrincipal();
        break;

        default:
            system("cls");
            printf("Op��o Inv�lida Escolha Outra Op��o \n");
            system("pause");
            system("cls");
            funcao();
    }
    }



    void combinatoria() {
        system("cls");
           system("color 20");
    printf("Escolha uma op��o \n\n");
    printf("Conbinat�ria \n\n");
    printf("1- Permuta��o Simples: P(n) \n");
    printf("2- Permuta��o com Repeti��o:PR(n,n1,n2,...,nk)  \n");
    printf("3- Arranjo Simples: A(n,p) \n");
    printf("4- Arranjo com Repeti��o: AR(n,p) \n");
    printf("5- Combina��o Simples: C(n,p)   \n");
    printf("6- Combina��o com Repeti��o: CR(n,p)  \n");
    printf("7- Voltar ao menu Principal\n\n");
    scanf("%d",&opcao);
    switch(opcao)
    {
        case 1:

        break;

        case 2:

        break;

        case 3:

        break;

        case 4:

        break;

        case 5:

        break;

        case 6:

        break;

        case 7:
            system("cls");
            MenuPrincipal();
        break;

    default:
        system("cls");
        printf("Op��o Inv�lida Escolha Outra Op��o \n");
        system("pause");
        system("cls");
        combinatoria();
    }
    }


     void derivadaNumerica() {
        system("cls");
           system("color 20");
    printf("Escolha uma op��o \n\n");
    printf("Derivada Num�rica \n\n\n");
    printf("1- %c(x)=k\n\n",131);
    printf("\t k\n");
    printf("2- %c(x)=k\n\n",131);
    printf("\t x\n");
    printf("3- %c(x)=X \n\n\n",131);
    printf("4- %c(x)=log (x) \n",131);
    printf("\t   k\n\n");
    printf("5- %c(x)=sen(x) \n\n\n",131);
    printf("6- %c(x)=cos(x) \n\n\n",131);
    printf("7- %c(x)=tan(x) \n\n\n",131);
    printf("8- %c(x)=Raiz de X \n\n",131);
    printf("\t 1\n");
    printf("9- %c(x)= -\n",131);
    printf("\t x \n\n\n");
     printf("\t  x\n");
    printf("10- %c(x)=e \n\n\n",131);
    printf("11- %c(x)=ln(x) \n\n\n",131);
    printf("12- Voltar ao menu Principal\n\n");
    scanf("%d",&opcao);
    switch(opcao)
    {
        case 1:

        break;

        case 2:

        break;

        case 3:

        break;

        case 4:

        break;

        case 5:

        break;

        case 6:

        break;

            case 7:

        break;
            case 8:

        break;
            case 9:

        break;
            case 10:

        break;
            case 11:

        break;
            case 12:
                system("cls");
                MenuPrincipal();
        break;

        default:
            system("cls");
            printf("Op��o Inv�lida Escolha Outra Op��o \n");
            system("pause");
            system("cls");
            derivadaNumerica();
    }
    }



    switch (opcao)
{
   case 1:
    somatorio();
   break;
   case 2:
    constantes();
   break;
    case 3:
    logicaProporcional();
   break;
    case 4:
    matriz();
   break;
    case 5:
    funcao();
   break;
    case 6:
    combinatoria();
   break;
    case 7:
    derivadaNumerica();
   break;
    case 8:
    exit(0);
    break;
  default:
        printf("valor Inv�lido \n");
        system("pause");
        system("cls");
        MenuPrincipal();

}
    }



//---------------------------------//----------------------------

printf("Bem Vindo ao nosso sistema para c�lculo pressione qualquer tecla para come�ar");

system("pause");
system("cls");
    MenuPrincipal();


 return 0;

}



