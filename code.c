#include<stdio.h>
#include<conio.h>
int main()
{
    int n,c,s=0,r;
    printf("Enter any Number:");
    scanf("%d",&n);
    c=n;
    while(n>0)
    {
        r=n%10;
        s=r+(s*10);
        n=n/10;
    }
    if (c==s)
    {
        printf("Palindrome Number");
    }
    else
    printf("Not a Palindrome Number");
    return 0;
    
    
}