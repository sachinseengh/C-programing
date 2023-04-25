#include<stdio.h>
int main( ){
    int i=1,sum=0;


    while(i<=100){
        if(i%2!=0){
            printf("%d\t",i);
            sum=sum+i; 
        }
        i++;
    }
    printf("sum=%d",sum);
    return 0;
}