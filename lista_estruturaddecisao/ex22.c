
/* Faça um programa em C que receba um número inteiro qualquer e mostre se ele é par ou impar. */
    
int main() {
int numero;

printf("Digite um número inteiro: ");
scanf("%d", &numero);

    if (numero % 2 == 0) {
printf("O número %d é par.\n", numero);
    } else {
printf("O número %d é ímpar.\n", numero);
}

return 0;

}
        