#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	int num = 0;
	 
	printf("input a string: ");

	while ((c=getchar())!='\n')
	//'/n'enter �� ������ �׸�! enter �� �ٸ��� ��� �Ѵٰ�. 
	//c=getchar() c =  ���ڸ� �����Ѵ�.. ������ �����Ѵ�... ������� ����.. get char = ���ڸ� �ϳ� �������� �Լ� sook2018 '/n'�ϳ��� c �� ��.. 
	//�ݺ��� �Ҷ����� �ϳ��� c �� ����..  
	{
			if (c>='0'&&c<='9')
				num=num+1;
}
printf("no.of digits is %i\n",num);
	return 0;
}
