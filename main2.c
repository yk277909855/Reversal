#include<stdio.h>
#include<string.h>
void test(char* a);
char transform(char a);
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

	
	return 0;
}

void test(char* a) {
	for (int j = strlen(a) - 1; j >= 0; j--)
	{
		transform(a[j]);
	}
}
char transform(char a)
{
	char* b;
	switch (a)
	{
	case 'a':printf("%s", "\u0250"); break;
	case 'b':printf("%s", "\u051b"); break;
	case 'c':printf("%s", "\u0254"); break;
	case 'd':printf("%c", 'p'); break;
	case 'e':printf("%s", "\u01dd"); break;
	case 'f':printf("%s", "\u025f"); break;
	case 'g':printf("%s", "\u0183"); break;
	case 'h':printf("%s", "\u0265"); break;
	case 'i':printf("%s", "\u1d09"); break;
	case 'j':printf("%s", "\u027e"); break;
	case 'k':printf("%s", "\u029e"); break;
	case 'm':printf("%s", "\u026f"); break;
	case 'n':printf("%c", 'u'); break;
	case 'p':printf("%c", 'd'); break;
	case 'q':printf("%c", 'b'); break;
	case 'r':printf("%s", "\u0279"); break;
	case 't':printf("%s", "\u0287"); break;
	case 'u':printf("%c", 'n'); break;
	case 'v':printf("%s", "\u028c"); break;
	case 'w':printf("%s", "\u028d"); break;
	case 'y':printf("%s", "\u028e"); break;
	default:printf("%c",a);
	}
}