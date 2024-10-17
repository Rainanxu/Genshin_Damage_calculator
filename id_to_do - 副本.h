#pragma once
#include<stdio.h>
#include<windows.h>
#include"calculator_word_to_number.h"
double number = 0;


void toid0() {
    MessageBox(NULL, "输入ID如下：\n\nHP   ：生命值上限 Max HP                     ATK：攻击力 ATK\nCR   ：暴击率 CRIT Rate                           HB ：治疗加成 Healing Bonus\nCD   ：暴击伤害 CRIT DMG                      IHB：受治疗加成 Incoming Healing Bonus\nEM  ：元素精通 Elemental Mastery        DEF：防御力 DEF\nER   ：元素充能效率 Energy Recharge    SS  ：护盾强效 Shield Strength\nCDR：冷却缩减 CD Reduction                 MS ：体力上限 Max Stamina\nDB   ：伤害加成 DMG Bonus\n\n注：此处将各种伤害加成统合为一个【伤害加成】以便计算。", "Genshin Damage Calculator ID-HELP ", MB_OK);
    _endthread();
}
void toid00() {
    MessageBox(NULL, "输入ID如下：\n\nHP   ：生命值上限 Max HP                     ATK：攻击力 ATK\nCR   ：暴击率 CRIT Rate                           HB ：治疗加成 Healing Bonus\nCD   ：暴击伤害 CRIT DMG                      IHB：受治疗加成 Incoming Healing Bonus\nEM  ：元素精通 Elemental Mastery        DEF：防御力 DEF\nER   ：元素充能效率 Energy Recharge    SS  ：护盾强效 Shield Strength\nCDR：冷却缩减 CD Reduction                 MS ：体力上限 Max Stamina\nDB   ：伤害加成 DMG Bonus\n\n注：此处将各种伤害加成统合为一个【伤害加成】以便计算。", "Genshin Damage Calculator ID-HELP MORE", MB_OK);
    _endthread();
}
void toid1() {
    MessageBox(NULL, "输入ID如下：\n\nHP   ：生命值上限 Max HP                     ATK：攻击力 ATK\nCR   ：暴击率 CRIT Rate                           HB ：治疗加成 Healing Bonus\nCD   ：暴击伤害 CRIT DMG                      IHB：受治疗加成 Incoming Healing Bonus\nEM  ：元素精通 Elemental Mastery        DEF：防御力 DEF\nER   ：元素充能效率 Energy Recharge    SS  ：护盾强效 Shield Strength\nCDR：冷却缩减 CD Reduction                 MS ：体力上限 Max Stamina\nDB   ：伤害加成 DMG Bonus\n\n注：此处将各种伤害加成统合为一个【伤害加成】以便计算。", "Genshin Damage Calculator ID-HELP", MB_OK);
    _endthread();
}
void toid01() {
    MessageBox(NULL, "输入ID如下：\n\nHP   ：生命值上限 Max HP                     ATK：攻击力 ATK\nCR   ：暴击率 CRIT Rate                           HB ：治疗加成 Healing Bonus\nCD   ：暴击伤害 CRIT DMG                      IHB：受治疗加成 Incoming Healing Bonus\nEM  ：元素精通 Elemental Mastery        DEF：防御力 DEF\nER   ：元素充能效率 Energy Recharge    SS  ：护盾强效 Shield Strength\nCDR：冷却缩减 CD Reduction                 MS ：体力上限 Max Stamina\nDB   ：伤害加成 DMG Bonus\n\n注：此处将各种伤害加成统合为一个【伤害加成】以便计算。", "Genshin Damage Calculator ID-HELP MORE", MB_OK);
    _endthread();
}
int id_do(int char_in[], int char_finded[], double value[], int others[]) {
    int i = -2, ch0 = 0, i0 = 0, i1 = 0;
    char a[100] = { 0 };
    for (;;) {
        i++, i++;
        if (char_finded[i] == 0 && char_finded[i + 1] == 0 && char_finded[i + 2] == 0) {
            return 0;
        }
        switch (char_finded[i])
        {
        case 1:
            //ok
            printf("确定准备完成了吗？\n");
            for (;;) {
                printf("确定输入'y'或'Y'，否则输入'n'或'N'\n请输入：");
                for (;;) {
                    ch0 = scanf_s("%c", &a[i0], 1);
                    if (ch0 == 1) {
                        if (a[i0] == 10)break;
                        else i0++;
                    }
                    else ch0 = getchar();
                }
                for (i0 = 0;;) {
                    if (a[i0] == 0 && a[i0 + 1] == 0 && a[i0 + 2] == 0) {
                        i0 = 0;
                    }
                    else if (a[i0] == 'y' || a[i0] == 'Y')return 1;
                    else if (a[i0] == 'n' || a[i0] == 'N') {
                        printf("取消。\n");
                        return 999;
                    }
                    else i0++;
                }
            }
        case 2:
            //topoint
            return 2;
        case 3:
            //todamage
            return 3;
        case 4:
            //message
            printf("message");
           
            //printf("现有信息如下：\n\n  基础属性\n    生命值上限 Max HP                     %.0f\n    攻击力 ATK                            %.0f\n    防御力 DEF                            %.0f\n    元素精通 Elemental Mastery            %.0f\n    体力上限 Max Stamina                  %.0f\n\n  进阶属性\n    暴击率 CRIT Rate                      %.0f%%\n    暴击伤害 CRIT DMG                     %.0f%%\n    治疗加成 Healing Bonus                %.0f%%\n    受治疗加成 Incoming Healing Bonus     %.0f%%\n    元素充能效率 Energy Recharge          %.0f%%\n    冷却缩减 CD Reduction                 %.0f%%\n    护盾强效 Shield Strength              %.0f%%\n    伤害加成 DMG Bonus                    %.0f%%\n\n请继续：", hp1, atk1, def1, em1, ms1, cr1 * 100, cd1 * 100, hb1 * 100, ihb1 * 100, er1 * 100, cdr1 * 100, ss1 * 100, db1 * 100);

            break;
        case 5:
            //idhelp
            if(others[0] == 0)
                if(others[1]==0)
                    _beginthread(toid0, 0, NULL);
                else
                    _beginthread(toid00, 0, NULL);
            else if(others[0] == 1)
                if (others[1] == 0)
                    _beginthread(toid1, 0, NULL);
                else
                    _beginthread(toid01, 0, NULL);
            break;
        case 6:
            //exit
            ShowWindow(GetConsoleWindow(), SW_HIDE);
            MessageBox(NULL, "这就退出了哦。", "Genshin Damage Calculator EXIT", MB_OK);
            return 6;
        case 7:
            //showmore
            others[1] = 1;
            printf("部分7"); 
            break;
        case 8:
            //showless
            others[1] = 0;
            break;
        case 9:
            MessageBox(NULL, "|----------------------------------------------------------------------------------|\n版本信息:\n\n发布版本1.12.54\n内部测试版本04.34.12\n\n部分理论基础参考《伤害乘区论》3.0。\n鸣谢：妖狐玉藻前(白猫大人)   holiverse   风祝w   原神冒险团 Yamios 黑川智子\n            空荧酒馆 小明明明中观察   核子安妮1   空荧酒馆 鈴   NGA Shallow夢\n            NGA：吾竟南宫遥\n            提瓦特大学：tesiacoil   Shallow梦   holiverse   吾竟南宫遥   梦魇敌酋\n\n制作：XUANLUN XUWU\n|-------------------------------版权所有。侵权必究---------------------------------|", "Genshin Damage Calculator ABOUT", MB_OK);
            break;
        case 10:
            value[0] = be_number(char_in, char_finded[i + 1]);
            printf("信息修改：    HP=%.2f;\n", value[0]);
            break;
        case 11:
            break;
        default:;
        }
    }
}
