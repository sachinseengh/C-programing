#include<stdio.h>
#include<conio.h>

//int fibo(int);
//int main( ){
//    int f,i,n;
//    printf("Enter the value of n:\n");
//    scanf("%d",&n);
//
//    for(i=0;i<n;i++){
//        f=fibo(i);
//        printf("%d\t",f);
//    }
//return 0;
//}
//int fibo(int n){
//    if(n==0)
//     return 0;
//    else if(n==1)
//     return 1;
//    else
//      return (fibo(n-1)+fibo(n-2));
//}
int fibo(int);
int main(){
	int n,i,f;
	printf("Enter the lenght\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		f=fibo(i);
		printf("%d\t",f);
	}
	return 0;
}
int fibo(int a){
	if(a==0)
		return 0;
	else if(a==1)
		return 1;
	else
		return (fibo(a-1)+fibo(a-2)	);
		
}
