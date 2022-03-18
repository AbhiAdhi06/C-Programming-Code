#include <stdio.h>
#include <conio.h>
int main()
{
	int i , j , k; //I Is For Outer Loop , J Is For Inner Loop
//	for(i = 1; i <= 5; i++) //Responsible For Printing lines
//	{
//		for(j = 1; j <= i; j++) //Responsible For Inner Printing
//			{
//				printf("*");
//			}
//		printf("\t\n");
//	}
//	getch(); //Holds Program
//for(i=0;i<3;i++){
//for(j=0;j<3;j++){
//			printf("%d,%d\n",i, j);
//			goto end;
//}
//}
//end1: printf("end");
printf("\n\n");

	for(i=0;i<3;i++){
for(j=0;j<3;j++){
			printf("%d , %d\n",i, j);
}
goto end1;
}
end1: printf("end1");

	return 0;
}