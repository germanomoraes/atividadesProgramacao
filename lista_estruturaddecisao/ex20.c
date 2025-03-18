
/* Implemente um programa em C leia o código de um determinado produto e mostre a sua classificação. Utilize
a estrutura if else
Código Classificação
1 - Alimento não-perecível
2, 3 ou 4 - Alimento perecível
5 ou 6 - Vestuário
7 - Higiene pessoal
8, 9, 10 - Utensílios domésticos
Qualquer outro código Inválido */
        
int main() {
    int codigo;
    
printf("Digite o código do produto: ");
scanf("%d", &codigo);
    
    if (codigo == 1) {
printf("Alimento não-perecível\n");
    } else if (codigo == 2 || codigo == 3 || codigo == 4) {
printf("Alimento perecível\n");
    } else if (codigo == 5 || codigo == 6) {
printf("Vestuário\n");
    } else if (codigo == 7) {
printf("Higiene pessoal\n");
    } else if (codigo == 8 || codigo == 9 || codigo == 10) {
printf("Utensílios domésticos\n");
    } else {
printf("Inválido\n");
    }
    
    return 0;
}  
