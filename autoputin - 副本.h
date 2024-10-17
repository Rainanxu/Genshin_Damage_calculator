#pragma once
#include<stdio.h>
int autoputin(int char_in[], int number_now, int char_from[], int number_ask_for, int finded[])
/*
char_in[] int char_from[]must be '0'in end
char_in          the char array put in
number_now       a number is find the serial,if you want find all,be '0'
char_from        the char array ,the char will be find from it with char_in,
				 Please use ',' separate two words and the first should be ','
number_ask_for   if it is '0',will return the number finded in char_from
				 if it is '1',will return the number of how much finded in char_in
				 if it is others,will return the number now finded in char_in
finded           the int array ,out put the number in char_from and whell end in char_in
				 when number_ask_for is '1' ,it is used
*/
{
	int find_from, i = 0, i0 = 0, f = 0, ch0 = 0, ch1 = 0, times = 0, times_can[100] = { 0 };
	find_from = number_now;
	for (;;) {
		if (char_from[i] == 44) { 
			times_can[f] = i + 1;
			f++;
		}
		else if (char_from[i] == 0 && char_from[i + 1] == 0 && char_from[i + 2] == 0) {
			f = 0;
			break; 
		}
		i++;
	}
	if (find_from == 0) {
		for (;;) {
			if (char_in[number_now] == 0 || char_in[number_now] == 10) {
				char_in[number_now] = 0;
				break;
			}
			else char_in[number_now] = 0;
			number_now++;
		}
		number_now = find_from;
		for (;;) {
			ch0 = scanf_s("%c", &char_in[number_now], 1);
			if (ch0 != 0) {
				if (char_in[number_now] == 10) {
					break;
				}
				else if (char_in[number_now] >= 65 && char_in[number_now] <= 90)char_in[number_now] = char_in[number_now] + 32;
				else if (char_in[number_now] == 32 || char_in[number_now] == 44 ) { char_in[number_now] = 0; number_now--; }
				else if (char_in[number_now - 1] == 163 && char_in[number_now] == 172) { char_in[number_now - 1] = 0, char_in[number_now] = 0; number_now--, number_now--; }
				else if (char_in[number_now - 1] == 161 && char_in[number_now] == 163) { char_in[number_now - 1] = 0, char_in[number_now] = 0; number_now--, number_now--; }
				number_now++;
			}
			else ch1=getchar();
		}
		number_now = find_from;
	}
	for (;;) {
		if (finded[i0] == 0 && finded[i0 + 1] == 0 && finded[i0 + 2] == 0)break;
		else finded[i0] = 0;
		i0++;
	}
	i0 = 0;
	for (;;) {
		if (times_can[f] == 0) {
			f = -1;
			goto output;
		}
		else if (char_in[number_now] == 0|| char_in[number_now] == 10) {
			number_now = find_from - 1;
			f++;
		}
		else if (char_in[number_now] == char_from[times_can[f]]){
			i = times_can[f], ch1 = number_now;
			     for (;;) {
					 number_now++, i++;
					  if (char_from[i] == 44) {
						  if(number_ask_for!=1)goto output;
						  times++, finded[i0] = f+1;
						  i0++;
						  finded[i0] = number_now;
						  i0++, number_now--;
						  break;
					  }
					  if (char_in[number_now] != char_from[i]) {
						  number_now = ch1;
						  break;
					  }
			     }
		}
		number_now++;
	}
output:
	if (number_ask_for == 0)return f;
	else if (number_ask_for == 1)return times;
	else return number_now;
}