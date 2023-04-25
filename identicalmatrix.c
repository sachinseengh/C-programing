#include<stdio.h>
#include<conio.h>
int main( ){
    int r,c,i,j,r2,c2,i2,j2,count=0;
    
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
    for(i2=0;i2<r2;i2++){
        for(j2=0;j2<c2;j2++){
            scanf("%d",&a2[i2][j2]);
        }
    }
if((r!=r2)&&(c!=c2)){
    printf(" Your matrix are not of same order\n");
}
        printf("First Matrix\n");
        for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
printf("Second Matrix\n");
       for(i2=0;i2<r2;i2++){
        for(j2=0;j2<c2;j2++){
            printf("%d\t",a2[i2][j2]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(a[i][j]==a2[i][j]){
                count++;
            }
        }
    }
    if(count==(r*c)){
        printf("they are identical\n");
    }else{
        printf('they are not identical\n');
    }
getch();
return 0;
}
    
    
