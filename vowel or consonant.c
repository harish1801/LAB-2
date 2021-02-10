/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   char ch;
   printf("enter any character=");
   scanf("%c",&ch);
   switch(ch)
   {
        case'A':
        case'a':printf("%c is vowel",ch);
                break;
        
        case'E':
        case'e':printf("%c is vowel",ch);
                break;
        
        case'I':
        case'i':printf("%c is vowel",ch);
                break;
                
        case'O':
        case'o':printf("%c is vowel",ch);
                break;
                
        case'U':
        case'u':printf("%c is vowel",ch);
                break;
        
        default:printf("%c is consonant",ch);        
   }

    return 0;
}

