/*numPass=6, numTotal=6
Verdict:ACCEPTED, Visibility:1, Input:"1 0 0 1", ExpOutput:"(1.000,1.000)
", Output:"(1.000,1.000)"
Verdict:ACCEPTED, Visibility:1, Input:"1 0 1 0", ExpOutput:"INF
", Output:"INF"
Verdict:ACCEPTED, Visibility:1, Input:"-1.25 0 5 4", ExpOutput:"(-0.800,1.250)
", Output:"(-0.800,1.250)"
Verdict:ACCEPTED, Visibility:0, Input:"1 -2 -100 201", ExpOutput:"(203.000,101.000)
", Output:"(203.000,101.000)"
Verdict:ACCEPTED, Visibility:0, Input:"-1000 1 2000 -2", ExpOutput:"INF
", Output:"INF"
Verdict:ACCEPTED, Visibility:0, Input:"0 1 0.0000001 1", ExpOutput:"(-0.000,1.000)
", Output:"(-0.000,1.000)"
*/
#include<stdio.h>

int main()
{
    float a1,b1,a2,b2,p,q,t,r,s;/*points on line and variables*/
    scanf("%f%f%f%f",&a1,&b1,&a2,&b2);/*input of points on line*/
    p=a1*b2 - a2*b1;
    q=b2 - b1;
    t=a1 - a2;
    r=t/p;
    s=q/p;
    if(p==0)
    {
        printf("INF");
    }
    else
    {
        printf("(%.3f,%.3f)",s,r);
    }
    return 0;
}