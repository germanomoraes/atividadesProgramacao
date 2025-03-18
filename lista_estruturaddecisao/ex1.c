

/* Faça um um programa em C que receba a idade do usuário e verifique se ele tem 18 anos ou mais. Se a resposta for positiva escrever “maior de idade”, senão “menor de idade”. */

int main() {
int idade;

printf("Digite sua idade: ");
scanf("%d", &idade);

    if (idade >= 18) {
printf("maior de idade\n");
} else {
printf("menor de idade\n");
}
    return 0;
}

