#include<stdio.h>
#include <float.h> 
#include <math.h>
#include <stdbool.h>
#include <string.h>

int main(){

    int n, m;

    scanf( "%d %d", &n, &m );

    int valueOfI;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i%2 != 0)
            {
                printf( "#" );
            }

            if (i%2 == 0)
            {
                valueOfI = i / 2;
                if (valueOfI%2 != 0)
                {
                    if (j != m)
                    {
                       printf( "." );
                    }
                    else{
                        printf("#");
                    }
                    
                }
                else{
                    if (j == 1)
                    {
                        printf( "#" );
                    }
                    else{
                        printf( "." );
                    }
                    
                }

                
                
            }
            
            
        }
        printf( "\n" );
        
    }
    

    return 0;
}