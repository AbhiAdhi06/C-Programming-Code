#include <stdio.h>
int main()
{
	int i , j;
	char hello[] = "Hello World";
	printf("%s\n\n\n\n" , hello);
//	for(i = 0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			printf("%d , %d \n" , i , j);
//		}
//	}
//		printf("End");

//	for(i = 0;i<3;i++)  //i = 0
//	{
//		for(j=0;j<3;j++)  // j = 0,1,2,3
//		{
//			printf("%d , %d \n" , i , j); //0,0 0,1 0,2
//		}
//		break;
//	}
//	printf("End");

	for (i = 0; i < 100; i++){
		if(i % 2 == 1)
			continue;
			printf("%d\t" , i);
	}
//		if (i == 5)
//		{
//			break;
//		}
//		printf("\t%d" , i);
		/*getch();*/ //Hold OutPut
	
	return 0;
}