
/* Faça um programa em C que receba as notas de três avaliações de um aluno, calcule e mostre a sua média
baseada nos critérios abaixo:
 Media >= 7 -> “Aprovado”
 Média >= 3 e <7 -> “Você está em exame”
 Leia nota do exame
 mediafinal = (notadoexame + media) /2
 Mostrar a media final
 Se mediafinal >= 5 -> “Aprovado no exame”
 Senao -> “Reprovado no exame”
 Média<3 -> “Reprovado sem direito a exame” */
        
int main() {
float nota1, nota2, nota3, media, notaExame, mediaFinal;

printf("Digite a nota da primeira avaliacao: ");
scanf("%f", &nota1);
printf("Digite a nota da segunda avaliacao: ");
scanf("%f", &nota2);
printf("Digite a nota da terceira avaliacao: ");
scanf("%f", &nota3);

media = (nota1 + nota2 + nota3) / 3;

    if (media >= 7) {
printf("Aprovado\n");
    } else if (media >= 3) {
printf("Você está em exame\n");
printf("Digite a nota do exame: ");
scanf("%f", &notaExame);
mediaFinal = (notaExame + media) / 2;
printf("Media final: %.2f\n", mediaFinal);
    if (mediaFinal >= 5) {
printf("Aprovado no exame\n");
    } else {
printf("Reprovado no exame\n");
}
    } else {
printf("Reprovado sem direito a exame\n");
}
    return 0;
}
   