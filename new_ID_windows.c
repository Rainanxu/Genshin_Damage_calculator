#include<stdio.h>
#include"new_cmd_windows_for_message.h"
#include<windows.h>


int main(int put_in, char* array_in[]) {
	ShowWindow(GetConsoleWindow(), SW_HIDE);
	CONSOLE_CURSOR_INFO cursor_info = { 1, 0 };
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
	MessageBox(NULL, "输入ID如下：\n\nMHP：生命值上限 Max HP                      MATK：攻击力 ATK\nCRR  ：暴击率 CRIT Rate                           CDR   ：暴击伤害 CRIT DMG\nEM   ：元素精通 Elemental Mastery        MDEF：防御力 DEF\nER    ：元素充能效率 Energy Recharge    SS      ：护盾强效 Shield Strength\nCDR ：冷却缩减 CD Reduction                 MS    ：体力上限 Max Stamina\nHB   ：治疗加成 Healing Bonus               DB     ：伤害加成 DMG Bonus\nIHB  ：受治疗加成 Incoming Healing Bonus\n\n注：此处将各种伤害加成统合为一个【伤害加成】以便计算。\n\n附加属性：\nOCLV： 我方角色等级Our Character Level\nECLV ： 敌方角色等级Enemy Character Level\nAIR    ：平均倍率 Average injury rate\nRS     ：伤害抗性 Resistances \n\nSPECIAL：  特殊算法 Special Algorithms", "Genshin Damage Calculator ID-HELP MORE", MB_OK);

	if (put_in <= 1) {
		MessageBox(NULL, "        缺乏参数！  即将退出。\n        The lack of parameters! Will Now exit.", "Genshin Damage Calculator ID-HELP", MB_OK);
		return 0;
	}
	int id = -1;
	id = (int)atof(array_in[1]);
	if(id!=1)system("title 100&&mode con cols=90 lines=20&&color f0");
	else system("title 100&&mode con cols=90 lines=30&&color 70");
	printf("||__________________________________________________||\n");
	printf("\n输入ID如下：\n\nMHP：生命值上限 Max HP                      \nMATK：攻击力 ATK\nCRR  ：暴击率 CRIT Rate                           CDR   ：暴击伤害 CRIT DMG\nEM   ：元素精通 Elemental Mastery        MDEF：防御力 DEF\nER    ：元素充能效率 Energy Recharge    SS      ：护盾强效 Shield Strength\nCDR ：冷却缩减 CD Reduction                 MS    ：体力上限 Max Stamina\nHB   ：治疗加成 Healing Bonus               DB     ：伤害加成 DMG Bonus\nIHB  ：受治疗加成 Incoming Healing Bonus\n\n注：此处将各种伤害加成统合为一个【伤害加成】以便计算。\n\n附加属性：\nOCLV： 我方角色等级Our Character Level\nECLV ： 敌方角色等级Enemy Character Level\nAIR    ：平均倍率 Average injury rate\nRS     ：伤害抗性 Resistances \n\nSPECIAL：  特殊算法 Special Algorithms");
	if (id == 1) {
		printf(" 1 传入了1！\n");
	}
	

	printf("||__________________________________________________||\n");
	ShowWindow(GetConsoleWindow(), SW_RESTORE);
	getchar();
	return 0;
}