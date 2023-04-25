#include<stdio.h>
#include<conio.h>
int main( ){
    int r,c,i,j,check;
    
    printf("Enter row and column of your matrix\n");
    scanf("%d%d",&r,&c);

    int a[r][c];
    printf("Enter the element of your matrix row wise\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }


for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        if(i==j && a[i][j]!=1){
            check=1;
            break;
              
        }
        if(i!=j && a[i][j]!=1){
            check=1;
            break;
        }
        }
    }

if(check==1){
    printf("identity matrix");
}else{
    printf(" not  identity matrix");
}
    getch();
    return 0;
}


