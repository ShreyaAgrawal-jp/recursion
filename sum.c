#include <stdio.h>
int Sum(int n)
{
    if(n==0)
        return 0;
    else
    	return((n%10)+Sum(n/10));
}
int main()
{
    int n,s;
	printf("n: ");
    scanf("%d",&n);
    s=Sum(n);
    printf("s: %d",s);
    return 0;
}
