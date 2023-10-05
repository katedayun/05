#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int integer;
	
	printf("enter integer : ");
	scanf("%d",&integer);
	
	if(integer>0)
		printf("its an positive number\n");
	
	else if(integer<0)
		printf("its an negtive number\n");
	
	else 
		printf("its 0\n ");
	return 0;
}
