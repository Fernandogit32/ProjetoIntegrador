#include <stdio.h>
#include <stdlib.h>
#include <locale.h>








int main(){

    int opcao=0;
    setlocale(LC_ALL, "Portuguese");

 //-------------------------//fun��o menu principal//-------------------------------



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
    scanf("%d",&opcao);




    void somatorio() {
    system("cls");
    printf("Escolha uma op��o \n\n");
    printf("Somatorio \n\n");
    printf("1 soma1\n");
    printf("2 soma2\n");
    printf("3 soma3\n");
    printf("4 Volrtar ao menu Principal\n");
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
    printf("1 Valor de r\n");
    printf("2 valor de e\n");
    printf("3 Volrtar ao menu Principal\n");
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
    printf("Escolha uma op��o \n\n");
    printf("L�gica Proporcional \n\n");
    printf("1 ~ p \n\n");
    printf("2 p ^ p \n\n");
    printf("3 p v q \n\n");
    printf("4 p v q \n");
    printf("    -  \n");
    printf("5 p -> q \n \n");
    printf("5 p -> q \n \n");
    printf("6 p <-> q \n \n");
    printf("7 Volrtar ao menu Principal\n");
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
    logicaProporcional();
    }
    }


    void matriz() {
        system("cls");
    printf("Escolha uma op��o \n\n");
    printf("Matriz \n\n");
    printf("1 Soma \n");
    printf("2 Subtra��o \n");
    printf("3 Produto \n");
    printf("4 Determinante \n");
    printf("5 Volrtar ao menu Principal\n");
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
    printf("Escolha uma op��o \n\n");
    printf("Fun�ao \n\n");
    printf("1 fun��o1 \n");
    printf("2 fun��o2 \n");
    printf("3 fun��o3 \n");
    printf("4 fun��o4 \n");
    printf("5 fun��o5 \n");
    printf("6 fun��o6 \n");
    printf("7 fun��o7 \n");
    printf("8 fun��o8 \n");
    printf("9 fun��o9 \n");
    printf("10 fun��o10 \n");
    printf("11 fun��o11 \n");
    printf("12 Volrtar ao menu Principal\n");
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
    printf("Escolha uma op��o \n\n");
    printf("Conbinat�ria \n\n");
    printf("1 Permuta��o Simples: P(n) \n");
    printf("2 Permuta��o2  \n");
    printf("3 Permuta��o3 \n");
    printf("4 Permuta��o4  \n");
    printf("5 Permuta��o5  \n");
    printf("6 Permuta��o6 \n");
    printf("7 Volrtar ao menu Principal\n");
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
    printf("Escolha uma op��o \n\n");
    printf("Derivada Num�rica \n\n");
    printf("1 D1 \n");
    printf("2 D2 \n");
    printf("3 D3 \n");
    printf("4 D4  \n");
    printf("5 D5  \n");
    printf("6 D6 \n");
    printf("7 D7 \n");
    printf("8 D8 \n");
    printf("9 D9 \n");
    printf("10 D11 \n");
    printf("11 D12 \n");
    printf("12 Volrtar ao menu Principal\n");
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
        combinatoria();
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


    MenuPrincipal();


 return 0;

}
