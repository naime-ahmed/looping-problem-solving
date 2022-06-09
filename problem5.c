#include<stdio.h>

// problem E solved
int main(){
    int A, B, C, D, E, F, totalSecond;
    int x=0, y=0;
    scanf("%d %d %d %d %d %d %d", &A, &B, &C, &D, &E, &F, &totalSecond);

    for(int i=0; i<=totalSecond; i=i+A+C){
        if(totalSecond-i<A){
            x=x+(totalSecond-i);
        }
        else{
            x+=A;
        }
    }

    for(int i=0;i<=totalSecond; i=i+D+F){
        if(totalSecond-i<D){
            y=y+(totalSecond-i);
        }
        else{
            y+=D;
        }
    }

    if(x*B==y*E){
        printf("Draw\n");
    }
    else if(x*B >y*E){
        printf("Takahashi\n");
    }
    else{
        printf("Aoki\n");
    }

return 0;
}