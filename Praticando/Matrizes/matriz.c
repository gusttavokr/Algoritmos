#include <stdio.h>

main(){
    char Velha[3][3] = {{' ', ' ', ' '},{' ', ' ', ' '},{' ', ' ', ' '}};
    int i, j;

    Velha [0][0] = 'X';
    Velha [1][1] = 'X';
    Velha [0][2] = '0';
    Velha [2][2] = '0';

    for (i = 0; i < 3; i++)
    {
        for (j = 0; i < 3; j++)
        {
            printf("%c %c", Velha[i][j], j == 3-1?' ':'|');
            if (i!=3-1){
                printf("\n------\n");
            }
        }
        
    }
    return 0;
}