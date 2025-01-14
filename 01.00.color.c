#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
/*
简易公式:

伤害=攻击区*倍率区*增伤区*暴击区*反应区*防御区*抗性区

Damage=A区 * M区 * B区 * C区 * E区 * D区 * R区

攻击区= A = Attack

倍率区= M = Damage Multipiler

增伤区= B = Damage Bonus

暴击区= C = Critical Bracket

反应区= E = Elemental Reaction

防御区= D = Defense

抗性区= R = Resistance
*/

//版本：01.20.26


int main()
{
    //输入判定
    int chis, gettims = 1, chok = 0, chexit = 0, chidhelp = 0;
    //字母判定
    char ok = 'A', exit = 'A', idhelp = 'A';


    //功能部件
    int ch0, ch1, getcharb;
    char id = 'A', is = 'A';



    ShowWindow(GetConsoleWindow(), SW_HIDE);

    ch0 = MessageBox(NULL, "        本程序仅为个人兴趣开发，数据仅供参考，请勿过分认真!\n如果您不确定能否平静看待计算结果，可以选择“取消”以退出。", "Genshin Damage Calculator 提示", MB_OKCANCEL);
    if (ch0 == IDCANCEL) return 0;
    ch1 = MessageBox(NULL, "        本程序尚未经过大量运行测试，与您的设备可能存在兼容性问题，如出现运行异常，请谅解。\n        如果担心会对您的设备产生损害，可以选择“取消”以退出", "Genshin Damage Calculator 提示", MB_OKCANCEL);
    if (ch1 == IDCANCEL) return 0;
    MessageBox(NULL, "部分参考信息：\n\n简易公式:\n\n伤害 = 攻击区 * 倍率区 * 增伤区 * 暴击区 * 反应区 * 防御区 * 抗性区;\nDamage = A区 * M区 * B区 * C区 * E区 * D区 * R区;\n攻击区 = A = Attack;\n倍率区 = M = Damage Multipiler;\n增伤区 = B = Damage Bonus;\n暴击区 = C = Critical Bracket;\n反应区 = E = Elemental Reaction;\n防御区 = D = Defense;\n抗性区 = R = Resistance。", "Genshin Damage Calculator", MB_OK);



    ShowWindow(GetConsoleWindow(), SW_RESTORE);
reputin:
    //printf("您可以输入“MESAGE”来查看已有（默认）数值\n");
    printf("您可以在此窗口更改人物数据以使计算结果更准确。\n");
    printf("输入“\033[1;36mMESAGE\033[0m”来查看已有（默认）数值\n");
    printf("要更改人物数据，可以键入属性ID和信息数值，形如“\033[1;35mHP=1000\033[0m”。\n");
    printf("如果需要内容信息输入向导，可以尝试键入“\033[1;32mIDHELP\033[0m”以获得帮助。\n");
    printf("数据输入完成请输入“\033[1;33mOK\033[0m”，输入“\033[1;34mEXIT\033[0m”可以退出。\n\n");
    printf("\033[1;44;35m||||----------------------------------------------------------------------------------------------||||\033[0m\n");
    printf("\033[1;36m请输入数据：\033[0m");
    while (ok != 'K')
    {
        //—————————————————part 1————————————————————//
        while (chok == 0 || chexit == 0 || chidhelp == 0)//|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
        {
            chok = scanf_s("O%c", &ok, 1);
            if (ok != 'K')chok = 0;
            chidhelp = scanf_s("IDHEL%c", &idhelp, 1);
            if (idhelp != 'P') chidhelp = 0;
            chexit = scanf_s("EXI%c", &exit, 1);
            if (exit != 'T') chexit = 0;
            if (chok != 0 || chexit != 0 || chidhelp != 0)break;//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
            if (gettims >= 2) {
                printf("\b\b\b\b\b\b\\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
                gettims--;
            }
            if (chok == 0 || chexit == 0 || chidhelp == 0) {//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
                printf("\033[31m输入失败，请重试：\033[0m");
                getcharb = getchar();
                gettims++;
            }
        }
        //—————————————————part 2————————————————————--//
        for (;;)
        {
            if (gettims >= 2) {
                printf("\b\b\b\b\b\b\\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
                gettims--;
            }
            if (chok != 0 || chexit != 0 || chidhelp != 0) {//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
                printf("\033[1;36m输入成功！请继续：\033[0m");
                getcharb = getchar();
                gettims++;
            }
            //—————————————————CHOSE 2————————————————————--//

            if (exit == 'T') {
                ShowWindow(GetConsoleWindow(), SW_HIDE);
                MessageBox(NULL, "这就退出了哦。", "Genshin Damage Calculator ID-HELP", MB_OK);
                return 0;
            }
            if (idhelp == 'P') {
                MessageBox(NULL, "输入ID如下：\n\nHP   ：生命值上限 Max HP                     ATK：攻击力 ATK\nCR   ：暴击率 CRIT Rate                           HB ：治疗加成 Healing Bonus\nCD   ：暴击伤害 CRIT DMG                      IHB：受治疗加成 Incoming Healing Bonus\nEM  ：元素精通 Elemental Mastery        DEF：防御力 DEF\nER   ：元素充能效率 Energy Recharge    SS  ：护盾强效 Shield Strength\nCDR：冷却缩减 CD Reduction                 MS ：体力上限 Max Stamina\nDB   ：伤害加成 DMG Bonus\n\n注：此处将各种伤害加成统合为一个【伤害加成】以便计算。", "Genshin Damage Calculator ID-HELP", MB_OK);
                idhelp = 'A';
            }
            if (ok == 'K')break;
            chok = scanf_s("O%c", &ok, 1);
            if (ok != 'K')chok = 0;
            chidhelp = scanf_s("IDHEL%c", &idhelp, 1);
            if (idhelp != 'P') chidhelp = 0;
            chexit = scanf_s("EXI%c", &exit, 1);
            if (exit != 'T') chexit = 0;
            if (chok == 0 && chexit == 0 && chidhelp == 0)break;//|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
        }
    }
    printf("\b\b\b\b\b\b\\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
    printf("数据输入完成！    \n");
    printf("\n");
    //printf("a=%d\n", a);
    printf("确认数据正确吗？\n");
    printf("正确输入Y，不正确请输入N。\n");
    chis = scanf_s(" %c", &is, 1);
    if (chis == 0 || is != 'Y' || is != 'N') {
        for (;;) {
            if (is == 'Y' || is == 'N')break;
            printf("输入失败，请重新输入：\n");
            chis = scanf_s(" %c", &is, 1);
            getcharb = getchar();
        }
    }
    if (is == 'Y') {
        ShowWindow(GetConsoleWindow(), SW_HIDE);
        MessageBox(NULL, "别急呀！还没有做完呢！", "Genshin Damage Calculator ABOUT", MB_OK);
        MessageBox(NULL, "这就退出了哦。", "Genshin Damage Calculator ABOUT", MB_OK);
        return 0;
    }
    if (is == 'N') {
        ok = 'A';
        is = 'A';
        system("cls");
        printf("请尝试再次输入。\n\n");
        goto reputin;
    }
}