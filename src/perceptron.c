#include <stdio.h>

#define EPOCHS 20   // Número de épocas de treino
#define LEARNING_RATE 0.1

// Função de ativação degrau
int step_function(float sum) {
    return (sum >= 0) ? 1 : 0;
}

int main() {
    // {x1, x2, saída esperada}
    int inputs[14][2] = {
        {2,2},
        {1, 3},
        {2, 3},
        {5, 3},
        {7,3},
        {2,4},
        {3,4},
        {6,4},
        {1,5},
        {2,5},
        {5,5},
        {4,6},
        {6,6},
        {5,7}
    };
    int expected_outputs[14] = {0, 0, 0, 1, 1, 0, 0, 1,0,0,1,1,1,1};

    // Pesos e bias inicializados com 0
    float w1 = 0.0, w2 = 0.0, bias = 0.0;

    // Treinamento
    for (int epoch = 0; epoch < EPOCHS; epoch++) {
        printf("Epoca %d\n", epoch + 1);

        for (int i = 0; i < 14; i++) {
            int x1 = inputs[i][0];
            int x2 = inputs[i][1];
            int target = expected_outputs[i];

            // Soma ponderada
            float sum = x1 * w1 + x2 * w2 + bias;

            // Saída do perceptron
            int output = step_function(sum);

            // Erro
            int error = target - output;

            // Atualização dos pesos e bias
            w1 += LEARNING_RATE * error * x1;
            w2 += LEARNING_RATE * error * x2;
            bias += LEARNING_RATE * error;

            printf("Input: [%d, %d] -> Output: %d | Esperado: %d | Erro: %d\n",
                   x1, x2, output, target, error);
        }

        printf("Pesos: w1=%.2f, w2=%.2f, bias=%.2f\n\n", w1, w2, bias);
    }

    // Teste final
    printf("=== Teste Final ===\n");
    for (int i = 0; i < 14; i++) {
        int x1 = inputs[i][0];
        int x2 = inputs[i][1];
        float sum = x1 * w1 + x2 * w2 + bias;
        int output = step_function(sum);
        printf("Entrada: [%d, %d] -> Saida final: %d\n", x1, x2, output);
    }

    return 0;
}
