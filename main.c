#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int integer; 
	int neginteger;
	
	
	printf("enter a integer:");
	scanf("%d",&integer);
	if(integer>=0)
		printf("absolute value is %d",integer);
	else
		{
			printf("absolute value is %d",-integer);
		}
	return 0;
}
