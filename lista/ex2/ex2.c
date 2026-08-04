#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define CLASSES 3
#define GRADES 30

// Evitando matrizes globais para seguir boas práticas modernas
void enter_grades(int g[CLASSES][GRADES]);
int get_grade(int num);
void disp_grades(const int g[CLASSES][GRADES]);

int main(void) {
    int grade[CLASSES][GRADES] = {0}; // Matriz local inicializada com zeros
    char ch;

    for (;;) {
        do {
            printf("\n--- MENU ---\n");
            printf("(D) igitar notas\n");
            printf("(M) ostrar notas\n");
            printf("(S) air\n");
            printf("Opcao: ");

            // Lê um caractere de forma segura e limpa o buffer
            if (scanf(" %c", &ch) != 1) {
                ch = '\0';
            }
            ch = (char)toupper((unsigned char)ch);

        } while (ch != 'D' && ch != 'M' && ch != 'S');

        switch (ch) {
            case 'D':
                enter_grades(grade);
                break;
            case 'M':
                disp_grades(grade);
                break;
            case 'S':
                printf("Saindo do programa...\n");
                return 0; // Finalização padrão correta
        }
    }
}

/* Lê uma nota com entrada segura usando fgets() */
int get_grade(int num) {
    char s[80];
    int nota;

    printf("Digite a nota do aluno # %d: ", num + 1);

    // Substituição segura do gets() por fgets()
    if (fgets(s, sizeof(s), stdin) != NULL) {
        // sscanf realiza a conversão segura de texto para inteiro
        if (sscanf(s, "%d", &nota) == 1) {
            return nota;
        }
    }

    return 0; // Valor padrão em caso de erro na leitura
}

/* Digita as notas dos alunos */
void enter_grades(int g[CLASSES][GRADES]) {
    // Declaração de variáveis de controle direto no laço 'for' (padrão C99+)
    for (int t = 0; t < CLASSES; t++) {
        printf("\n--- Turma # %d ---\n", t + 1);
        for (int i = 0; i < GRADES; i++) {
            g[t][i] = get_grade(i);
        }
    }
}

/* Mostra as notas cadastradas */
// Uso de 'const' indica que a função apenas lê a matriz sem alterá-la
void disp_grades(const int g[CLASSES][GRADES]) {
    for (int t = 0; t < CLASSES; t++) {
        printf("\nTurma # %d:\n", t + 1);
        for (int i = 0; i < GRADES; i++) {
            printf("Aluno #%d e %d\n", i + 1, g[t][i]);
        }
    }
}