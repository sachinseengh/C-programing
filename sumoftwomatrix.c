#include<stdio.h>
#include<conio.h>
int main( ){

    int r,c,i,j,r2,c2,sum=0;
    
    printf("Enter row and column of your matrix\n");
    scanf("%d%d",&r,&c);

    int a[r][c];
    printf("Enter the element of your matrix row wise\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //
 printf("Enter row and column of your 2nd matrix\n");
    scanf("%d%d",&r2,&c2);

    int a2[r2][c2];
    printf("Enter the element of your 2nd matrix row wise\n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf("%d",&a2[i][j]);
        }
    }

int s[r][c];
if((r==r2) && (c==c2)){
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            sum=(a[i][j])+(a2[i][j]);
            s[i][j]=sum;
            sum=0;
        }
    }
}
printf("The sum of matrices is:\n");
 for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",s[i][j]);
        }
        printf("\n");
        }



getch( );
return 0;

}