#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#define N 12  //主词条种类
#define O 7  //副词条位置
#define P 10  //副词条种类
#define	T 12  //副词条种类
#define	Z 44000  //副词条种类

int pointall1[10000000][10] = { 0 };
char* syw1[T] = { "   生命值   ","生命值百分比","   攻击力   ","攻击力百分比","   防御力   ","防御力百分比","   暴击率   ","  暴击伤害  ","  元素精通  ","元素充能效率","  治疗加成  ","  伤害加成  " };
int szh1[N][O][P], szy1[N][O][P], szs1[N][O][P], kzb1[N][O][P], lzg1[N][O][P];


//生命值、生命值百分比、攻击力、攻击力百分比、防御力、防御力百分比、暴击率、暴击伤害、元素精通、元素充能效率、治疗加成、伤害加成
//   1        2            3        4            5           6         7        8         9           10          11       12

void gotoxy1(int x, int y) {
	COORD pos = { x,y };
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hOut, pos);
}
void HideC1(int x)
{
	CONSOLE_CURSOR_INFO cursor_info = { 1, x };
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
}



int main()
{

	int m1 = 0;//main point
	int a1 = -1, b1 = -1, c1 = -1, d1 = -1;//additional point
	int loca;//additional location
	int a2 = 0, b2 = 0, c2 = 0, d2 = 0;//plus point
	int i1 = 0, i1p = 0, i12 = 0, i2 = 0, i21 = 0, i3 = 0, i4 = 0;//printf counter
	int ifsm = 0, ics = 0, ifs = -1;//all counter
	int temp0 = 1, temp1 = 1, temp2 = 1;
	int ti2=0;

	printf("|-------------------------------------------------------------------------------------------------------|\n");
	printf("start!\n");
	printf("单击鼠标左键暂停，按任意键继续：\n\n");
	//gotoxy1(0, 16);
	printf("|-------------------------------------------------------------------------------------------------------|\n");
	gotoxy1(0, 5);
	printf("计算中……");
	HideC1(0);
	for (m1 = -1;;)
	{
		m1++;
		if (m1 == 5)m1++;
		if (m1 >= 12)break;
		ifsm++;
		for (;;) //------------------------------------------------------------------a1
		{
			a1++;
			if (a1 == m1)a1++;
			if (a1 >= 10) {
				a1 = -1;
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
				if (b1 >= 10) {
					b1 = -1;
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
					if (c1 >= 10) {
						c1 = -1;
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
						if (d1 >= 10) {
							d1 = -1;
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
									szh1[m1][loca][a1] = a2;
									pointall1[ifs][a1] = a2;
									loca++;
									szh1[m1][loca][b1] = b2;
									pointall1[ifs][b1] = b2;
									loca++;
									szh1[m1][loca][c1] = c2;
									pointall1[ifs][c1] = c2;
									loca++;
									szh1[m1][loca][d1] = d2;
									pointall1[ifs][d1] = d2;
									//cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc
									//ssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssputout
									if (ifs % 2088 == 0 || ifs == 0||ifs==2088575) {
										
										i1 = ifs / 20885;
										i2 = i1 / 1 % 10;
										i21 = i1 / 10 % 10;
										i4 = i21 * 10 + i2;
										i4 = i4 / 2;
										//--------------------------------------------------------------------------------------------------------------------
										gotoxy1(0, 6);
										printf("[|");
										for (;;) {
											i3++;
											if (i3 <= i4)
												printf(">");
											else
												printf("-");
											if (i3 >= 24)break;
										}
										printf("%d%%", i1);
										for (;;) {
											i3++;
											if (i3 < i4)
												printf(">");
											else
												printf("-");
											if (i3 >= 49)break;
										}
										i3 = 0;
										printf("|]      第%d次计算中……   第%d种词条种类。", ifs, ics);
										if (i1 % 100 == 0 && i1 != 0||ifs==2088575) {
											printf("\r");
											printf("[||||||||||||||||||||||||100%%||||||||||||||||||||||||||]");
											printf("      第%d次写入中……   共需写入%d次。", ifs, ifs);
										}
									}
									//ssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss2
								}//-------------------------------------------------------------------d2
							}
						}
					}//---------------------------------------------------------------d1
				}
			}
		}
	}
	int i = 0, j = 0, k = 0, tims1 = 0;
	FILE* stream, * fp;
	errno_t err;
	gotoxy1(0,8);
	// Open for write
	err = fopen_s(&fp, "data2.txt", "w+");
	if (err == 0)
	{
		printf("The file 'data2.txt' was opened。\n");
		printf("写入中……");
	}
	else
	{
		printf("The file 'data2.txt' was not opened。\n");
	}
	if (err == 0)
	{
		for (;;) {
			tims1++;
			if (tims1 % 20880 == 0 || tims1 == 1 || tims1 == 2088575) {
				i1 = tims1 / 20885;
				i2 = i1 / 1 % 10;
				i21 = i1 / 10 % 10;
				i4 = i21 * 10 + i2;
				i4 = i4 / 2;
				gotoxy1(0, 10);
				printf("[|");
				for (;;) {
					i3++;
					if (i3 <= i4)
						printf(">");
					else
						printf("-");
					if (i3 >= 24)break;
				}
				printf("%d%%", i1);
				for (;;) {
					i3++;
					if (i3 < i4)
						printf(">");
					else
						printf("-");
					if (i3 >= 49)break;
				}
				i3 = 0;
				printf("|]      第%d次写入中……   共需写入%d次。", tims1, ifs);

				if (i1 % 100 == 0 && i1 != 0 || tims1 == 2088575) {
					printf("\r");
					printf("[||||||||||||||||||||||||100%%||||||||||||||||||||||||||]");
					printf("      第%d次写入中……   共需写入%d次。", tims1, ifs);
				}
			}
			for (j = 0;;) {

				fprintf(fp, "%d,", pointall1[i][j]);
				j++;
				if (j >= 10)break;
			}
			if (k <= 8) { k++; fprintf(fp, "    "); }
			else {
				k = 0; fprintf(fp, "\n");
			}
			i++;
			if (i >= ifs)break;
		}
	}
	fclose(fp);
	gotoxy1(0, 13);
	HideC1(1);
	if (err == 0)printf("写入完成！\n");
	else printf("写入失败。\n");
	system("pause");
	return 0;
}