#include<stdio.h>
#include<string.h>
void test(char* a);
int main(int argc, char* argv[])
{
		if (argc != 3)
	{
		printf("参数不正确！");
	}
	else
	{
		if (strcmp(argv[1], "reverse_echo") == 0)
		{
			test(argv[2]);
		}
		else {
			printf("参数一功能参数不匹配");
		}
	}
	
	
}
void test(char* a) {
	for (int j = strlen(a) - 1; j >= 0; j--)
	{
		printf("%c",a[j]);
	}
}