#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include"autoputin.h"
#include"id_to_do.h"

//lv 4.0.6

double value[100];

int putin[1000], number_now=0, id_of[1000]={ ',','o','k',',','t','o','p','o','i','n','t',',','t','o','d','a','m','a','g','e',',','m','e','s','s','a','g','e',',','i','d','h','e','l','p',',','e','x','i','t',','}, number_finded = 0, finded[100];


int main()
{
    int hello0, hello1;
    int modile[2] = { -1,0 }, modile_old = 0;
    int ch0 = 0, ch1 = 0;

    ShowWindow(GetConsoleWindow(), SW_HIDE);

    hello0 = MessageBox(NULL, "        本程序仅为个人兴趣开发，数据仅供参考，请勿过分认真!\n如果您不确定能否平静看待计算结果，可以选择“取消”以退出。", "Genshin Damage Calculator 提示", MB_OKCANCEL);
    if (hello0 == IDCANCEL) return 0;
    hello1 = MessageBox(NULL, "        本程序尚未经过大量运行测试，与您的设备可能存在兼容性问题，如出现运行异常，请谅解。\n        如果担心会对您的设备产生损害，可以选择“取消”以退出", "Genshin Damage Calculator 提示", MB_OKCANCEL);
    if (hello1 == IDCANCEL) return 0;
    MessageBox(NULL, "部分参考信息：\n\n简易公式:\n\n伤害 = 攻击区 * 倍率区 * 增伤区 * 暴击区 * 反应区 * 防御区 * 抗性区;\nDamage = A区 * M区 * B区 * C区 * E区 * D区 * R区;\n攻击区 = A = Attack;\n倍率区 = M = Damage Multipiler;\n增伤区 = B = Damage Bonus;\n暴击区 = C = Critical Bracket;\n反应区 = E = Elemental Reaction;\n防御区 = D = Defense;\n抗性区 = R = Resistance。", "Genshin Damage Calculator", MB_OK);
    ShowWindow(GetConsoleWindow(), SW_RESTORE);

being:

    if (modile[0] == -1)modile[0] = 0;
    else if (modile[0] == modile_old) {
        ch1 = 1;
        MessageBox(NULL, "已经是此模式了！", "Genshin Damage Calculator Welcome", MB_OK);
    }
    else if (modile[0] == 0) {
        ch1 = 0;
        if (modile_old != 0) {
            modile_old = 0;
            ShowWindow(GetConsoleWindow(), SW_HIDE);
            MessageBox(NULL, "词条计算部分", "Genshin Damage Calculator Welcome", MB_OK);
            system("cls");
            ShowWindow(GetConsoleWindow(), SW_RESTORE);
        }
    }
    else {
        ch1 = 0;
        if (modile_old != 1) {
            modile_old = 1;
            ShowWindow(GetConsoleWindow(), SW_HIDE);
            MessageBox(NULL, "伤害计算部分", "Genshin Damage Calculator Welcome", MB_OK);
            system("cls");
            ShowWindow(GetConsoleWindow(), SW_RESTORE);
        }
    }
    if (ch1 == 0) {
        printf("||||-----------------------------------------------------------------------------------------------||||\n");
        if(modile[0] == 0)
            printf("此部分为词条计算器，要前往伤害计算器请输入“TODAMAGE”。\n\n");
        else 
            printf("此部分为伤害计算器，要前往词条计算器请输入“TOPOINT”。\n\n");
        printf("您可以在此窗口更改人物数据以使计算结果更准确。\n");
        printf("输入“TOMESSAGE”来查看已有（默认）数值\n");
        printf("要更改人物数据，可以键入属性ID和信息数值，形如“HP=1000”。\n");
        printf("如果需要内容信息输入向导，可以尝试键入“TOIDHELP”以获得帮助。\n");
        printf("数据输入完成请输入“OK”，输入“TOEXIT”可以退出。\n\n");
        printf("||||- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -||||\n");
        printf("请输入数据：");
    }
    for (;;) {
        number_finded = autoputin(putin, 0, id_of, 1, finded);
        ch0 = id_do(putin, finded, value,modile);
        printf("输入成功%d个。\n请输入：", number_finded);
        if (ch0 == 1)goto damage;
        else if (ch0 == 2 || ch0 == 3) {
            modile[0] = ch0 - 2;
            goto being;
        }
        else if (ch0 == 6)return 0;
        else if (ch0 == 999) {}
    }
    
damage:
    system("cls");
    printf("计算部分");
    return 0;
}