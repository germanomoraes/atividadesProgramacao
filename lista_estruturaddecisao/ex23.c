
/* Faça um programa em C que receba a nota de duas avaliações , calcule a média e mostre ao usuário APENAS UMA das mensagens abaixo informando a sua situação: 

Media         Mensagem 
>=7           "Aprovado"
=10           "Aprovado com distinção"
>=3 e <7      "Exame"
<3            "Reprovado" */
        
int main() {
float nota1, nota2, media;

printf("Digite a nota da primeira avaliacao: ");
scanf("%f", &nota1);
printf("Digite a nota da segunda avaliacao: ");
scanf("%f", &nota2);

media = (nota1 + nota2) / 2;

if (media == 10) {
printf("Aprovado com distincao\n");
    } else if (media >= 7) {
printf("Aprovado\n");
    } else if (media >= 3) {
printf("Exame\n");
    } else {
printf("Reprovado\n");
    }
    
    return 0;
}        
   