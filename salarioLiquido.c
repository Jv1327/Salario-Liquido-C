#include <stdio.h>

// Função para calcular os salários líquidos
void calcularSalariosLiquidos(float *salarios, int tamanho) {
    // Iterar sobre a lista de salários
    for (int i = 0; i < tamanho; i++) {
        // Calcular o salário líquido e armazená-lo na mesma posição
        salarios[i] -= salarios[i] * 0.08; // 8% de desconto
    }
}

int main() {
    // Exemplo de utilização da função
    float salarios[] = {1000.0, 2000.0, 3000.0, 4000.0}; // Exemplo de lista de salários brutos
    int tamanho = sizeof(salarios) / sizeof(salarios[0]); // Calcula o tamanho da lista
    
    printf("Salarios brutos:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%.2f ", salarios[i]);
    }
    printf("\n");

    // Chama a função para calcular os salários líquidos
    calcularSalariosLiquidos(salarios, tamanho);

    printf("Salarios líquidos:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%.2f ", salarios[i]);
    }
    printf("\n");

    return 0;
}