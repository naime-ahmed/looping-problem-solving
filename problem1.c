#include<stdio.h>
#include <float.h> 
#include <math.h>
#include <stdbool.h>
#include <string.h>

int main(){

    int N, K, A;

    scanf( "%d %d %d", &N, &K, &A );

    int lastPerson = 0;

    for (int i = 0; i < K; i++)
    {
        if(i == 0){
            lastPerson = A;
        }
        else{
            if (lastPerson >= N)
            {
                lastPerson = 1;
            }
            else{
                lastPerson+=1;
            }
        }
        
    }

    printf( "%d", lastPerson );
    

    return 0;
}