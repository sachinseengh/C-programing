#include<stdio.h>
#include<conio.h>
#include<string.h>

int main( ){
    
    char s[10];
    char rev[20];
    int c;
    printf("Enter your string\n");
    scanf("%s",&s);

    strrev(s);
    strcpy(rev,s);
    c=strcmp(rev,s);
    if(c==0){
        printf("palindrome");
    }else{
        printf("not palindrome");
    }


    getch( );
    return 0;
}