#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "funcoes.h"
#include <math.h>
#include <windows.h>



int main(){

    int opcao=0;
    setlocale(LC_ALL, "Portuguese");
   system("MODE con cols=168 lines=60");
 system("color 02");
 //-------------------------//fun��o menu principal//-------------------------------

printf(" __  __   ___                       .          \n");
    printf("|  |/  `.'   `.                   .'|          \n");
    printf("|   .-.  .-.   '              .| <  |          \n");
    printf("|  |  |  |  |  |    __      .' |_ | |          \n");
    printf("|  |  |  |  |  | .:--.'.  .'     || | .'''-.   \n");
    printf("|  |  |  |  |  |/ |   \\ |'--.  .-'| |/.'''. \  \n");
    printf("|  |  |  |  |  |`\" __ | |   |  |  |  /    | | \n");
    printf("|__|  |__|  |__| .'.''| |   |  |  | |     | |  \n");
    printf("                / /   | |_  |  '.'| |     | |  \n");
    printf("                \\ \\._,\\ '/  |   / | '.    | '. \n");
    printf("                 `--'  `\"   `'-'  '---'   '---'\n");
    printf("\t\t\t,d88~~\          888                           \n");
    printf("\t\t\t8888     e88~-_  888 Y88b    /  e88~~8e  888-~\\\n");
    printf("\t\t\t`Y88b   d888   i 888  Y88b  /  d888  88b 888   \n");
    printf("\t\t\t `Y88b, 8888   | 888   Y88b/   8888__888 888   \n");
    printf("\t\t\t   8888 Y888   ' 888    Y8/    Y888    , 888   \n");
    printf("\t\t\t   8888 Y888   ' 888    Y8/    Y888    , 888   \n");
    printf("\t\t\t\\__88P'  \"88_-~  888     Y      \"88___/  888   \n");
    printf("\t\t\t                                         -------patrick          fernando---\n");
    printf("\t\t\t                                                    |           |           |\n");
    printf("\t\t\t                                                    --gabriel--             bruno\n");
    printf("\t\t\t                                                        \n");

   void MenuPrincipal(){

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
/*
   for(i = 0; i < 256; i++)
   {
      printf("%d %c\n", i, i);
   }
*/
    scanf("%d",&opcao);




    void somatorio() {

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
           primeiraSomatoria();
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

    printf("Escolha uma op��o \n\n");
    printf("Constantes \n\n");
    printf("1- Valor de PI\n\n");
    printf("2- valor de e\n\n");
    printf("3- Voltar ao menu Principal\n\n");
    scanf("%d",&opcao);
    switch(opcao)
    {
        case 1:
           system("cls");
           constanteum();
           printf("\nPressione qualquer tecla para continuar");
           system("pause");
           system("cls");
           MenuPrincipal();
        break;

        case 2:
           system("cls");
           constantedois();
           printf("\nPressione qualquer tecla para continuar");
           system("pause");
           system("cls");
           MenuPrincipal();
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
         system("cls");
          logica1();
           printf("\nPressione qualquer tecla para continuar");
           system("pause");
           system("cls");
           MenuPrincipal();
        break;

        case 2:
            system("cls");
          logica2();
           printf("\nPressione qualquer tecla para continuar");
           system("pause");
           system("cls");
           MenuPrincipal();
        break;

        case 3:
            system("cls");
          logica3();
           printf("\nPressione qualquer tecla para continuar");
           system("pause");
           system("cls");
           MenuPrincipal();
        break;

        case 4:
           system("cls");
           logica4();
           printf("\nPressione qualquer tecla para continuar");
           system("pause");
           system("cls");
           MenuPrincipal();
        break;

        case 5:
           system("cls");
           logica5();
           printf("\nPressione qualquer tecla para continuar");
           system("pause");
           system("cls");
           MenuPrincipal();
        break;

        case 6:
           system("cls");
           logica6();
           printf("\nPressione qualquer tecla para continuar");
           system("pause");
           system("cls");
           MenuPrincipal();
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
           system("cls");
           matriz1();
           printf("\nPressione qualquer tecla para continuar");
           system("pause");
           system("cls");
           MenuPrincipal();
        break;

        case 2:
           system("cls");
           matriz2();
           printf("\nPressione qualquer tecla para continuar");
           system("pause");
           system("cls");
           MenuPrincipal();
        break;

        case 3:
           system("cls");
           matriz3();
           printf("\nPressione qualquer tecla para continuar");
           system("pause");
           system("cls");
           MenuPrincipal();
        break;

        case 4:
            system("cls");
           matriz4();
           printf("\nPressione qualquer tecla para continuar");
           system("pause");
           system("cls");
           MenuPrincipal();
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
            system("cls");
           funcao1();
           printf("\nPressione qualquer tecla para continuar");
           system("pause");
           system("cls");
           MenuPrincipal();
        break;

        case 2:
           system("cls");
           funcao2();
           printf("\nPressione qualquer tecla para continuar");
           system("pause");
           system("cls");
           MenuPrincipal();
        break;

        case 3:
system("cls");
           funcao3();
           printf("\nPressione qualquer tecla para continuar");
           system("pause");
           system("cls");
           MenuPrincipal();
        break;

        case 4:
system("cls");
           funcao4();
           printf("\nPressione qualquer tecla para continuar");
           system("pause");
           system("cls");
           MenuPrincipal();
        break;

        case 5:
system("cls");
           funcao5();
           printf("\nPressione qualquer tecla para continuar");
           system("pause");
           system("cls");
           MenuPrincipal();
        break;

        case 6:
system("cls");
           funcao6();
           printf("\nPressione qualquer tecla para continuar");
           system("pause");
           system("cls");
           MenuPrincipal();
        break;

            case 7:
system("cls");
           funcao7();
           printf("\nPressione qualquer tecla para continuar");
           system("pause");
           system("cls");
           MenuPrincipal();
        break;
            case 8:
system("cls");
           funcao8();
           printf("\nPressione qualquer tecla para continuar");
           system("pause");
           system("cls");
           MenuPrincipal();
        break;
            case 9:
system("cls");
           funcao9();
           printf("\nPressione qualquer tecla para continuar");
           system("pause");
           system("cls");
           MenuPrincipal();
        break;
            case 10:
system("cls");
           funcao10();
           printf("\nPressione qualquer tecla para continuar");
           system("pause");
           system("cls");
           MenuPrincipal();
        break;
            case 11:
system("cls");
           funcao11();
           printf("\nPressione qualquer tecla para continuar");
           system("pause");
           system("cls");
           MenuPrincipal();
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
           system("cls");
          combinatoria1();
           printf("\nPressione qualquer tecla para continuar");
           system("pause");
           system("cls");
           MenuPrincipal();
        break;

        case 2:
            system("cls");
          combinatoria2();
           printf("\nPressione qualquer tecla para continuar");
           system("pause");
           system("cls");
           MenuPrincipal();
        break;

        case 3:
             system("cls");
          combinatoria3();
           printf("\nPressione qualquer tecla para continuar");
           system("pause");
           system("cls");
           MenuPrincipal();
        break;

        case 4:
            system("cls");
          combinatoria4();
           printf("\nPressione qualquer tecla para continuar");
           system("pause");
           system("cls");
           MenuPrincipal();
        break;

        case 5:
            system("cls");
          combinatoria5();
           printf("\nPressione qualquer tecla para continuar");
           system("pause");
           system("cls");
           MenuPrincipal();
        break;

        case 6:
            system("cls");
          combinatoria6();
           printf("\nPressione qualquer tecla para continuar");
           system("pause");
           system("cls");
           MenuPrincipal();
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
            derivada2();
        break;

        case 3:
            derivada3();
        break;

        case 4:
            derivada4();
        break;

        case 5:
            derivada5();
        break;

        case 6:
            derivada6();
        break;

            case 7:
            derivada7();
        break;
            case 8:
            derivada8();
        break;
            case 9:
            derivada9();
        break;
            case 10:

        break;
            case 11:
            derivada11();
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



