#include <stdio.h>
int i,count=1;
void Ugly(int m)
{
    if(m==1){
        ++count;
        return;
    }
    else if(m%2==0){
        Ugly(m/2);
    }
    else if(m%3==0){
        Ugly(m/3);
    }
    else if(m%5==0){
        Ugly(m/5);
    }
    else
    {
        return;
    }
}
void main()
{
    int inp;
    scanf("%d",&inp);
    for(i=1;;i++)
    {
        Ugly(i);
        if(count-1==inp)
        {
            printf("%d",i);
            break;
        }
    }
}
