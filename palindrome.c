#include<stdio.h>
int main()
{
	int revint=0,remainder,originalint;

	printf("enter a integer");
	scanf("%d",&n);

	originalint=n;
//reversed integer is stored in variable
	while(n != 0)
{
		remainder=n%10;
		revint=revint*10+remainder;
		n=n/10;
}
//the given integer is palindrome if original integer is equals to the reversed integer

if (originalint==revint)
	printf("it is a palindrome.");
else
	printf("it is not a palindrome");
	return 0;	
}
