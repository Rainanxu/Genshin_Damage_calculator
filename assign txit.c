#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
//#include<thread>
//#include<pthread.h>
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

//版本：01.30.26

void toid1() {//形参void * 不可省略，否则编译出错
    MessageBox(NULL, "输入ID如下：\n\nHP   ：生命值上限 Max HP                     ATK：攻击力 ATK\nCR   ：暴击率 CRIT Rate                           HB ：治疗加成 Healing Bonus\nCD   ：暴击伤害 CRIT DMG                      IHB：受治疗加成 Incoming Healing Bonus\nEM  ：元素精通 Elemental Mastery        DEF：防御力 DEF\nER   ：元素充能效率 Energy Recharge    SS  ：护盾强效 Shield Strength\nCDR：冷却缩减 CD Reduction                 MS ：体力上限 Max Stamina\nDB   ：伤害加成 DMG Bonus\n\n注：此处将各种伤害加成统合为一个【伤害加成】以便计算。", "Genshin Damage Calculator ID-HELP", MB_OK);
    _endthread();
}


int main()
{
    //输入判定
    int chis, gettims = 1, chok = 0, chto1 = 0, chexit = 0, chidhelp = 0, chid1 = 0, chabout = 0, chmessage = 0, chin1 = 0, chin2 = 0, chin[13] = { 0 };
    //字母判定
    char ok = 'A', exit = 'A', idhelp = 'A', about = 'A', message = 'A', chto = 'A';
    //假意接收
    char hole1 = 'A';
    int hole2 = 0;

    //功能部件
    int ch0, ch1, getcharb;
    char id = 'A', is = 'A';


    //词条
    float hp1 = 10000, atk1 = 250, cr1 = 0.05, cd1 = 0.50, hb1 = 0.00, ihb1 = 0.00, em1 = 0, er1 = 1.00, def1 = 700, ss1 = 0.00, cdr1 = 0.00, ms1 = 250, db1 = 0.00;
    float hp2 = 10000, atk2 = 250, cr2 = 0.05, cd2 = 0.50, hb2 = 0.00, ihb2 = 0.00, em2 = 0, er2 = 1.00, def2 = 700, ss2 = 0.00, cdr2 = 0.00, ms2 = 250, db2 = 0.00;

    
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
    printf("输入“TOMESSAGE”来查看已有（默认）数值\n");
    printf("要更改人物数据，可以键入属性ID和信息数值，形如“HP=1000\033”。\n");
    printf("如果需要内容信息输入向导，可以尝试键入“TOIDHELP”以获得帮助。\n");
    printf("数据输入完成请输入“OK”，输入“TOEXIT”可以退出。\n\n");
    printf("||||----------------------------------------------------------------------------------------------||||\n");
    printf("请输入数据：");
    while (ok != 'K')
    {
        //—————————————————part 1————————————————————//
        while (chok == 0 || chexit == 0 || chidhelp == 0 || chabout == 0 || chmessage == 0 || chin1 == 0)//|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
        {
            chok = scanf_s("O%c", &ok, 1);
            if (ok != 'K')chok = 0;

            chto = 'A';
            scanf_s("T%c", &chto, 1);
            if (chto == 'O')
            {
                chidhelp = scanf_s("IDHEL%c", &idhelp, 1);
                if (idhelp != 'P') chidhelp = 0;

                chexit = scanf_s("EXI%c", &exit, 1);
                if (exit != 'T') chexit = 0;
                chmessage = scanf_s("MESSAG%c", &message, 1);
                if (message != 'E')chmessage = 0;
                chabout = scanf_s("ABOU%c", &about, 1);
                if (about != 'T')chabout = 0;
            }
            for (;;) {//------------------------chin1-----------------//
                if (chin2 == 0)chin1 = 0;
                chin[0] = scanf_s("ATK=%f", &atk1);
                scanf_s("C%c", &hole1, 1);
                if (hole1 == 'R')
                chin[3] = scanf_s("=%f", &cr1);
                if (hole1 == 'D') {
                    chin[4] = scanf_s("=%f", &cd1);
                    chin[5] = scanf_s("R=%f", &cdr1);
                }
                scanf_s("D%c", &hole1, 1);
                if (hole1 == 'B')
                chin[6] = scanf_s("=%f", &db1);
                if (hole1 == 'E')
                chin[7] = scanf_s("F=%f", &def1);
                scanf_s("E%d", &hole2);
                chin[8] = scanf_s("M=%f", &em1);
                chin[9] = scanf_s("R=%f", &er1);
                scanf_s("H%d", &hole2);
                chin[1] = scanf_s("B=%f", &hb1);
                chin[2] = scanf_s("P=%f", &hp1);
                chin[10] = scanf_s("IHB=%f", &ihb1);
                chin[11] = scanf_s("MS=%f", &ms1);
                chin[12] = scanf_s("SS=%f", &ss1);
                if (chin1 == 0) {
                    if (chin[0] != 0 || chin[1] != 0 || chin[2] != 0 || chin[3] != 0 || chin[4] != 0 || chin[5] != 0 || chin[6] != 0 || chin[7] != 0 || chin[8] != 0 || chin[9] != 0 || chin[10] != 0 || chin[11] != 0 || chin[12] != 0)
                    {
                        chin1 = 1;
                        chin2 = 1;
                    }
                }
                if (chin[0] == 0 && chin[1] == 0 && chin[2] == 0 && chin[3] == 0 && chin[4] == 0 && chin[5] == 0 && chin[6] == 0 && chin[7] == 0 && chin[8] == 0 && chin[9] == 0 && chin[10] == 0 && chin[11] == 0 && chin[12] == 0)
                {
                    chin2 = 0;
                    break;
                }
            }
            if (chok != 0 || chexit != 0 || chidhelp != 0 || chabout != 0 || chmessage != 0 || chin1 != 0)break;//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
            if (gettims >= 2) {
                printf("\r");
                gettims--;
            }
            if (chok == 0 || chexit == 0 || chidhelp == 0 || chabout == 0 || chmessage == 0 || chin1 == 0) {//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
                printf("输入失败，请重试：");
                getcharb = getchar();
                gettims++;
            }
        }
        //—————————————————part 2————————————————————--//
        for (;;)
        {
            if (gettims >= 2) {
                printf("\r");
                gettims--;
            }
            if (chok != 0 || chexit != 0 || chidhelp != 0 || chabout != 0 || chmessage != 0 || chin1 != 0) {//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
                printf("输入成功！请继续：");
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
                idhelp = 'A';
                _beginthread(toid1, 0, NULL);
            }
            if (about == 'T') {
                MessageBox(NULL, "|----------------------------------------------------------------------------------|\n版本信息:\n\n发布版本1.12.54\n内部测试版本20.34.12\n\n部分理论基础参考《伤害乘区论》3.0。\n鸣谢：妖狐玉藻前(白猫大人)   holiverse   风祝w   原神冒险团 Yamios 黑川智子\n            空荧酒馆 小明明明中观察   核子安妮1   空荧酒馆 鈴   NGA Shallow夢\n            NGA：吾竟南宫遥\n            提瓦特大学：tesiacoil   Shallow梦   holiverse   吾竟南宫遥   梦魇敌酋\n\n制作：XUANLUN XUWU\n|-------------------------------版权所有。侵权必究---------------------------------|", "Genshin Damage Calculator ABOUT", MB_OK);
                about = 'A';
            }
            if (message == 'E') {
                printf("\b\b\b\b\b\b\b\b        \n\n现有信息如下：\n\n基础属性\n生命值上限 Max HP                     %.0f\n攻击力 ATK                            %.0f\n防御力 DEF                            %.0f\n元素精通 Elemental Mastery            %.0f\n体力上限 Max Stamina                  %.0f\n\n进阶属性\n暴击率 CRIT Rate                      %.0f%%\n暴击伤害 CRIT DMG                     %.0f%%\n治疗加成 Healing Bonus                %.0f%%\n受治疗加成 Incoming Healing Bonus     %.0f%%\n元素充能效率 Energy Recharge          %.0f%%\n冷却缩减 CD Reduction                 %.0f%%\n护盾强效 Shield Strength              %.0f%%\n伤害加成 DMG Bonus                    %.0f%%\n\n请继续：",hp1,atk1,def1,em1,ms1,cr1*100,cd1*100,hb1*100,ihb1*100,er1*100,cdr1*100,ss1*100,db1*100);
                message = 'A';
            }
            if (ok == 'K')break;
            chok = scanf_s("O%c", &ok, 1);
            if (ok != 'K')chok = 0;

            chto = 'A';
            chto1=scanf_s("T%c", &chto, 1);
            if (chto1 == 0) { chexit = 0, chidhelp = 0, chid1 = 0, chabout = 0, chmessage = 0; }
            if (chto == 'O')
            {
                chidhelp = scanf_s("IDHEL%c", &idhelp, 1);
                if (idhelp != 'P') chidhelp = 0;


                chexit = scanf_s("EXI%c", &exit, 1);
                if (exit != 'T') chexit = 0;

                chmessage = scanf_s("MESSAG%c", &message, 1);
                if (message != 'E')chmessage = 0;

                chabout = scanf_s("ABOU%c", &about, 1);
                if (about != 'T')chabout = 0;
            }

            for (;;) {//----------------------------chin1-----------------------//
                if (chin2 == 0)chin1 = 0;
                chin[0] = scanf_s("ATK=%f", &atk1);
                scanf_s("C%c", &hole1, 1);
                if (hole1 == 'R')
                    chin[3] = scanf_s("=%f", &cr1);
                if (hole1 == 'D') {
                    chin[4] = scanf_s("=%f", &cd1);
                    chin[5] = scanf_s("R=%f", &cdr1);
                }
                scanf_s("D%c", &hole1, 1);
                if (hole1 == 'B')
                    chin[6] = scanf_s("=%f", &db1);
                if (hole1 == 'E')
                    chin[7] = scanf_s("F=%f", &def1);
                scanf_s("E%d", &hole2);
                chin[8] = scanf_s("M=%f", &em1);
                chin[9] = scanf_s("R=%f", &er1);
                scanf_s("H%d", &hole2);
                chin[1] = scanf_s("B=%f", &hb1);
                chin[2] = scanf_s("P=%f", &hp1);
                chin[10] = scanf_s("IHB=%f", &ihb1);
                chin[11] = scanf_s("MS=%f", &ms1);
                chin[12] = scanf_s("SS=%f", &ss1);
                if (chin1 == 0) {
                    if (chin[0] != 0 || chin[1] != 0 || chin[2] != 0 || chin[3] != 0 || chin[4] != 0 || chin[5] != 0 || chin[6] != 0 || chin[7] != 0 || chin[8] != 0 || chin[9] != 0 || chin[10] != 0 || chin[11] != 0 || chin[12] != 0)
                    {
                        chin1 = 1;
                        chin2 = 1;
                    }
                }
                if (chin[0] == 0 && chin[1] == 0 && chin[2] == 0 && chin[3] == 0 && chin[4] == 0 && chin[5] == 0 && chin[6] == 0 && chin[7] == 0 && chin[8] == 0 && chin[9] == 0 && chin[10] == 0 && chin[11] == 0 && chin[12] == 0)
                {
                    chin2 = 0;
                    break;
                }
            }
            if (chok == 0 && chexit == 0 && chidhelp == 0 && chabout == 0 && chmessage == 0 && chin1 == 0)break;//|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
        }
    }
    printf("\r");
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