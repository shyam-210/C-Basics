
#include<stdio.h>  
#include<conio.h>
int main ()  
{  
    char str1 [90], ch1;
      
    scanf ( "%s", str1 );  
    while ((getchar()) != '\n' ) 
    	ch1 = getchar ();  
    	printf ( "%s\n", str1 );  
    	printf ( "%c", ch1 );
    getch();  
    return 0;  
}
