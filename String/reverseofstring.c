#include<stdio.h>
#include<conio.h>
#include<string.h>

int main( ){
    int i;
    char s[ ]="Kathmandu";
    for(i=(strlen(s)-1);i>=0;i--){
        printf("%c",s[i]);
    }


    getch( );
    return 0;
}