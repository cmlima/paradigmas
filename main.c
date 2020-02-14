#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

float obterValor();
int obterInteiro();
char obterOperador();
void calcular();
void comparar();
void analisarConjunto();
void somaTurbinada();
void verificarMedia();
int obterOpcao(float valorDaCompra);
void imprimirValorAVista(float valorDaCompra);
void imprimirPrestacoes(float total, int prestacoes, float juros);
void escolherFormaDePagamento();

int main()
{
    //calcular();
    //comparar();
    //analisarConjunto();
    //somaTurbinada();
    //verificarMedia();
    escolherFormaDePagamento();
    return 0;
}

float obterValor() {
    float valor;
    printf("Digite um valor: ");
    scanf("%f", &valor);
    fflush(stdin);
    return valor;
}

int obterInteiro() {
    int valor;
    printf("Digite um valor: ");
    scanf("%i", &valor);
    fflush(stdin);
    return valor;
}

char obterOperador() {

    char c;

    while (c != '+' && c != '-' && c != '/' && c != '*') {
        printf("Digite um operador (+, -, / ou *): ");
        scanf("%c", &c);
        fflush(stdin);
    }
    return c;
}

void calcular() {

    float termo1 = obterValor();
    float termo2 = obterValor();
    char operador = obterOperador();

    switch (operador) {
    case '+':
        printf("resultado: %.2f\n", termo1 + termo2);
        break;
    case '-':
        printf("resultado: %.2f\n", termo1 - termo2);
        break;
    case '/':
        printf("resultado: %.2f\n", termo1 / termo2);
        break;
    case '*':
        printf("resultado: %.2f\n", termo1 * termo2);
        break;
    default:
        printf("operação inválida");
        break;
    }
}

void comparar() {

    float valor1 = obterValor();
    float valor2 = obterValor();

    if (valor1 == valor2) {
        printf("valores iguais\n");
    } else {
        if (valor1 > valor2) {
            printf("%.2f %.2f\n", valor1, valor2);
        } else {
            printf("%.2f %.2f\n", valor2, valor1);
        }
    }
}

void analisarConjunto() {
    do {
        float v1 = obterValor();
        float v2 = obterValor();
        if (v2 <= v1) return;
        float v3 = obterValor();
        if (v3 <= v2) return;
        printf("soma: %.2f\nproduto: %.2f\nmédia: %.2f\n", v1 + v2 + v3, v1 * v2 * v3, (v1 + v2 + v3) / 3);
    } while (TRUE);
}

void somaTurbinada() {

    int num = 0;
    int pares = 0;
    int impares = 0;

    while (num <= 1000) {
        if (num % 2 == 0) {
            pares += num;
        } else {
            impares += num;
        }
        num = obterValor();
    };

    printf("Soma pares: %i\nSoma impares: %i", pares, impares);
}

void verificarMedia() {

    int nums[10];
    int soma = 0, i;

    for (i = 0; i <= 9; i++) {
        nums[i] = obterInteiro();
        soma += nums[i];
    }

    int media = soma / 10;

    printf("A media eh: %i\n", media);

    for (i = 0; i <= 9; i++) {
        if (nums[i] == media) {
            printf("O numero %i, inserido na %ia posicao, corresponde aa media\n", nums[i], i + 1);
        }
    }
}

int obterOpcao(float valorDaCompra) {

    int opcao = 0;

    int max = valorDaCompra > 100 ? 3 : 2;

    while (opcao < 1 || opcao > max) {
        printf("Escolha a opcao de pagamento:\n");
        printf("(1) a vista com 10 porcento de desconto\n");
        printf("(2) em duas vezes (preco da etiqueta)\n");
        if (valorDaCompra > 100) {
            printf("(3) de 3 ate 10 vezes com 3 porcento de juros ao mês\n");
        }
        scanf("%i", &opcao);
        fflush(stdin);
    }
    return opcao;
}

void imprimirValorAVista(float valorDaCompra) {
    printf("Valor aa vista: %.2f\n", valorDaCompra * 0.9);
}

void imprimirPrestacoes(float total, int prestacoes, float juros) {

    if (prestacoes == 2) {
        printf("Duas prestacoes de: %.2f\n", total/2);
    } else {
        printf("Numero de prestacoes: %i\n", prestacoes);
        float principal = total/prestacoes;
        for (int i = 1; i <= prestacoes; i++) {
            float acrescimo = (total - (principal * (i - 3))) * juros;
            printf("Valor da prestacao %i: %.2f\n", i, principal + acrescimo);
        }
    }
}

void escolherFormaDePagamento() {

    float valorDaCompra;
    printf("Digite o valor da compra: ");
    scanf("%f", &valorDaCompra);

    switch (obterOpcao(valorDaCompra)) {
    case 1:
        imprimirValorAVista(valorDaCompra);
        break;
    case 2:
        imprimirPrestacoes(valorDaCompra, 2, 0);
        break;
    case 3:
        imprimirPrestacoes(valorDaCompra, 3, 0.03);
        imprimirPrestacoes(valorDaCompra, 4, 0.03);
        imprimirPrestacoes(valorDaCompra, 5, 0.03);
        imprimirPrestacoes(valorDaCompra, 6, 0.03);
        imprimirPrestacoes(valorDaCompra, 7, 0.03);
        imprimirPrestacoes(valorDaCompra, 8, 0.03);
        imprimirPrestacoes(valorDaCompra, 9, 0.03);
        imprimirPrestacoes(valorDaCompra, 10, 0.03);
        break;
    default:
        printf("Ops. Algo deu errado.");
        break;
    }
}


