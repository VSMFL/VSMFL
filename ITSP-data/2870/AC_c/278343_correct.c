/*numPass=7, numTotal=7
Verdict:ACCEPTED, Visibility:1, Input:"14", ExpOutput:"17
", Output:"17"
Verdict:ACCEPTED, Visibility:1, Input:"24", ExpOutput:"29
", Output:"29"
Verdict:ACCEPTED, Visibility:1, Input:"1", ExpOutput:"2
", Output:"2"
Verdict:ACCEPTED, Visibility:1, Input:"68", ExpOutput:"71
", Output:"71"
Verdict:ACCEPTED, Visibility:0, Input:"99", ExpOutput:"101
", Output:"101"
Verdict:ACCEPTED, Visibility:0, Input:"150", ExpOutput:"151
", Output:"151"
Verdict:ACCEPTED, Visibility:0, Input:"200", ExpOutput:"211
", Output:"211"
*/
#include<stdio.h>

int check_prime(int num)
{
    int i,j;
    i=0;
    j=1;
    for(i=2; i<num; i++)
    {
        if(((num%i)==0))
        {
            j=0;
            break;
        }
    }
    return j;
}
int main()
{
    int a,N;
    scanf("%d",&N);
    a=0;
    if(N==1)
    {
        printf("2");
    }
    else
    {
        while(a==0)
        {
            if(check_prime(N))
            {
                printf("%d",N);
                a=1;
            }
            else
            {
                N=N+1;
            }
        }
    }
    return 0;
}