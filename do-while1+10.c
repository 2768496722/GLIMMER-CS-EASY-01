# include <stdio.h>
int main (void)
{
    int i=1,sum=0;
    do 
    {
        sum+=i;
        i++;
    }
    while(i<=10);

    printf("1+2+...+10=%d\n",sum);
    return 0;
}