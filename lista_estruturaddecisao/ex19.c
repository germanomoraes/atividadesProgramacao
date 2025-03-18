
/* Implemente um código em C para aprovar empréstimo bancário. O código deve pedir 3 informações: valor do empréstimo, número de parcelas e salário do solicitante. Aprovar empréstimo caso o valor das parcelas representem no máximo 30% do salário do solicitante. */
        
int main() {
    float valorEmprestimo, salario, valorParcela;
    int numeroParcelas;

printf("Digite o valor do empréstimo: ");
scanf("%f", &valorEmprestimo);
printf("Digite o número de parcelas: ");
scanf("%d", &numeroParcelas);
printf("Digite o salário do solicitante: ");
scanf("%f", &salario);
   
valorParcela = valorEmprestimo / numeroParcelas;
    if (valorParcela <= 0.3 * salario) {
        printf("Empréstimo aprovado.\n");
} else {
        printf("Empréstimo não aprovado.\n");
}
    return 0;
}
 
