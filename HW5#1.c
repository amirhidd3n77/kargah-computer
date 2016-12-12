#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int donbale (int n)
{
    if (n==0)
        return -1;
    if (n==1)
        return 1;
    if (n==2)
        return 3;
    else
        return donbale(n-1) + donbale(n-2) + n;

}
int check_donbale (int x)
{
    int i=1;
        while (donbale(i)<=x)
        {
            if (donbale(i)==x)
             {

                return i;
                break;
             }


             i++;


        }

    return -1;

}
int main ()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for (i=a;i<=b;i++)
    {
        if (check_donbale(i)!=-1)
            printf("%d @ %d\n" ,i,check_donbale(i));
    }
    return 0;
}







