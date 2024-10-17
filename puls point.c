#include<stdio.h>
#include<stdlib.h>


int a2 = 0, b2 = 0, c2 = 0, d2 = 0;
int i = 0;
int main()
{
	for (;;)
	{
		a2++;
		if (a2 >= 7) {
			a2 = 0;
			break;
		}
		for (;;)//---------------------------------------------------------------b
		{
			b2++;
			if (b2 >= 7 || 7 < a2 + b2) {
				b2 = 0;
				break;
			}
			for (;;)//-----------------------------------------------------------c
			{
				c2++;
				if (c2 >= 7 || 8 < a2 + b2 + c2) {
					c2 = 0;
					break;
				}
				//-------------------------------------------------------d
				d2 = 9 - a2 - b2 - c2;
				//ssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss
				printf("------------------------------\n");
				printf("   %d", a2);
				printf("   %d", b2);
				printf("   %d", c2);
				printf("   %d", d2);
				printf("           %d\n\n", a2 + b2 + c2 + d2);
				i++;
				//---------------------------------------------------------------d
			}
		}
	}

	printf("------------------------------s\n");
	printf("i=%d\n", i);

	system("pause");
	return 0;





}