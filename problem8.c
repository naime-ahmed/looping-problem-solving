#include<stdio.h>
#include <float.h> 
#include <math.h>
#include <stdbool.h>
#include <string.h>

int main(){

    int num;

    scanf( "%d", &num );

    char hateThat[] = "hate that";
    char hateIt[] = "hate it";
    char loveThat[] = "love that";
    char loveIt[] = "love it";


    for (int i = 1; i <= num; i++)
    {

        if (i%2 != 0)
        {
            if (i == num)
            {
                printf( "I %s", hateIt );
            }
            else{
                printf( "I %s ", hateThat );
            }
            
        }

        if (i%2 == 0 )
        {
            if (i == num)
            {
                printf( "I %s", loveIt );
            }
            else{
                printf( "I %s ", loveThat );
            }
            
        }
        
    }
    
    return 0;
}