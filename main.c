#include <stdio.h>
#include <stdlib.h>
#include <locale.h>








int main(){

    int opcao=0;
    setlocale(LC_ALL, "Portuguese");

 //-------------------------//função menu principal//-------------------------------



   void MenuPrincipal(){

   system("color 2e");
    printf("Menu Principal\n \n");
    printf("Escolha uma das Opções\n \n");
    printf("1. Somatório \n");
    printf("2. Constantes\n");
    printf("3. Lógica Proporcional\n");
    printf("4. Matriz\n");
    printf("5. Função\n");
    printf("6. Combinatória\n");
    printf("7. Derivação Numéria\n");
    printf("8. Sair\n\n");
    scanf("%d",&opcao);




    void somatorio() {
    system("cls");
    printf("Escolha uma opção \n\n");
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
    printf("Opção Inválida Escolha Outra Opção \n");
    system("pause");
    system("cls");
    somatorio();
    }
    }


    void constantes() {
        system("cls");
    printf("Escolha uma opção \n\n");
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
    printf("Opção Inválida Escolha Outra Opção \n");
    system("pause");
    system("cls");
    constantes();
    }
    }



    void logicaProporcional() {
        system("cls");
    printf("Escolha uma opção \n\n");
    printf("Lógica Proporcional \n\n");
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
    printf("Opção Inválida Escolha Outra Opção \n");
    system("pause");
    system("cls");
    logicaProporcional();
    }
    }


    void matriz() {
        system("cls");
    printf("Escolha uma opção \n\n");
    printf("Matriz \n\n");
    printf("1 Soma \n");
    printf("2 Subtração \n");
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
    printf("Opção Inválida Escolha Outra Opção \n");
    system("pause");
    system("cls");
    matriz();
    }
    }


     void funcao() {
        system("cls");
    printf("Escolha uma opção \n\n");
    printf("Funçao \n\n");
    printf("1 função1 \n");
    printf("2 função2 \n");
    printf("3 função3 \n");
    printf("4 função4 \n");
    printf("5 função5 \n");
    printf("6 função6 \n");
    printf("7 função7 \n");
    printf("8 função8 \n");
    printf("9 função9 \n");
    printf("10 função10 \n");
    printf("11 função11 \n");
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
            printf("Opção Inválida Escolha Outra Opção \n");
            system("pause");
            system("cls");
            funcao();
    }
    }



    void combinatoria() {
        system("cls");
    printf("Escolha uma opção \n\n");
    printf("Conbinatória \n\n");
    printf("1 Permutação Simples: P(n) \n");
    printf("2 Permutação2  \n");
    printf("3 Permutação3 \n");
    printf("4 Permutação4  \n");
    printf("5 Permutação5  \n");
    printf("6 Permutação6 \n");
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
        printf("Opção Inválida Escolha Outra Opção \n");
        system("pause");
        system("cls");
        combinatoria();
    }
    }


     void derivadaNumerica() {
        system("cls");
    printf("Escolha uma opção \n\n");
    printf("Derivada Numérica \n\n");
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
        printf("Opção Inválida Escolha Outra Opção \n");
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
        printf("valor Inválido \n");
        system("pause");
        system("cls");
        MenuPrincipal();

}
    }



//---------------------------------//----------------------------


    MenuPrincipal();


 return 0;

}
