/*Check Whether Number Is Prime Or Not*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n , i , flag = 0;
	printf("Enter A Number: ");
	scanf("%d" , &n);
//	m = n / 2; m = 0;
	if(n == 2)
	{
		printf("Number Is Prime");
		exit(0);
	}
	for(i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		{
			printf("Number Is Not Prime");
			flag = 1;
		}
		break;
	}
	if(flag == 0)
	{
		printf("Number is Prime");
	}
	return 0;
}