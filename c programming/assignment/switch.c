#include<stdio.h>

int main(){
    int pos;
    scanf("%d",&pos);

    switch(pos){
        case 1:
        printf("Won the gold");
        break;

        case 2:
        printf("Won the silver");
        break;

        default:
        printf("better luck next time");
    }

    return 0;
}