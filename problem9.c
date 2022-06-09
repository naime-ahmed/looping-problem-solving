#include<stdio.h>
#include <float.h> 
#include <math.h>
#include <stdbool.h>
#include <string.h>

int main(){

    int num;

    scanf( "%d", &num );

    if (num>= 0 && num < 40)
    {
        int lessThenNewbie = 40 - num;
        printf( "%d", lessThenNewbie );

    }
    else if (num>=40 && num < 70)
    {
        int lessThenPupil = 70 - num;

        printf( "%d", lessThenPupil );
    }
    else if (num>= 70 && num < 90)
    {
        int lessThenSpecialist = 90 - num;

        printf( "%d", lessThenSpecialist );
    }
    else{
        printf( "expert" );
    }
    

    return 0;
}