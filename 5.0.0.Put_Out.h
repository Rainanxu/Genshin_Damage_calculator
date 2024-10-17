#include<stdio.h>

int LineAdd00(char Text[]) {
	int LineAdds = 0;
	for (int i=0;;) {
		if (Text[i] == 0)break;
		if (Text[i] == '/' && Text[i + 1] == 'n')LineAdds++;
	}
	return LineAdds;
}
void PutOut(int Lines, int ctrl, char Text[]) {
	int LineAdds = LineAdd00(Text);
	Lines = Lines + LineAdds;
	printf(Text);
}
