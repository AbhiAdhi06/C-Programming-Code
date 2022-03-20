#include <stdio.h>

void printArray(int* a, int n) // Pointer For Editing Array
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("%d\t", a[i]);
	}
	printf("\n");
}

int main()
{
	/* selection sort */
	int n, i;
	int a[] = {4, 5, 9, 1, 44};
	n = 5;
	printArray(a, n);
}
