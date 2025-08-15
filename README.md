# Perceptron Simples em C — Porta Lógica AND

Projeto simples de um perceptron, neurônio artificial que aprende a porta lógica AND.

## Relatório
O relatório deste projeto foi escrito em LaTeX e está disponível [aqui](./docs/Perceptron__EN_.pdf).

## Sobre o Perceptron

O perceptron é um modelo de neurônio artificial que realiza classificação binária. Ele calcula uma soma ponderada das entradas, adiciona um viés (bias) e aplica uma função de ativação (função degrau) para gerar uma saída binária.

## Treinamento

O perceptron é treinado ajustando iterativamente os pesos e o bias para minimizar o erro entre a saída desejada e a saída atual.

## Porta AND

A porta AND retorna 1 apenas quando ambas as entradas são 1. Sua tabela verdade é:

| x1 | x2 | AND |
|----|----|-----|
| 0  | 0  | 0   |
| 0  | 1  | 0   |
| 1  | 0  | 0   |
| 1  | 1  | 1   |