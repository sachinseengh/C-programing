#include<stdio.h>
#include<conio.h>
int main( ){

    int r,c,i,j,r2,c2,k;
    
    printf("Enter row and column of your matrix\n");
    scanf("%d%d",&r,&c);

    int a[r][c];
    printf("Enter the element of your matrix row wise\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
 printf("Enter row and column of your 2nd matrix\n");
    scanf("%d%d",&r2,&c2);

    int a2[r2][c2];
    printf("Enter the element of your 2nd matrix row wise\n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf("%d",&a2[i][j]);
        }
    }

if(c==r2){
int m[r][c2];

  for(i=0;i<r;i++){
        for(j=0;j<c2;j++){
            m[i][j]=0;
            for(k=0;k<r2;k++){
                m[i][j]=m[i][j]+a[i][k]*a2[k][j];
                            }
        
            
        }

printf("your resultant matrix is :\n ");
for(i=0;i<r;i++){
    for(j=0;j<c2;j++){
        printf("%d\t",m[i][j]);
    }
    printf("\n");
}

}

}else{
    printf("not possible!");
}

getch( );
return 0;


}