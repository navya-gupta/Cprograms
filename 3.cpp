// swap 2 numbers

#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("Enter a and b\n");
	scanf("%d %d", &a, &b);
	printf("Before swap : A=%d, B=%d\n\n", a,b);
	
	temp=a;
	a=b;
	b=temp;
	
	printf("After swap : A=%d, B=%d", a,b);
	
}

