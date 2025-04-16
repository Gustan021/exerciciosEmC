#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

static void maiorEMenorValor() {
    int maiorValor;
    int menorValor;
    int num1, num2, num3, num4, num5;

    printf("Digite o 1° valor: \n");
    scanf_s("%d", &num1);
    while (getchar() != '\n');

    maiorValor = num1;
    menorValor = num1;

    printf("Digite o 2° valor: \n");
    scanf_s("%d", &num2);
    while (getchar() != '\n');

    if (num2 > maiorValor) {
        maiorValor = num2;
    }
    else if (num2 < menorValor) {
        menorValor = num2;
    }

    printf("Digite o 3° valor: \n");
    scanf_s("%d", &num3);
    while (getchar() != '\n');

    if (num3 > maiorValor) {
        maiorValor = num3;
    }
    else if (num3 < menorValor) {
        menorValor = num3;
    }

    printf("Digite o 4° valor: \n");
    scanf_s("%d", &num4);
    while (getchar() != '\n');

    if (num4 > maiorValor) {
        maiorValor = num4;
    }
    else if (num4 < menorValor) {
        menorValor = num4;
    }

    printf("Digite o 5° valor: \n");
    scanf_s("%d", &num5);
    while (getchar() != '\n');

    if (num5 > maiorValor) {
        maiorValor = num5;
    }
    else if (num5 < menorValor) {
        menorValor = num5;
    }

    printf("O maior valor é o %d\n", maiorValor);
    printf("O menor valor é o %d\n", menorValor);

}
static void positivoOuNegativo(int num1) {
    if (num1 == 0) {
        printf("O número indicado é 0\n");
    }
    else if (num1 > 0) {
        printf("O número indicado é positivo\n");
    }
    else {
        printf("O número indicado é negativo\n");
    }
}
static void emprestimoEmpresaFuncionario() {
    float salario, valorEmprestimo, prestacao;
    int numeroPrestacao;

    printf("Digite o seu salário:\n");
    scanf_s("%f", &salario);

    while (salario <= 0) {
        printf("Erro! O salário não pode ser negativo e nem igual a 0\n");
        printf("Digite o seu salário:\n");
        scanf_s("%f", &salario);
    }

    printf("Digite o valor do empréstimo desejado:\n");
    scanf_s("%f", &valorEmprestimo);

    while (valorEmprestimo <= 0) {
        printf("Erro! O valor do empréstimo não pode ser negativo nem 0\n");
        printf("Digite o valor do empréstimo desejado:\n");
        scanf_s("%f", &valorEmprestimo);
    }

    printf("Digite em quantas prestações deseja pagar o empréstimo:\n");
    scanf_s("%d", &numeroPrestacao);

    while (numeroPrestacao <= 0) {
        printf("Erro! O número de prestações não pode ser 0 e nem negativo\n");
        printf("Digite em quantas prestações deseja pagar o empréstimo:\n");
        scanf_s("%d", &numeroPrestacao);
    }

    prestacao = valorEmprestimo / numeroPrestacao;
    if (prestacao > salario * 0.30) {
        printf("O empréstimo não pode ser concedido.\n");
        return;
    }
    else {
        printf("O empréstimo pode ser concedido\n");
    }
}
static void mesadaAdolescente() {
    float mesada, precoProduto, saldoFinal;
    char resposta[5];

    printf("Digite a sua mesada:\n");
    scanf_s("%f", &mesada);
    while (getchar() != '\n');

    while (mesada <= 0) {
        printf("Erro! A mesada não pode ser 0 e nem negativo.\n");
        printf("Digite a sua mesada:\n");
        scanf_s("%f", &mesada);
        while (getchar() != '\n');
    }

    printf("Deseja comprar algum produto?\n");
    fgets(resposta, sizeof(resposta), stdin);
    resposta[strcspn(resposta, "\n")] = '\0';

    while (strcmp(resposta, "sim") != 0 &&
        strcmp(resposta, "SIM") != 0 &&
        strcmp(resposta, "não") != 0 &&
        strcmp(resposta, "NÃO") != 0 &&
        strcmp(resposta, "nao") != 0 &&
        strcmp(resposta, "NAO") != 0) {
        printf("Erro! A resposta só poderá ser sim ou não. \n");
        printf("Deseja comprar algum produto?\n");
        fgets(resposta, sizeof(resposta), stdin);
        resposta[strcspn(resposta, "\n")] = '\0';
    }

    if (strcmp(resposta, "sim") == 0 || 
        strcmp(resposta, "SIM") == 0) {
        printf("Qual o valor do produto que deseja comprar?\n");
        scanf_s("%f", &precoProduto);
        while (getchar() != '\n');

        while (precoProduto <= 0 || precoProduto > mesada) {
            printf("Erro! O produto não pode ter o valor de 0 e nem negativo e também não pode ser maior que a sua mesada.\n");
            printf("Qual o valor do produto que deseja comprar?\n");
            scanf_s("%f", &precoProduto);
            while (getchar() != '\n');
        }
        saldoFinal = mesada - precoProduto;
        printf("O valor final da sua mesada é de: %.2f\n", saldoFinal);
    }
    else if (strcmp(resposta, "não") == 0 ||
        strcmp(resposta, "NÃO") == 0 ||
        strcmp(resposta, "nao") == 0 ||
        strcmp(resposta, "NAO") == 0) {
        saldoFinal = mesada;
        printf("O valor final da sua mesada é de: %.2f\n", saldoFinal);
    }

}
static int menorValor() {
    int num1, num2, num3, menorValor;

    printf("Digite o primeiro valor: \n");
    scanf_s("%d", &num1);
    while (getchar() != '\n');

    menorValor = num1;

    printf("Digite o segundo valor:\n");
    scanf_s("%d", &num2);
    while (getchar() != '\n');

    while (num2 == num1) {
        printf("Erro! Os valores digitados não podem ser iguais.\n");
        printf("Digite o segundo valor:\n");
        scanf_s("%d", &num2);
        while (getchar() != '\n');
    }

    printf("Digite o terceiro valor:\n");
    scanf_s("%d", &num3);
    while (getchar() != '\n');

    while (num3 == num2 || num3 == num1) {
        printf("Erro! Os valores digitados não podem ser iguais.\n");
        printf("Digite o terceiro valor:\n");
        scanf_s("%d", &num3);
        while (getchar() != '\n');
    }

    if (num2 < menorValor) {
        menorValor = num2;
    }
    if (num3 < menorValor) {
        menorValor = num3;
    }

    return menorValor;
}
static void conversaoTemperatura() {
    int escolha;
    int temperatura;
    float resultado;

    printf("Digite 1 para conversão de Farenheit para celsius e 2 para conversão de Celsius para Farenheit:\n");
    scanf_s("%d", &escolha);
    while (getchar() != '\n');

    while (escolha != 1 && escolha != 2) {
        printf("Erro! Digite novamente o dígito correto.\n");
        printf("Digite 1 para conversão de Farenheit para celsius e 2 para conversão de Celsius para Farenheit.\n");
        scanf_s("%d", &escolha);
        while (getchar() != '\n');
    }

    printf("Digite a temperatura que deseja fazer a conversão:\n");
    scanf_s("%d", &temperatura);
    while (getchar() != '\n');

    if (escolha == 1) {
        resultado = (5.0 / 9.0) * (temperatura - 32);
        printf("A conversão fica: %.2f\n", resultado);
    }
    if (escolha == 2) {
        resultado = (9.0 / 5.0) * temperatura + 32;
        printf("A conversão fica: %.2f\n", resultado);
    }

}

int main(void)
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    {
        /*Fazer um programa para que o usuário opte por uma opção de
        conversão “1 – Celsius 2 – Farenheit”.Após a escolha o usuário deverá
        informar a temperatura.Criar uma nova função para aplicar a conversão
        conforme opção escolhida.
            Fórmulas:
        C = 5 * (F - 32) / 9
        F = (9 * C / 5) + 32*/
    }
    {
        /*Fazer um programa para que o usuário possa inserir três números.A
        nova função a ser criada deverá retornar o menor valor.Os números
        informados não podem ser iguais.Fazer verificação, aplicar mensagem
        de erro e retornar para nova digitação caso os valores sejam iguais

        int resultado = menorValor();
        printf("%d", resultado);*/
    }
    {
        /*Faça um programa que pergunte a mesada de um adolescente, após
        isto pergunte se ele quer comprar algum produto, caso ele responda
        “não”, o programa irá imprimir uma mensagem mostrando qual o valor
        da mesada dele, caso responda “sim” o programa irá pergunta qual o
        valor do produto e irá mostrar na tela o saldo final dele(deduzir a mesada
        do valor do produto).O valor do produto não pode ser maior que o valor
        da mesada.*/
        //mesadaAdolescente();
    }
    {
        /*Fazer um programa para calcular o prêmio proporcional de um ganhador do
        concurso, sendo que o total do prêmio é de cem mil, o primeiro ganhador recebe
        46 %, o segundo 32 % e o terceiro o restante.O programa só poderá aceitar opções
        para os 3 ganhadores, caso contrário exibir a mensagem de erro.

        float premio = 100000.0;
        int lugar;
        float premioValor;

        printf("Digite em que lugar você ficou no concurso para saber o valor do seu prêmio. ex: 1, 2 ou 3\n");
        scanf_s("%d", &lugar);
        while (lugar < 1 || lugar > 3) {
            printf("Erro! Digite o lugar em que ficou sendo 1, 2 ou 3 para 1°, 2° ou 3°\n");
            printf("Digite o seu lugar do concurso ex: 1, 2 ou 3\n");
            scanf_s("%d", &lugar);
        }

        if (lugar == 1) {
            premioValor = premio * 0.46;
            printf("O valor do seu prêmio é de: %.2f\n", premioValor);
        }
        else if (lugar == 2) {
            premioValor = premio * 0.32;
            printf("O valor do seu prêmio é de: %.2f\n", premioValor);
        }
        else {
            premioValor = premio * 0.22;
            printf("O valor do seu prêmio é de: %.2f\n", premioValor);
        }*/
    }
    {
        /*Fazer um programa de calculadora que executará seus cálculos com base em 6
        operações: soma; subtração; multiplicação; divisão; potenciação; raiz quadrada.
        Caso seja digitado um valor diferente de seis, exibir mensagem de erro.

        int num1, num2, sinal;


        printf("Digite o 1° valor do cálculo: \n");
        scanf_s("%d", &num1);
        while (getchar() != '\n');

        printf("Digite o numero para o sinal do cálculo sendo 1 = +, 2 = -, 3 = *, 4 = /, 5 = ponteciação e 6 para raiz quadrada\n");
        scanf_s("%d", &sinal);
        while (getchar() != '\n');

        while (sinal < 1 || sinal > 6) {
            printf("Erro! Digite de 1 a 6 sendo 1 = +, 2 = -, 3 = *, 4 = /, 5 = ponteciação e 6 para raiz quadrada\n");
            scanf_s("%d", &sinal);
            while (getchar() != '\n');
        }

        if (sinal != 6) {
            printf("Digite o 2° valor do cálculo: \n");
            scanf_s("%d", &num2);
            while (getchar() != '\n');
        }

        switch (sinal) {
            case 1: {
                printf("O resultado da soma é de: %d\n", num1 + num2);
                break;
            }
            case 2: {
                printf("O resultado da subtração é de: %d\n", num1 - num2);
                break;
            }
            case 3: {
                printf("O resultado da multiplicação é de: %d\n", num1 * num2);
                break;
            }
            case 4: {
                if (num2 != 0) {
                    printf("O resultado da divisão é de: %.2f\n", (float)num1 / num2);
                }
                else {
                    printf("Erro! Divisão por 0 não é permitida\n");
                }
                break;
            }
            case 5: {
                printf("O resultado da potenciação é de: %.2f\n", pow(num1, num2));
                break;
            }
            case 6: {
                if (num1 >= 0){
                    printf("O resultado da raiz quadrada é de: %.2f\n", sqrt(num1));
                }
                else {
                    printf("Erro! Não é possível calcular raiz quadrada de números negativo");
                }
                break;
            }
        }*/

    }
    {
        /*Fazer um programa para criar uma função que leia cinco valores inteiros e
        imprima o maior e o menor valor.As entradas de dados devem ser na função
        principal.

        maiorEMenorValor();*/

    }
    {
        /*Fazer uma nova função que recebe um valor inteiro e verifica se o valor é
        positivo ou negativo.Exibir a mensagem dizendo se o número é positivo ou
        negativo.

        int num1 = -5;
        positivoOuNegativo(num1);*/
    }
    {
        /*Uma empresa abriu uma linha de crédito para os funcionários.O valor
        da prestação não pode ultrapassar 30 % do salário.Faça um programa
        que receba o salário, o valor do empréstimo e o número de prestações e
        informe se o empréstimo pode ser concedido.Nenhum dos valores
        informados pode ser zero ou negativo.Caso aconteça, mensagem de erro
        e retornar para nova digitação daquela informação.
        emprestimoEmpresaFuncionario();*/
    }
}
