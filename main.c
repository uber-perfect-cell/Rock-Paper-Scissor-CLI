#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

int main() {
    char selection[7];
    int intselect;

    printf("O3 Rock O# Paper O< Scissor!\n");
    scanf("%s", selection);

    if (strcmp(selection, "rock") == 0) {
      intselect = 1;
    } else if (strcmp(selection, "paper") == 0) {
      intselect = 2;
    } else {
      intselect = 3;  
    }

    srand(time(NULL));
    int cselection = rand() % 3 + 1; 
    if (cselection == intselect) {
      printf("DRAW! Both drew %s\n", selection);
    } else if (cselection == 1 && intselect == 2) {
      printf("Player wins! Computer drew rock, player drew paper\n");
    } else if (cselection == 1 && intselect == 3) {
      printf("Computer wins! Computer drew rock, player drew scissor\n");
    } else if (cselection == 2 && intselect == 1) {
      printf("Computer wins! Computer drew paper, player drew rock\n");
    } else if (cselection == 2 && intselect == 3) {
      printf("Player wins! Computer drew paper, player drew scissor\n");
    } else if (cselection == 3 && intselect == 1) {
      printf("Player wins! Computer drew scissor, player drew rock\n");
    } else if (cselection == 3 && intselect == 2) {
      printf("Computer wins! Computer drew scissor, player drew paper\n");
    }

    return 0;
}

