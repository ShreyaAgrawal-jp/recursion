#include <stdio.h>
int lcm(int n1, int n2)
{ 
    static int min=1;
    if(min%n1==0 && min%n2==0)
    {
        return min;
    }
    min++;
    lcm(n1,n2);
    return min;
}
int main()
{
    int n1,n2,s;
    printf("n1 and n2: ");
    scanf("%d%d",&n1,&n2);
    s=lcm(n1,n2);
    printf("LCM: %d",s);
    return 0;
}
