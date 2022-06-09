#include<stdio.h>
#include <float.h> 
#include <math.h>
#include <stdbool.h>
#include <string.h>

int main(){

    int A, B;

    scanf( "%d %d", &A, &B );

    int totalNum =0;

    for (int i = 1; i <= 100; i++)
    {
        if (i >= A && i <= B)
        {
            totalNum++;
        }
        
    }

    printf( "%d", totalNum );
    

    return 0;
}