#include <stdio.h>
#include <math.h> //operadores matem�ticos
#include <string.h>
#include <locale.h> //ajuda a corrigir acentua��o

int deseja(){
    char sn;
    while(1){
        printf("Deseja realizar outra operação? (s/n): ");
    scanf(" %c", &sn);
    if(sn == 'n'){
        printf("Obrigado por usar a calculadora! Até a próxima.\n");
        return 0;
    } else if (sn == 's' || sn == 'S') {
            return 1;
    }else {
        printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.\n");

    }
    }


}
int main(){
    setlocale(LC_ALL, "Portuguese");
    float prime, segu, resultado;
    int opcao, ad, sub, mul, div, sair;
    while (1){printf("===============================\n");
    printf("Calculadora Simples\n");
    printf("===============================\n");
    printf("Selecione uma operação:\n");
    printf("1. Adição\n");
    printf("2. Subtração\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");
    printf("5. Sair\n");

    while(1){
        printf("Opção: ");
        if (scanf("%d", &opcao) == 1){
            if (opcao >=1 &&opcao <=5){
                break;
            }else{
                printf("Erro!! Opção inválida. Digite um número de 1 a 5: ");
                }
        } else{
            printf("Erro!! Opção inválida. Digite um número de 1 a 5:");
            scanf("%*s"); //pode descartar entrada que � inv�lida
        }
    }


    if (opcao == 5){
        printf("Obrigada por usar a calculadora, até a próxima!");
        break;}



    printf("Digite o primeiro número: ");
    scanf("%f", &prime);
    printf("Digite o segundo número: ");
    scanf("%f", &segu);



    if (opcao==1){
        resultado = (prime + segu);
        printf("\nResultado: %.2f + %.2f = %.2f\n", prime, segu, resultado);
    } else if (opcao == 2){
        resultado = (prime-segu);
        printf("\nResultado: %.2f - %.2f = %.2f\n", prime, segu, resultado);
    } else if (opcao == 3){
        resultado = (prime*segu);
        printf("\nResultado: %.2f � %.2f = %.2f\n", prime, segu, resultado);
    } else if (opcao == 4){
        if(segu == 0) {
                printf("\nERRO: Divisão por zero n�o � permitida!\n");
        } else{
            resultado = (prime/segu);
            printf("Resultado: %.2f / %.2f = %.2f", prime, segu, resultado);}
    }

    if (deseja() == 0) {
            break;
    }
    }
}


