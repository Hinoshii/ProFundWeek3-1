#include <stdio.h>
int main(){
    printf("Enter Number : ");
    int a;
    scanf("%d",&a);
    printf("Binary form = ");
    if(a-128>=0){
        printf("1");
        a-=128;
    }
    else
        printf("0");
    if(a-64>=0){
        printf("1");
        a-=64;
    }
    else
        printf("0");
    if(a-32>=0){
        printf("1");
        a-=32;
    }
    else
        printf("0");
    if(a-16>=0){
        printf("1");
        a-=16;
    }
    else
        printf("0");
    if(a-8>=0){
        printf("1");
        a-=8;
    }
    else
        printf("0");
    if(a-4>=0){
        printf("1");
        a-=4;
    }
    else
        printf("0");
    if(a-2>=0){
        printf("1");
        a-=2;
    }
    else
        printf("0");
    if(a-1>=0){
        printf("1");
        a-=1;
    }
    else
        printf("0");
}