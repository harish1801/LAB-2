/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>
int roots(int,int,int);

int main()

{
    int x,y,z;
    printf("enter coefficients a,b and c of quadratic equation of the form ax^2+bx+c=0 :\n");
    scanf("%d %d %d",&x,&y,&z);
    roots(x,y,z);
    
    return 0;
}

int roots(int a,int b,int c)
{
    float discriminant,root1,root2,real,imaginary;
    discriminant= b*b-4*a*c;
    
    if (discriminant>0)
      {
       root1= (-b+sqrt(discriminant))/(2*a);
       root2= (-b-sqrt(discriminant))/(2*a);
       printf("root1=%lf and root2=%lf",root1,root2);
      } 
     
    else if (discriminant==0)
      {
       root1=root2=(-b/(2*a));
       printf("root1=root2=%lf",root2);
      }
    else 
      {
       real= (-b/(2*a));
       imaginary= sqrt(-discriminant) / (2 *a);
       printf("root1 = %lf + %lfi and root2 = %lf - %lfi ", real, imaginary, real, imaginary);
      }
    
    return 0;
}

