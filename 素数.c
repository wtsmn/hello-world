#include    "conio.h"
#include    "stdio.h"
#include    "stdlib.h"
/************found************/
Isprime(n)
{   int i,m;
    m=1;
    for(i=2;i<n;i++)
/************found************/
     if  (!(n%i))
     {   m=0;break;}
     return(m);
}
main()
{int j,k;
 system("cls");
 printf("\nPlease enter an integer number between 2 and 10000:");scanf("%d",&k);
 printf("\n\nThe prime factor(s) of %d is (are):",k);
 for(j=2;j<=k;j++)
    if ((!(k%j))&&(Isprime(j))) printf("\n %4d",j);
 printf("\n");
}
