#include <stdio.h>

int main(){
    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua altur: \n");
    scanf("%f", &altura);

    printf("Digite seu nome: \n");
    scanf("%s", &nome);

    printf("Digite sua matricula: \n");
    scanf("%s, &matricula");

    printf("Nome do aluno: %s - Matrícula: %d", nome, matricula);
    printf("Idade %d - Altura %f", idade, altura);
    
    return 0;

}  