int autoputin(int char_in[], int number_now, int char_from[],int number_ask_for)
{
	int i = 0, f = 0;
	for (;;) {
		if (char_from[i] == 0 || char_from[i] == 0) {
			f = -1;
			goto output;
		}
		if (char_from[i] == ' ' || char_from[i] == ',')f++, i++;
		if (char_in[number_now] == char_from[i])
		{
			for (;;) {
				number_now++, i++; 
				if (char_from[i] == ' ' || char_from[i] == ',')goto output;
				if (char_from[i] == 0 || char_from[i] == 0) {
					f = -1;
					goto output;
				}
				if (char_in[number_now] != char_from[i])break;
			}
		}
	}
	output:
	if (number_ask_for == 0)return f;
	else return number_now;
}