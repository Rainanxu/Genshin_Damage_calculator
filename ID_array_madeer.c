#include<stdio.h>

int main() {
	
	char array_in[10000] = { 0 };
	//int array_in[10000] = { 0 }, 
		int i = 0, ch0 = 0, i_max = 0, i_i = 0;
	int no = 1, value = 0, format = 0, grup = 0;
	for (;;)
	{
		ch0=scanf_s(" %c", &array_in[i], 1);
		//if (ch0 == 0)getchar();
		//else 
		if (array_in[i] == '9')break;
		i++, i_max++;
	}
	i = 0;
	for (;;)
	{
		if (i >= i_max)break;
		printf("%d ,\"",no);
		for (;;) {
			for (;;) {
				printf("'%c',", array_in[i]);
				i++;
				if (array_in[i] == ' ') {
					i_i++;
					break;
				}
			}
			printf("\",");
			if (i_i % 3 == 0)break;
		}
		printf("%d ,%d ,%d ,",value,format,grup);
		no++;
		if (array_in[i] == '9')break;
	}
	i = 0;
	printf("\n\n");
	/*
	for (;;)
	{
		printf("%d,", array_in[i]);
		i++;
		if (array_in[i] == 49)break;
	}
	*/
	return 0;
}