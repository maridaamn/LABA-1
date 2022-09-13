#include <stdio.h>

int main()

{
    int a,b,c ;
    printf("Choose first number : ");
    scanf("%d", &a);
    printf("Choose second number : ");
    scanf("%d", &b);
    printf("Choose third number : ");
    scanf("%d", &c);
   
    
     if( a==-b )
        printf("%d", c);
    else if( a==-c )
        printf("%d", b);
    else if( b==-c )
        printf("%d", a);
    else
        printf("There are no mutually opposite numbers");
    return 0;
   
}