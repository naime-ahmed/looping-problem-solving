#include<stdio.h>

int main(){

    int numberOfRoom;

    scanf( "%d", &numberOfRoom );

    int freeRoom = 0;
    for (int i = 1; i <= numberOfRoom; i++)
    {
        int person, capacity;

        scanf( "%d %d", &person, &capacity );

        if (person+2 <= capacity)
        {
            freeRoom++;
        }
        
    }

    printf( "%d", freeRoom );
    

    return 0;
}