#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

void convert_to_uppercase(const char *input_filename, const char *output_filename)
{
    FILE *input_file = fopen(input_filename, "r");
    FILE *output_file = fopen(output_filename, "w");

    if (input_file == NULL)
    {
        fprintf(stderr, "Erro ao abrir o arquivo de entrada: %s\n", input_filename);
        exit(EXIT_FAILURE);
    }

    if (output_file == NULL)
    {
        fprintf(stderr, "Erro ao criar o arquivo de saída: %s\n", output_filename);
        fclose(input_file);
        exit(EXIT_FAILURE);
    }

    char c;
    while ((c = fgetc(input_file)) != EOF)
    {                                   // Lê cada caractere do arquivo
        fputc(toupper(c), output_file); // Converte para maiúscula e escreve no arquivo de saída
    }

    fclose(input_file);
    fclose(output_file);
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "Uso: %s <arquivo de entrada>\n", argv[0]);
        return EXIT_FAILURE;
    }

    const char *input_filename = argv[1];
    char *output_filename = malloc(strlen(input_filename) + strlen("output_") + 1);
    strcpy(output_filename, "output_");
    strcat(output_filename, input_filename);

    convert_to_uppercase(input_filename, output_filename);

    printf("Arquivo processado com sucesso! Resultado salvo em: %s\n", output_filename);

    return EXIT_SUCCESS;
}
