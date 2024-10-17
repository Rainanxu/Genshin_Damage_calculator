#include<stdio.h>

int main()
{
	int a[100]={0}, i = 0, ch = 0;
	for (;;) {
		i++;
		ch=scanf_s("%c", &a[i], 1);
		if (ch == 0)getchar();
		printf("%d", a[i]);
	}
}