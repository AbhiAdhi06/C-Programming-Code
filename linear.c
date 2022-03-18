#include <stdio.h>
int main() {
	int i, n, search;
	printf("\t\tLinear Search\n\n");
	int myArr[10];
	printf("Enter n: ");
	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		printf("Enter Elements of an Array %d: ", i);
		scanf("%d", &myArr[i]);
	}
	printf("Enter A number You want to serarch: ");
	scanf("%d", &search);
	for(i = 0; i < n; i++) {
		if(myArr[i] == search) {
			printf("Element Found!! in %d Position", i);
			break;
		}
		if(myArr[i] != search) {
			printf("Error");
			break;
		}
	}
	return 0;
}