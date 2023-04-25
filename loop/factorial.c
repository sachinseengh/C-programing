#include<stdio.h>
int main(){
    int i,fact=1,n;
    printf("Enter your number \n");
    scanf("%d",&n);

    for(i=n;i>=1;i--){
        fact=fact*i;
    }
    printf("The factorial of %d is %d",n,fact);

    return 0;
    
}