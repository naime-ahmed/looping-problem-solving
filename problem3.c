#include<stdio.h>
#include <float.h> 
#include <math.h>
#include <stdbool.h>
#include <string.h>

int main(){

    int S, T, X;

    scanf( "%d %d %d", &S, &T,&X );

    S == 0 ? S = 24 : S == S;
    T == 0 ? T = 24 : T == T;
    X == 0 ? X = 24 : X == X;

    if (S<T)
    {
        if (X+0.5 <= T && X+0.5 >=S )
        {
            printf( "Yes" );
        }
        else{
            printf( "No" );
        }
        
    }

    if (S>T)
    {
        if (X+0.5 <= S && X+0.5 >=T )
        {
            printf( "No" );
        }
        else{
            printf( "Yes" );
        }
        
        
    }
    

    return 0;
}