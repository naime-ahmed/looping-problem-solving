#include<stdio.h>
#include <float.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

int main(){

    int num;

    scanf( "%d", &num );

    int bjornWin = 0;
    int kingWin = 0;


    for (int i = 0; i < num; i++)
    {
        char gameResult;

        scanf( " %c", &gameResult );

        if (gameResult == 'A')
        {
            bjornWin++;
        }
        if (gameResult == 'D')
        {
            kingWin++;
        }

    }

    if (bjornWin > kingWin)
    {
        printf( "Anton" );
    };

    if (kingWin > bjornWin)
    {
        printf( "Danik" );
    };

    if (bjornWin == kingWin)
    {
        printf( "Friendship" );
    };

    return 0;
}