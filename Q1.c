//Faça um programa onde o usuário entre com o tempo em segundos de um jogo de futebol. 
//O programa deve calcular e apresentar ao usuário o tempo equivalente em horas, minutos e segundos.
#include <stdio.h>
#include <string.h>

int horas(int t){
    if (t <= 0)
    {
        return 0;
    }
        return t/3600;
}

int minutos(int t){
    if (t <= 0)
    {
        return 0;
    }
        return (t%3600)/60;
}

int segundos(int t){
    if (t <= 0)
    {
        return 0;
    }
        return (t%3600)%60;
}

int main() {
    int tempo;
    printf("Tempo da partida em /s: ");
    scanf("%d", &tempo);
    printf("Tempo da partida: %dh:%dmin:%dseg", horas(tempo), minutos(tempo), segundos(tempo));

}