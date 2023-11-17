#include<stdio.h>
int main()
{
    int i,max,smax;
    int a[5]={10,20,40,50,-23};
    max =a[0];
    smax=a[0];
    for(i=0;i<5;i++)
    {
        if(max < a[i] )
            max = a[i];
            //if(smax<a[i] && a[i]!=max)
              //  smax = a[i];

    }
    for(i=0;i<5;i++)
    {
        if(smax<a[i] && a[i]!=max)
            smax = a[i];
    }
    printf("%d",smax);
    return 0;
}
