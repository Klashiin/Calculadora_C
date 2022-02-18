#include <stdio.h>

float soma (float num1, float num2) {
    return num1 + num2;
}

float sub (float num1, float num2) {
    return num1 - num2;
}

float multi (float num1, float num2) {
    return num1 * num2;
}

float div (float num1, float num2) {
    return num1 / num2;
}

void op_menu (float num1, float num2) {
    int opt;
    do {
        opt = -1;
        printf("\nSelecione uma operacao:\n");
        printf("[1] Soma\n");
        printf("[2] Subtracao\n");
        printf("[3] Multiplicacao\n");
        printf("[4] Divisao\n");
        printf("[0] Sair\n");
        printf("\nSua escolha: ");
        scanf("%d", &opt);
        switch (opt) {
            case 1:
                printf("%.2f + %.2f = %.2f\n", num1, num2, soma(num1, num2));
                break;
            case 2:
                printf("%.2f - %.2f = %.2f\n", num1, num2, sub(num1, num2));
                break;
            case 3:
                printf("%.2f * %.2f = %.2f\n", num1, num2, multi(num1, num2));
                break;
            case 4:
                printf("%.2f / %.2f = %.2f\n", num1, num2, div(num1, num2));
                break;
            case 0:
                break;
            default:
                printf("Escolha invalida!\n");
                break;
        }
        fflush(stdin);
        getchar();
    } while (opt < 0 || opt > 4);
}

int main () {
    int i, menu = 1;
    float num1, num2;
    printf("### CALCULADORA EM C ###\n");
    for (i = 0; menu != 0; i++) {
        do {
            printf("Selecione uma opcao:\n");
            printf("[1] Calcular\n");
            printf("[0] Sair\n");
            printf("Sua escolha: ");
            scanf("%d", &menu);
            if (menu < 0 || menu > 1)
                printf("Escolha invalida!\n");
        } while (menu < 0 || menu > 1);
        if (menu == 1) {
            printf("\nInsira um numero: ");
            scanf("%f", &num1);
            printf("Insira outro numero: ");
            scanf("%f", &num2);
            op_menu(num1, num2);
        } else {
            printf("Encerrando o programa...\n");
        } 
    }
    printf("Pressione qualquer tecla para encerrar.");
    fflush(stdin);
    getchar();
    return 0;
}