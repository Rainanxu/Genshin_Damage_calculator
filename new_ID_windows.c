#include<stdio.h>
#include"new_cmd_windows_for_message.h"
#include<windows.h>


int main(int put_in, char* array_in[]) {
	ShowWindow(GetConsoleWindow(), SW_HIDE);
	CONSOLE_CURSOR_INFO cursor_info = { 1, 0 };
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
	MessageBox(NULL, "����ID���£�\n\nMHP������ֵ���� Max HP                      MATK�������� ATK\nCRR  �������� CRIT Rate                           CDR   �������˺� CRIT DMG\nEM   ��Ԫ�ؾ�ͨ Elemental Mastery        MDEF�������� DEF\nER    ��Ԫ�س���Ч�� Energy Recharge    SS      ������ǿЧ Shield Strength\nCDR ����ȴ���� CD Reduction                 MS    ���������� Max Stamina\nHB   �����Ƽӳ� Healing Bonus               DB     ���˺��ӳ� DMG Bonus\nIHB  �������Ƽӳ� Incoming Healing Bonus\n\nע���˴��������˺��ӳ�ͳ��Ϊһ�����˺��ӳɡ��Ա���㡣\n\n�������ԣ�\nOCLV�� �ҷ���ɫ�ȼ�Our Character Level\nECLV �� �з���ɫ�ȼ�Enemy Character Level\nAIR    ��ƽ������ Average injury rate\nRS     ���˺����� Resistances \n\nSPECIAL��  �����㷨 Special Algorithms", "Genshin Damage Calculator ID-HELP MORE", MB_OK);

	if (put_in <= 1) {
		MessageBox(NULL, "        ȱ��������  �����˳���\n        The lack of parameters! Will Now exit.", "Genshin Damage Calculator ID-HELP", MB_OK);
		return 0;
	}
	int id = -1;
	id = (int)atof(array_in[1]);
	if(id!=1)system("title 100&&mode con cols=90 lines=20&&color f0");
	else system("title 100&&mode con cols=90 lines=30&&color 70");
	printf("||__________________________________________________||\n");
	printf("\n����ID���£�\n\nMHP������ֵ���� Max HP                      \nMATK�������� ATK\nCRR  �������� CRIT Rate                           CDR   �������˺� CRIT DMG\nEM   ��Ԫ�ؾ�ͨ Elemental Mastery        MDEF�������� DEF\nER    ��Ԫ�س���Ч�� Energy Recharge    SS      ������ǿЧ Shield Strength\nCDR ����ȴ���� CD Reduction                 MS    ���������� Max Stamina\nHB   �����Ƽӳ� Healing Bonus               DB     ���˺��ӳ� DMG Bonus\nIHB  �������Ƽӳ� Incoming Healing Bonus\n\nע���˴��������˺��ӳ�ͳ��Ϊһ�����˺��ӳɡ��Ա���㡣\n\n�������ԣ�\nOCLV�� �ҷ���ɫ�ȼ�Our Character Level\nECLV �� �з���ɫ�ȼ�Enemy Character Level\nAIR    ��ƽ������ Average injury rate\nRS     ���˺����� Resistances \n\nSPECIAL��  �����㷨 Special Algorithms");
	if (id == 1) {
		printf(" 1 ������1��\n");
	}
	

	printf("||__________________________________________________||\n");
	ShowWindow(GetConsoleWindow(), SW_RESTORE);
	getchar();
	return 0;
}