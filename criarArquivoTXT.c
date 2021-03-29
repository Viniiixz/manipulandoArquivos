#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *ptr;
    int idade;
    char nome[20];

    printf("Digite sua idade");
    scanf("%d", &idade);

    printf("\nDigite seu nome");
    scanf("%s", nome);

    ptr = fopen("arquivo.txt", "w");

    if (ptr == NULL)
        printf("Erro na abertura");
    else
        fprintf(ptr, "%s%d", nome, idade);

    fclose(ptr);
    system("pause");

    return 0;
}