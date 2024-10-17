#include<stdio.h>
#include<windows.h>

extern struct HellowTextType;

int MessageBox01(int type, char Text[], char Title[]) {
	int Return = 0;
	if(type)
		Return = MessageBox(NULL, Text, Title, MB_OKCANCEL);
	else
		Return = MessageBox(NULL, Text, Title, MB_OK);
	return Return;
}
int HellowBox02(int Type, int ifnewline, int CorE, struct HellowTextType Texts) {
	int Return = 0;
	if (CorE)
		Return = MessageBox01(Type, Texts.text_en, Texts.title_en);
	else
		Return = MessageBox01(Type, Texts.text_zh, Texts.title_zh);
	if(ifnewline)_endthread();
	return Return;
}
/*Type  0 MB_OK
*       1 MB_OKCANCEL
*/
int HellowBox_old(int Type, int IfNewLine, int CorE, struct HellowTextType Texts) {
	int Return = 0;
	if (IfNewLine) {
		_beginthread(Return = MessageBox02(Type, IfNewLine, CorE, Texts), 0, NULL);
		_endthread();
	}
	else
		Return = MessageBox02(Type, IfNewLine, CorE, Texts);
	return Return;
}

//--------------------------------------------------------------------------------------------------

int HellowBox(int Type, int Lines, int CorE, struct HellowTextType Texts) {
	int Return = 0;
	if (CorE)
		PutOut(Lines, 0, Texts.text_en);
	else
		PutOut(Lines, 0, Texts.text_zh);
	return Return;
}
int IfYes() {
	int Lines = 0;
	char charin;
	PutOut(Lines, 0, "InPut Y / N\n");
	for (int i = 0 ,i0 = 0 ;;) {
		i0 = scanf_s("%c", &charin);
		if (i0 == 0)i0 = getchar();
		else if (charin - 'y' && charin - 'Y')return 1;
		else if (charin - 'n' && charin - 'N')return 0;
		else{
			PutOut(Lines, 0, "Erro Plase try again\n");
		}
	}
}
