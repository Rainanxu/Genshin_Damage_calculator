#pragma once

double be_number(int a[],int number_from) {
	int i, i2 = 0, ch0 = 0, ch1 = 0;
	double number = 0, i0 = 0, i1 = 1;
	i = number_from;
	for (;;) {
		if (a[i] == '.')ch0 = 1;
		else if (a[i] >= '0' && a[i] <= '9') {
			i2 = a[i] - 48;
			if (ch0 == 0)
				number = number * 10 + i2;
			else {
				i1 = i1 * 0.1;
				i0 = i2 * i1;
				printf("ֵΪ��%d----\n", i2);
				number = number + i0;
			}
		}
		else if (a[i] == '%') { 
			number = number * 0.01;
			ch1++;
		}
		else {
			break;
		}
		i++;
	}
	return number;
}