/* Binary Search */
/* Array Must Be Sorted */

#include <stdio.h>

int binarySearch(int myArr[], int size, int element) {
	int low, mid, high;
	low = 0;
	high = size - 1;
	while(low <= high) {
		mid = (low + high) / 2;
		if(myArr[mid] == element) {
			return mid;
		}
		if(myArr[mid] < element) {
			low = mid + 1;
		} else {
			high = mid - 1;
		}
	}
	return -1;
}


int main() {
	int n, i;
	int myArr[] = {1,5,8,9,10,16,50,80,90,100};
	int size = sizeof(myArr)/ sizeof(int);
	int element = 1;
	int searchIndex = binarySearch(myArr, size, element);
	printf("The Element %d Found In Index %d", element, searchIndex);
	return 0;
}