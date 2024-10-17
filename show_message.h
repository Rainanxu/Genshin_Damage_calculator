/*
char_in   the char arry to printf,
size      the size of there chars will printf,
null      the space size before and after of char_in,
others    the varue to ctrl:
          0,printf the char arry,
		  1,printf as number,
		  2,printf as point number,
*/
int printf_plus(char char_in[], int size, int null, int others)
{
	char* p = 0;
	int chars_size = 0, printf_from = 0, printf_end = 0;
	p = char_in;
	for (int i=0;;) {
		if (*p == 0) {
			chars_size = i;
			break;
		}
		else {
			i++, p++;
		}
		if (i >= 100) {
			chars_size = -1;
			break;
		}
	}
	if (chars_size <= size) {
		printf_from = (size - chars_size) / 2 + null;
		printf_end = size - chars_size - printf_from + null + null;
		for (int i = 0;;) {
			if (i >= printf_from)break;
			else printf(" ");
			i++;
			if (i >= 1000) {
				printf("\nErro, it is too long!\n");
				break;
			}
		}
		printf("%s", char_in);
		for (int i = 0;;) {
			if (i >= printf_end)break;
			else printf(" ");
			i++;
			if (i >= 1000) {
				printf("\nErro, it is too long!\n");
				break;
			}
		}
		return 1;
	}
	else {
		for (int i=0;;) {
			if (i >= null)break;
			else printf(" ");
			i++;
		}
		printf("%s", char_in);
		printf_end = chars_size - size;
		for (int i = 0;;) {
			if (i >= printf_end||i>=1000)break;
			printf("\b \b");
			i++;
		}
		for (int i=0;;) {
			if (i >= null)break;
			else printf(" ");
			i++;
		}
		return 2;
	}
}
/*
others   the ctrl value:
         0,int
		 1,double%
*/
int number_be_char_arry(double number, char char_return[], int others) {
	int i_copy = 0;
	double number_temp = 0;
	char char_temp[10] = { 0 };
	if (others == 0)
		number_temp = number;
	else number_temp = number * 100;
	for (char char_temp[10] = { 0 };;) {
		int i_little = 0;
		for (;;) {
			char_temp[i_little] = (int)number_temp % 10 + '0';
			number_temp = number_temp / 10;
			i_little++;
			if ((int)number_temp == 0 || i_little >= 10)break;
		}
		i_little--;
		for (;;) {
			if (i_little < 0)break;
			char_return[i_copy] = char_temp[i_little];
			i_copy++, i_little--;
		}
		break;
	}
	//printf("\n-----------------------------------------------------------------%s\n", char_return);
	if (others == 0)return 0;
	else {
		number_temp = number * 100;
		if (number_temp - (int)number_temp == 0) {
			char_return[i_copy] = '%';
			return 1;
		}
		else {
			char_return[i_copy] = '.';
			i_copy++;
			//--------------------------------------------------------------------------------------------------
			for (char char_temp[10] = { 0 };;) {
				int i_little = 0;
				for (;;) {
					if ((number_temp - ((int)number_temp)) == 0 || i_little >= 2)break;
					number_temp = number_temp * 10;
					char_return[i_copy] = (int)number_temp % 10 + '0';
					i_little++, i_copy++;
				}
				char_return[i_copy] = '%';
				return 1;
				break;
			}
		}
		return 1;
	}
}

int number_be_char_arry_old(double number, char char_return[], int others) {
	int i_little = 0, i_liniest = 0, i_copy = 0;
	double number_temp = 0, number_temp0 = 0;
	char char_temp[10] = { 0 };
	//char* copy_point = 0;
	//copy_point = char_return;
	//*copy_point = '0';
	number_temp = number;
	if (number_temp == 0) {
		char_return[0] = '0', i_copy++;
	}
	for (;;) {
		number_temp = number_temp / 10;
		char_temp[i_little] = (int)number_temp % 10 + '0';
		i_little++;
		if ((int)number_temp == 0)break;
	}
	for (;;) {
		if (i_little <= 0)break;
		char_return[i_copy] = char_temp[i_little];
		char_temp[i_little] = 0;
		i_copy++, i_little--;
	}
	//printf("\n-----------------------------------------------------------------%s\n", char_return);
	number_temp = number-(int)number;
	/*for (;;) {
		if (number_temp - (int)number_temp == 0)break;
		number_temp = number_temp * 10;
		i_liniest++;
	}*/
	if (others != 0) {
		number_temp = number, i_little = 0;
		if (others == 1&& number_temp - (int)number_temp != 0) {
			char_return[i_copy] = '.';
			i_copy++;
		}
		for (;;) {
			if (i_little >= 2)break;
			number_temp = number_temp * 10;
			char_return[i_copy] = (int)number_temp % 10 + '0';
			if (number_temp - (int)number_temp == 0)break;
			i_little++, i_copy++;
		}
		if (others == 2 && number_temp - (int)number_temp != 0) {
			for (;;) {
				if (i_little >= 2) {
					char_return[i_copy] = '.';
					i_copy++;
					break;
				}
				else {
					char_return[i_copy] = '0';
					i_copy++, i_little++;
				}
			}
		}
		for (;;) {
			if (i_little >= 4)break;
			number_temp = number_temp * 10;
			char_return[i_copy] = (int)number_temp % 10 + '0';
			if (number_temp - (int)number_temp == 0)break;
			i_little++, i_copy++;
		}
		if (others == 2) {
			for (;;) {
				if (i_little < 2) {
					char_return[i_copy] = '0';
					i_copy++;
				}
				else break;
				i_little++;
			}
			char_return[i_copy] = '%';
		}
	}
	return 1;
}




int message(int model, int char_from[], int char_finded[], double value[]) {
	char* syw1[12] = { "   生命值   ","生命值百分比","   攻击力   ","攻击力百分比","   防御力   ","防御力百分比","   暴击率   ","  暴击伤害  ","  元素精通  ","元素充能效率","  治疗加成  ","  伤害加成  "};
	//char *id[100] = { 0 };
	char* id_temp[100] = { "##name##","##id##","##value##",0 };
	//char* id_name[100] = { "   生命值   ","生命值百分比","   攻击力   ","攻击力百分比","   防御力   ","防御力百分比","   暴击率   ","  暴击伤害  ","  元素精通  ","元素充能效率","  治疗加成  ","  伤害加成  " ,0 };
	char* id_name[100] = { "生命值","生命值百分比","攻击力","攻击力百分比","防御力","防御力百分比","暴击率","暴击伤害","元素精通","元素充能效率","治疗加成","伤害加成" ,0,0 };
	int if_name_end = 0, if_id_end = 0, if_value_end = 0;
	char* copy = 0;
	int copy_from = 0, copy_finded = 0;
	printf("\n\n                    ||||||||||||||||///////////////////MESSAGE\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||||||||\n");
	printf("\n现有信息如下：\n\n");
	//printf("\n最大生命值  HP = %.0f\n",value[0]);
	for (int i0 = 0, i1 = 0;;) {
		if (id_name[i0] == 0 && if_name_end != 1) if_name_end = 1;
		if (i0 >= 99&&if_value_end!=1) {
			if_value_end = 1;
		}
		if (if_id_end == 1 && if_name_end == 1 && if_value_end == 1) {
			printf("\nended.\n");
			break;
		}
		for (;;) {
			copy = id_name[i0];
			if (if_name_end != 1)
			{
				if(*copy!=0)
					printf_plus(id_name[i0], 30, 1, 0);
				else 
					printf_plus(id_temp[0], 30, 1, 0);
			}
			else {
				printf_plus(id_temp[0], 30, 1, 0);
			}
			break;
		}
		//------------------------------------------------------------------------------------
		if (if_id_end != 1) {
			for (char* id[100] = { 0 };;) {
				copy = id;
				for (int i = copy_from, i_find = copy_finded, copy_size = 0;;) {
					if (char_from[i] == 0 && char_from[i + 1] == 0 && char_from[i + 2] == 0)if_id_end = 1;
					if (char_from[i] == ',')i_find++, i++;
					if (i_find >= i0 + 10) {
						for (;;) {
							if (char_from[i] == 0 && char_from[i + 1] == 0 && char_from[i + 2] == 0)if_id_end = 1;
							if (char_from[i] == ',' || char_from[i] == '=' || copy_size >= 99)break;
							else *copy = char_from[i] - 32, copy_size++, copy++;
							i++;
						}
						copy_from = i, copy_finded = i_find;
						break;
					}
					if (i >= 999) {
						copy_from = i, copy_finded = i_find;
						break;
					}
					i++;
				}
				copy = id;
				if (*copy != 0 && if_id_end != 1)printf_plus(id, 6, 1, 0);
				else printf_plus(id_temp[1], 6, 1, 0);
				//printf("  --%d", if_id_end);
				copy = 0;
				break;
			}
		}
		else printf_plus(id_temp[1], 6, 1, 0);
		char number_arr[100] = { 0 };
		if (10 <= i0 && i0 < 15) {
			number_be_char_arry(value[i0], number_arr, 0);
			//printf("=");
			//printf_plus(number_arr, 9, 1, 0);
			//printf("\n");
			//printf("= %.0f;\n", value[i0]);
		}
		else
			number_be_char_arry(value[i0], number_arr, 2);
		printf("=");
		for (;;) {
			copy = number_arr;
			if (if_value_end != 1) {
				printf_plus(number_arr, 9, 1, 0);
			}
			else printf_plus(id_temp[2], 9, 1, 0);
			break;
		}
		//printf("  -- %f --",value[i0]);
		if (i0 % 2)
			printf("\n");
		else printf("      | ");
		i0++;
	}
}






int message_old2(int model, int char_from[], int char_finded[], double value[]) {
	char* syw1[12] = { "   生命值   ","生命值百分比","   攻击力   ","攻击力百分比","   防御力   ","防御力百分比","   暴击率   ","  暴击伤害  ","  元素精通  ","元素充能效率","  治疗加成  ","  伤害加成  " };
	char id[100] = { 0 };
	char* id_temp[100] = { "##name##","##id##","##value##",0 };
	//char* id_name[100] = { "   生命值   ","生命值百分比","   攻击力   ","攻击力百分比","   防御力   ","防御力百分比","   暴击率   ","  暴击伤害  ","  元素精通  ","元素充能效率","  治疗加成  ","  伤害加成  " ,0 };
	char* id_name[100] = { "生命值","生命值百分比","攻击力","攻击力百分比","防御力","防御力百分比","暴击率","暴击伤害","元素精通","元素充能效率","治疗加成","伤害加成" ,0 };
	int if_name_end = 0, if_id_end = 0, if_value_end = 0;
	char* p = 0;
	printf("\n\n        ///////////////////MESSAGE////////////////\n");
	printf("\n现有信息如下：\n");
	//printf("\n最大生命值  HP = %.0f\n",value[0]);
	for (int i0 = 0, i1 = 0, ip = 0;;) {
		if (id_name[i0] == 0) if_name_end = 1;
		//if (i0 >= 10)if_id_end = 1;
		if (i0>=99) {
			if_value_end = 1;
		}
		if (if_id_end == 1 && if_name_end == 1 && if_value_end == 1) {
			printf("\nended.\n");
			break;
		}
		ip = 0;
		if (if_name_end != 1)
		{
			p = id_name[i0];
			printf("%s", id_name[i0]);
		}
		else {
			p = id_temp[0];
			printf("%s", id_temp[0]);
		}
		for (;;) {
			if (*p == 0)break;
			else {
				ip++;
			}
			if (ip >= 20)break;
			p++;
		}
		for (int i_times = 0;;) {
			if (ip == 20 || i_times >= 20)break;
			else if (ip < 20) {
				printf(" ");
				ip++;
			}
			else {
				printf("\b \b");
				ip--;
			}
			i_times++;
		}
		//------------------------------------------------------------------------------------
		if (if_id_end != 1) {
			for (int i_temp = 0;;) {
				if (id[i_temp] == 0 && id[i_temp + 1] == 0 && id[i_temp + 2] == 0)break;
				else {
					i_temp++;
					id[i_temp] = 0;
				}
			}
			for (int i_from0 = 0, i_from1 = -10, copy_0 = -1;;) {
				if (char_from[i_from0] == 44)i_from1++;
				if (i0 < i_from1)break;
				if (i0 == i_from1) {
					for (;;) {
						i_from0++, copy_0++;
						if (char_from[i_from0] == 61 || char_from[i_from0] == 44 || copy_0 >= 10)break;
						id[copy_0] = (char)char_from[i_from0] - 32;
					}
					if (char_from[i_from0 + 1] == 0)if_id_end = 1;
					break;
				}
				else i_from0++;
			}
			p = id;
		}
		else p = id_temp[1];
		if (10 <= i0 && i0 < 15)
			printf("%s=%.0f;\n", p, value[i0]);
		else
			printf("%s=%.2f%%;   %d   %d    %d\n", p, 100 * value[i0],if_name_end,if_id_end,if_value_end);

		i0++;
	}
}




int message_old1(int model,int char_from[],int char_finded[],double value[]) {
	char* syw1[12] = { "   生命值   ","生命值百分比","   攻击力   ","攻击力百分比","   防御力   ","防御力百分比","   暴击率   ","  暴击伤害  ","  元素精通  ","元素充能效率","  治疗加成  ","  伤害加成  " };
	char id[100] = { 0 };
	char* id_temp[100] = { "##name##","##id##","##value##",0 };
	//char* id_name[100] = { "   生命值   ","生命值百分比","   攻击力   ","攻击力百分比","   防御力   ","防御力百分比","   暴击率   ","  暴击伤害  ","  元素精通  ","元素充能效率","  治疗加成  ","  伤害加成  " ,0 };
	char* id_name[100] = { "生命值","生命值百分比","攻击力","攻击力百分比","防御力","防御力百分比","暴击率","暴击伤害","元素精通","元素充能效率","治疗加成","伤害加成" ,0};
	int if_name_end = 0, if_id_end = 0, if_value_end = 0;
	char* p = 0;
	printf("\n\n        ///////////////////MESSAGE////////////////\n");
	printf("\n现有信息如下：\n");
	//printf("\n最大生命值  HP = %.0f\n",value[0]);
	for (int i0 = 0, i1 = 0,ip=0;;) {
		if (id_name[i0] == 0) if_name_end = 1;
		if (char_finded[i0] == 0 && char_finded[i0 + 1] == 0 && char_finded[i0 + 2] == 0) {
			if_id_end = 1, if_value_end = 1;
		}
		if (if_id_end == 1 && if_name_end == 1 && if_value_end == 1) {
			printf("\nended.\n");
			break;
		}
		ip = 0;
		if (if_name_end != 1)
		{
			p = id_name[i0];
			printf("%s", id_name[i0]);
		}
		else {
			p = id_temp[0];
			printf("%s", id_temp[0]);
		}
		for (;;) {
			if (*p == 0)break;
			else {
				ip++;
			}
			if (ip >= 20)break;
			p++;
		}
		for (int i_times=0;;) {
			if (ip == 20||i_times>=20)break;
			else if (ip < 20) { 
				printf(" ");
				ip++;
			}
			else {
				printf("\b \b");
				ip--;
			}
			i_times++;
		}
		//------------------------------------------------------------------------------------
		for (int i_temp = 0;;) {
			if (id[i_temp] == 0 && id[i_temp + 1] == 0 && id[i_temp + 2] == 0)break;
			else i_temp++;
		}
		for (int i_from0 = 0, i_from1 = 0, copy_0 = -1;;) {
			if (char_from[i_from0] == 44)i_from1++;
			if (char_finded[i0] < i_from1)break;
			if (char_finded[i0] == i_from1) {
				for (;;) {
					i_from0++, copy_0++;
					if (char_from[i_from0] == 61 || char_from[i_from0] == 44 || copy_0 >= 10)break;
					id[copy_0] = (char)char_from[i_from0] - 32;
				}
				break;
			}
			else i_from0++;
		}
		if (10 <= char_finded[i0] && char_finded[i0] < 15)
			printf("%s=%.0f;\n", id, value[char_finded[i0] - 10]);
		else
			printf("%s=%.2f%%;\n", id, 100 * value[char_finded[i0] - 10]);

		i0++;
	}
}

int message_old(int model, double value[]) {
	char* syw1[12] = { "   生命值   ","生命值百分比","   攻击力   ","攻击力百分比","   防御力   ","防御力百分比","   暴击率   ","  暴击伤害  ","  元素精通  ","元素充能效率","  治疗加成  ","  伤害加成  " };

	char* id_name[100] = { "   生命值   ","生命值百分比","   攻击力   ","攻击力百分比","   防御力   ","防御力百分比","   暴击率   ","  暴击伤害  ","  元素精通  ","元素充能效率","  治疗加成  ","  伤害加成  " ,0 };
	printf("\n\n        ///////////////////MESSAGE////////////////\n");
	printf("\n现有信息如下：\n");
	printf("\n最大生命值  HP = %.0f\n", value[0]);
	for (int i0 = 0, i1 = 0, ip = 0;;) {
		if (id_name[i0] == 0)break;
		printf("%s", id_name[i0]);
		char* p = id_name[i0];
		for (;;) {
			if (*p == 0)break;
			else {
				ip++, ip++;
			}
			if (ip >= 40)break;
		}
		for (int i_times = 0;;) {
			if (ip == 40 || i_times >= 40)break;
			else if (ip < 40) {
				printf(" ");
				ip++;
			}
			else {
				printf("/b /b");
				ip--;
			}
			i_times++;
		}

		i0++;
	}
}