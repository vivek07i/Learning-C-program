#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Write 0 to start : \n");
    int num, a;
    scanf("%d", &num);
    printf("Enter to play\n1:GTA V\n2:Cyberpunk\n3:Warzone\n4:Resident Evil Village\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("Game Save file undetected.\n");
        break;
    case 2:
        printf("Game .dll missing.\n");
        break;
    case 3:
        printf("Game Crashed.\n");
        break;
    case 4:
        printf("Game corrupted.\n");
        break;

    default:
        printf("You selected wrong option.\n");
        break;
    }

    printf("Install The Game Again.\n");
    printf("Bitch, You dont Even know how to install a game.\n");

    return 0;
}
