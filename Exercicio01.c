#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao1, opcao2, num1, num2;

    do {
        printf("Digite o primeiro valor: ");
        scanf("%d", &num1);
        
        printf("Digite o primeiro valor: ");
        scanf("%d", &num2);
        
        printf("\n1 - Adição\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n\n");
        scanf("%d", &opcao1);

        switch(opcao1) {
        case 1:
            printf("O resultado da Adição entre %d e %d é: %d.\n\n", num1, num2, num1 + num2);
            break;
        case 2:
            printf("O resultado da Subtração entre %d e %d é: %d.\n\n", num1, num2, num1 - num2);
            break;
        case 3:
            printf("O resultado da Multiplicação entre %d e %d é: %d.\n\n", num1, num2, num1 * num2);
            break;
        case 4:
            while(num2 == 0) {
                printf("Nao existe divisão por zero!\nDigite outro valor: ");
                scanf("%d", &num2);
            }
            printf("O resultado da Divisão entre %d e %d é: %d.\n\n", num1, num2, num1 / num2);
            break;
        default:
            printf("Opcao inválida.\n");
        }
        
        printf("Deseja executar novamente o programa?\n");
        printf("\n1 - Sim\n2 - Encerrar a execução.\n\n");
        scanf("%d", &opcao2);
    } while(opcao2 != 2);
    
    printf("Fim da execução.");
}
