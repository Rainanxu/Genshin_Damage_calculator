#include <stdio.h>

/*
* return        0 not like
*               1 like
*               3 it isn`t allow
* value1 valu2  the values to compare;
* corl          the number to corl
*               0 a-b=0
*               1 a-b-32=0 or a-b+32=0;
*/
int if_likes_li000(int value1, int value2,int corl) {
	int temp = 0;
	temp = value1 - value2;
	if (corl == 0) {
		if (temp)return 0;
		else return 1;
	}
	else if (corl == 1) {
		if (temp && temp - 32 && temp + 32)return 0;
		else return 1;
	}
	else return 3;
}

/*
* return        number betwen tow arr
*/
int if_likes_li001_char_betwen(char* arr1, char* arr2) {
	int return_number = 0, tempint0 = 0, tempint1 = 0;
	char* temp0 = arr1, * temp1 = arr2;
	for (;;) {
		if (temp0 == temp1)break;
		else if (0 > temp1 - temp0)return_number++, temp1--, tempint0++;
		else return_number--, temp1++, tempint1++;
		if (tempint0 * tempint1)break;
	}
	return return_number;
}


/*
* return         0 does not exist
*                1 exist
* array_in the array putin
* array_chak  the array to chak
* other        a int number to ctrl
*                1 chak strict
*                2 chak strict and not case-sensitive
*                3 chak not strict
*                4 chak not strict and not case-sensitive
* corl         a int number to ctrl  //  if used
*                1 return the number of the like char`s where beging in array_in
*                2 return the number of the like char`s where over in arr_in;
*/

int if_like_chars(char *arrays[]) {
	printf("\n  01--\n%s\n", &arrays[0]);
	printf("\n  02--\n%s\n", &arrays[1]);
	char* p = 0;
	p = (char*) & arrays[0];
	printf("\n  --\n%s\n", p);

	char array_in[] = { 0 }, array_chak[] = { 0 };
	int other[] = { 0 };
	for (int il0 = 0;;) {
		for (char* il1 =(char*) & arrays[0];;) {
			//il1 = &array_in[8];
			printf("\n %c ", il1);
			if (*il1) {
				array_in[il0] = *il1;
				il0++, il1++;
			}
			else break;
		}
		break;
	}
	for (int il0 = 0;;) {
		for (char* il1 = (char*)&arrays[1];;) {
			if (*il1) {
				array_chak[il0] = *il1;
				il0++, il1++;
			}
			else break;
		}
		break;
	}
	other[0] = (int)&arrays[2];
	int times_others = 0, if_corl1 = 0;
	for (int il0 = 0;;) {
		//printf("\n ----------------------| %d |\n", other[il0]);
		//if (other[il0])times_others++, il0++;
		//else break;
		break;
	}
	if (times_others >= 1)if_corl1 = 1;
	char* in = 0, * chak = 0;
	int if_ignor = 0;
	in = array_in, chak = array_chak;
	if (other[0] == 1 || other[0] == 3)if_ignor = 1;
	for (char* i0 = 0, *i1 = chak;;) {
		chak = i1;
		//printf("\n %d %d %d-----\n", *in, *chak, if_likes_li000(*in, *chak, if_ignor));
		if (if_likes_li000(*in, *chak, if_ignor)) {
			i0 = in;
			for (;;) {
				if (other[0] == 0 || other[0] == 1) {
					if (*in == 0 && *chak == 0) {
						if (if_corl1) {
							if (other[1]) {
								return if_likes_li001_char_betwen(in, array_in);
							}
							else return if_likes_li001_char_betwen(i0, array_in);
						}
						else return 1;
					}
				}
				else {
					if (*chak == 0) {
						if (if_corl1) {
							if (other[1]) {
								return if_likes_li001_char_betwen(in, array_in);
							}
							else return if_likes_li001_char_betwen(i0, array_in);
						}
						else return 1;
					}
					else if (*in == 0)return 0;
				}
				//printf("\n %d %d %d - - - - - - -\n", *in, *chak, if_likes_li000(*in, *chak, if_ignor));
				if (!if_likes_li000(*in, *chak, if_ignor))break;
				in++, chak++;
			}
			in = ++i0;
		}
		else if (other[0] != 0 && other[0] != 1) {
			in++;
			if (*in == 0)return 0;
		}
		else return 0;
	}
	return 0;
}



/*
* return         0 does not exist
*                1 exist
* array_in the array putin
* array_chak  the array to chak
* other        a int number to ctrl 
*                1 chak strict
*                2 chak strict and not case-sensitive
*                3 chak not strict
*                4 chak not strict and not case-sensitive
* corl         a int number to ctrl  //  if used
*                1 return the number of the like char`s where beging in array_in
*                2 return the number of the like char`s where over in arr_in;
*/
int if_like(char array_in[], char array_chak[], int other[]) {
	int times_others = 0, if_corl1 = 0;
	for (int il0 = 0;;) {
		//printf("\n ----------------------| %d |\n", other[il0]);
		//if (other[il0])times_others++, il0++;
		//else break;
		break;
	}
	if (times_others >= 1)if_corl1 = 1;
	char* in = 0, * chak = 0;
	int if_ignor = 0;
	in = array_in, chak = array_chak;
	if (other[0] == 1 || other[0] == 3)if_ignor = 1;
	for (char* i0 = 0, *i1 = chak;;) {
		chak = i1;
		//printf("\n %d %d %d-----\n", *in, *chak, if_likes_li000(*in, *chak, if_ignor));
		if (if_likes_li000(*in,*chak,if_ignor)) {
			i0 = in;
			for (;;) {
				if (other[0] == 0 || other[0] == 1) {
					if (*in == 0 && *chak == 0) {
						if (if_corl1) {
							if (other[1]) {
								return if_likes_li001_char_betwen(in, array_in);
							}
							else return if_likes_li001_char_betwen(i0, array_in);
						}
						else return 1;
					}
				}
				else {
					if (*chak == 0) { 
						if (if_corl1) {
							if (other[1]) {
								return if_likes_li001_char_betwen(in, array_in);
							}
							else return if_likes_li001_char_betwen(i0, array_in);
						}
						else return 1;
					}
					else if (*in == 0)return 0;
				}
				//printf("\n %d %d %d - - - - - - -\n", *in, *chak, if_likes_li000(*in, *chak, if_ignor));
				if (!if_likes_li000(*in,*chak,if_ignor))break;
				in++, chak++;
			}
			in = ++i0;
		}
		else if (other[0] != 0 && other[0] != 1) {
			in++;
			if (*in == 0)return 0;
		}
		else return 0;
	}
	return 0;
}


/*
* return         0 does not exist
*                1 exist
* array_in the array putin
* array_chak  the array to chak
* other        a int number to ctrl
*                0 chak strict
*                1 chak strict and not case-sensitive
*                2 chak not strict
*                3 chak not strict and not case-sensitive;
*/
int if_like_old1(char array_in[], char array_chak[], int other) {
	
	char* in = 0, * chak = 0;
	int if_ignor = 0;
	in = array_in, chak = array_chak;
	if (other == 1 || other == 3)if_ignor = 1;
	for (char* i0 = 0, *i1 = chak;;) {
		chak = i1;
		//printf("\n %d %d %d-----\n", *in, *chak, if_likes_li000(*in, *chak, if_ignor));
		if (if_likes_li000(*in, *chak, if_ignor)) {
			i0 = in;
			for (;;) {
				if (other == 0 || other == 1) {
					if (*in == 0 && *chak == 0)return 1;
				}
				else {
					if (*chak == 0)return 1;
					else if (*in == 0)return 0;
				}
				//printf("\n %d %d %d - - - - - - -\n", *in, *chak, if_likes_li000(*in, *chak, if_ignor));
				if (!if_likes_li000(*in, *chak, if_ignor))break;
				in++, chak++;
			}
			in = ++i0;
		}
		else if (other != 0 && other != 1) {
			in++;
			if (*in == 0)return 0;
		}
		else return 0;
	}
	return 0;
}


int if_like_old(char array_in[], char array_chak[], int other) {
	char* in = 0, * chak = 0;
	int if_ignor = 0;
	in = array_in, chak = array_chak;
	if (other == 1 || other == 3)if_ignor = 32;
	for (char* i0=0,* i1=chak;;) {
		chak = i1;
		if ((*in - *chak) == 0 || (*in - *chak) == if_ignor || (*in - *chak) == -if_ignor) {
			i0 = in;
			for (;;) {
				if (other == 0 || other == 1) {
					if (*in == 0 && *chak == 0)return 1;
				}
				else {
					if (*chak == 0)return 1;
					else if (*in == 0)return 0;
				}
				if ((*in - *chak) != 0 && (*in - *chak) != if_ignor && (*in - *chak) != -if_ignor)break;
				in++, chak++;
				/*
				if (*in != *chak) {
					if(other!=1&&other!=3)break;
					else if (other == 1 || other == 3) {
						if ((*in - *chak) != 32 && (*in - *chak) != -32)break;
					}
				}
				*/
			}
			in = ++i0;
		}
		else if (other != 0 && other != 1) {
			in++;
			if (*in == 0)return 0;
		}
		else return 0;
	}
	return 0;
}