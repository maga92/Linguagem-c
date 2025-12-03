#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int min = 1;
    int max = 3;
    int b;

    while (1) {
        printf("voce escolhe pedra, papel ou tesoura (1,2,3): ");
        scanf("%d", &b);

        while(b != 1 && b != 2 && b != 3){
            printf("insira um valor valido: ");
            scanf("%d", &b);
        }

        switch(b){
            case 1:
                printf("voce escolheu pedra\n");
                break;
            case 2:
                printf("voce escolheu papel\n");
                break;
            case 3:
                printf("voce escolheu tesoura\n");
                break;
            default:
                break;
        }

        int randomNum = (rand() % (max - min + 1)) + min;

        switch(randomNum){
            case 1:
                printf("computador escolheu pedra\n");
                break;
            case 2:
                printf("computador escolheu papel\n");
                break;
            case 3:
                printf("computador escolheu tesoura\n");
                break;
            default:
                break;
        }

        if(randomNum == b){
            printf("empate!\n\n");
        } else if((randomNum == 1 && b == 2) || (randomNum == 2 && b == 3) || (randomNum == 3 && b == 1)){
            printf("voce ganhou!\n");
            break;
        } else {
            printf("voce perdeu!\n");
            break;
        }
    }

    return 0;
}
