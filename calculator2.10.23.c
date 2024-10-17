#include<stdio.h>
#include<stdlib.h>
#define N 5  //主词条种类
#define O 7  //副词条位置
#define P 10  //副词条种类

int main() {

	int m1=11;//main point
	int a1 = 0, b1 = 0, c1 = 0, d1 = 0;//additional point
	int loca;//additional location
	int a2 = 0, b2 = 0, c2 = 0, d2 = 0;//plus point
	int i1 = 0, i2 = 0, i3 = 0;//printf counter
	int ics = 0, ifs = 0;//all counter

	int point1[N][O][P];

	printf("|------------------------------|\n");
	printf("start!\n\n");


	for (;;)
	{

		if (ifs >= 10000)break;
		if (a1 >= 11)break;
		for (;;) //------------------------------------------------------------------a1
		{
			a1++;
			if (a1 == m1)a1++;
			if (a1 >= 11) {
				a1 = 0;
				break;
			}
			for (;;)//---------------------------------------------------------------b1
			{
				b1++;
				for (;;)
				{
					if (b1 == m1 || b1 == a1)b1++;
					if (b1 != m1 && b1 != a1)break;
				}
				if (b1 >= 11) {
					b1 = 0;
					break;
				}
				for (;;)//-----------------------------------------------------------c1
				{
					c1++;
					for (;;)
					{
						if (c1 == m1 || c1 == a1 || c1 == b1)c1++;
						if (c1 != m1 && c1 != a1 && c1 != b1)break;
					}
					if (c1 >= 11) {
						c1 = 0;
						break;
					}
					for (;;)//-------------------------------------------------------d1
					{
						ics++;
						d1++;
						for (;;)
						{
							if (d1 == m1 || d1 == a1 || d1 == b1 || d1 == c1)d1++;
							if (d1 != m1 && d1 != a1 && d1 != b1 && d1 != c1)break;
						}
						if (d1 >= 11) {
							d1 = 0;
							break;
						}
						//ssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss
						for (;;)//-------------------------------------------------------------------a2
						{
							a2++;
							if (a2 >= 7) {
								a2 = 0;
								break;
							}
							for (;;)//---------------------------------------------------------------b2
							{
								b2++;
								if (b2 >= 7 || 7 < a2 + b2) {
									b2 = 0;
									break;
								}
								for (;;)//-----------------------------------------------------------c2
								{
									c2++;
									if (c2 >= 7 || 8 < a2 + b2 + c2) {
										c2 = 0;
										break;
									}
									//-------------------------------------------------------d2
									d2 = 9 - (a2 + b2 + c2);
									ifs++;
									//cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc
									loca = 1;
									point1[m1][loca][a1] = a2;
									loca++;
									point1[m1][loca][b1] = b2;
									loca++;
									point1[m1][loca][c1] = c2;
									loca++;
									point1[m1][loca][d1] = d2;
									//cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc
									printf("1     2     3     4  第%d次计算.\n",ifs);
									int temp1 = 1, temp2 = 1;
									for (;;)
									{
										if (temp1 == 1)temp2 = a1;
										if (temp1 == 2)temp2 = b1;
										if (temp1 == 3)temp2 = c1;
										if (temp1 == 4)temp2 = d1;
										printf("%d     ", temp2);
										temp1++;
										if (temp1 == 5) {
											printf("\n");
											break;
										}
									}
									temp1 = 1;
									temp2 = 1;
									for (;;)
									{
										if (temp1 == 1)temp2 = a1;
										if (temp1 == 2)temp2 = b1;
										if (temp1 == 3)temp2 = c1;
										if (temp1 == 4)temp2 = d1;
										printf("%d     ", point1[m1][temp1][temp2]);
										temp1++;
										if (temp1 == 5) {
											printf("\n\n");
											break;
										}
									}
									//ssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss2
									if (ifs % 40 == 0) {
										i1 = ifs / 2822;
										i2 = i1 / 2;
										//if (ifs == 282240)i1 = 100;
										printf("[|");
										fflush(stdout);
										for (;;) {
											i3++;
											if (i3 < i2)
												printf(">");
											else
												printf("-");
											fflush(stdout);
											if (i3 >= 25)break;
										}
										printf("%d%%", i1);
										fflush(stdout);
										for (;;) {
											i3++;
											if (i3 < i2)
												printf(">");
											else
												printf("-");
											fflush(stdout);
											if (i3 >= 49)break;
										}
										i3 = 0;
										printf("|]      第%d次计算中……   第%d种词条种类。", ifs, ics);
										fflush(stdout);
										printf("\r");
										fflush(stdout);
										if (ifs == 282240)printf("[|||||||||||||||||||||||||100%%||||||||||||||||||||||||||]");
									}
									
								}//-------------------------------------------------------------------d2
							}
						}
					}//---------------------------------------------------------------d1
				}
			}
		}
	}
	printf("\n\n");

	printf("ok!\n");

	system("pause");
	return 0;
}