#include<stdio.h>
int main(){
    int pos;
    scanf("%d",&pos);
    do{
        printf("%d ",pos);
        pos++;
    }
    while (pos <=200);
    return 0;
}