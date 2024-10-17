#include<stdio.h>

int main() {
	
	int array_in[10000] = { 0 }, i = 0, ch0 = 0;
	for (;;)
	{
		ch0=scanf_s(" %c", &array_in[i], 1);
		//if (ch0 == 0)getchar();
		//else 
		if (array_in[i] == '1')break;
		i++;
	}
	i = 0;
	for (;;)
	{
		printf("'%c',", array_in[i]);
		i++;
		if (array_in[i] == 49)break;
	}
	i = 0;
	printf("\n\n");
	for (;;)
	{
		printf("%d,", array_in[i]);
		i++;
		if (array_in[i] == 49)break;
	}
}