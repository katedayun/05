#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	int num = 0;
	 
	printf("input a string: ");

	while ((c=getchar())!='\n')
	//'/n'enter 랑 같으면 그만! enter 랑 다르면 계속 한다고. 
	//c=getchar() c =  문자를 저장한다.. 정수로 저장한다... 저장소의 차이.. get char = 문자를 하나 가져오는 함수 sook2018 '/n'하나씩 c 에 들어가.. 
	//반복을 할때마다 하나씩 c 에 들어간다..  
	{
			if (c>='0'&&c<='9')
				num=num+1;
}
printf("no.of digits is %i\n",num);
	return 0;
}
