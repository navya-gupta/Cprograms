//divisible by 5 and 11 both

#include<stdio.h>
int main()
{
	int n;
	printf("enter n value:\n");
	scanf("%d",&n);
    if(n%5==0&&n%11==0)
    printf("it is divided by 5 and 11\n");
    else
    printf("it is not divided by 5 and 11\n");
    
}

