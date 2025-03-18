
/* Faça um programa em C que calcule e apresente quanto deve ser pago por um produto considerando a leitura do preço de etiqueta (PE) e o código da condição de pagamento (CP). Utilize para os cálculos a tabela de condições de pagamento a seguir:
Codigo de condicao de pagamento  Condicao de pagamento 
1 A vista em dinheiro ou um cheque com 10% de desconto 
2 A vista com cartao de credito com 5% de desconto
3 Em 2 vezes preco normal de etiqueta sem juros
4 Em 3 vezes com preco de etiqueta com acrescimo de 10% */
        
int main() {
float precoEtiqueta, valorFinal;
int codigoPagamento;

printf("Digite o preco de etiqueta do produto: ");
scanf("%f", &precoEtiqueta);
printf("Digite o codigo da condicao de pagamento (1, 2, 3, 4): ");
scanf("%d", &codigoPagamento);

    switch (codigoPagamento) {
    case 1:
valorFinal = precoEtiqueta * 0.90; 
break;
    case 2:
valorFinal = precoEtiqueta * 0.95; 
break;
    case 3:
valorFinal = precoEtiqueta; 
break;
    case 4:
valorFinal = precoEtiqueta * 1.10; 
break;
    default:
printf("Codigo de condicao de pagamento invalido.\n");
    return 1;
}

printf("O valor a ser pago pelo produto e: R$ %.2f\n", valorFinal);

    return 0;
}

  