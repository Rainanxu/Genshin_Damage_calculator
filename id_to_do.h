#pragma once
#include<stdio.h>
#include<windows.h>
#include"calculator_word_to_number.h"
#include"show_message.h"
double number = 0;


void toid0() {
    MessageBox(NULL, "输入ID如下：\n\nMHP：生命值上限 Max HP                      MATK：攻击力 ATK\nCRR  ：暴击率 CRIT Rate                           CDR   ：暴击伤害 CRIT DMG\nEM   ：元素精通 Elemental Mastery        MDEF：防御力 DEF\nER    ：元素充能效率 Energy Recharge    SS      ：护盾强效 Shield Strength\nCDR ：冷却缩减 CD Reduction                 MS    ：体力上限 Max Stamina\nHB   ：治疗加成 Healing Bonus               DB     ：伤害加成 DMG Bonus\nIHB  ：受治疗加成 Incoming Healing Bonus\n\n注：此处将各种伤害加成统合为一个【伤害加成】以便计算。", "Genshin Damage Calculator ID-HELP", MB_OK);
    //MessageBox(NULL, "输入ID如下：\n\nMHP：生命值上限 Max HP                      MATK：攻击力 ATK\nCRR  ：暴击率 CRIT Rate                           CDR   ：暴击伤害 CRIT DMG\nEM   ：元素精通 Elemental Mastery        MDEF：防御力 DEF\nER    ：元素充能效率 Energy Recharge    SS      ：护盾强效 Shield Strength\nCDR ：冷却缩减 CD Reduction                 MS    ：体力上限 Max Stamina\nHB   ：治疗加成 Healing Bonus               DB     ：伤害加成 DMG Bonus\nIHB  ：受治疗加成 Incoming Healing Bonus\n\n注：此处将各种伤害加成统合为一个【伤害加成】以便计算。", "Genshin Damage Calculator ID-HELP ", MB_OK);
    _endthread();
}
void toid00() {
    MessageBox(NULL, "输入ID如下：\n\nMHP：生命值上限 Max HP                      MATK：攻击力 ATK\nCRR  ：暴击率 CRIT Rate                           CDR   ：暴击伤害 CRIT DMG\nEM   ：元素精通 Elemental Mastery        MDEF：防御力 DEF\nER    ：元素充能效率 Energy Recharge    SS      ：护盾强效 Shield Strength\nCDR ：冷却缩减 CD Reduction                 MS    ：体力上限 Max Stamina\nHB   ：治疗加成 Healing Bonus               DB     ：伤害加成 DMG Bonus\nIHB  ：受治疗加成 Incoming Healing Bonus\n\n注：此处将各种伤害加成统合为一个【伤害加成】以便计算。\n\n附加属性：\nOCLV： 我方角色等级Our Character Level\nECLV ： 敌方角色等级Enemy Character Level\nAIR    ：平均倍率 Average injury rate      NIR    ：普通攻击倍率 NormalAIR injury rate\nCIR    ：重击倍率 Average injury rate      FIR     ：下落攻击倍率 NormalAIR injury rate\nSIR    ：元素战技倍率 Average injury rate\nPIR    ：元素爆发倍率 NormalAIR injury rate\nRS     ：伤害抗性 Resistances \n\nSPECIAL：  特殊算法 Special Algorithms", "Genshin Damage Calculator ID-HELP MORE", MB_OK);
    //MessageBox(NULL, "输入ID如下：\n\nMHP：生命值上限 Max HP                      MATK：攻击力 ATK\nCRR  ：暴击率 CRIT Rate                           CDR   ：暴击伤害 CRIT DMG\nEM   ：元素精通 Elemental Mastery        MDEF：防御力 DEF\nER    ：元素充能效率 Energy Recharge    SS      ：护盾强效 Shield Strength\nCDR ：冷却缩减 CD Reduction                 MS    ：体力上限 Max Stamina\nHB   ：治疗加成 Healing Bonus               DB     ：伤害加成 DMG Bonus\nIHB  ：受治疗加成 Incoming Healing Bonus\nMDMG：平均倍率      RR  ：抗性 \n\n注：此处将各种伤害加成统合为一个【伤害加成】以便计算。", "Genshin Damage Calculator ID-HELP MORE", MB_OK);
    _endthread();
}
void toid1() {
    MessageBox(NULL, "输入ID如下：\n\nBHP ：基础生命值 Bass HP                      BATK：基础攻击力Bass ATK\nPHP ：百分比生命值 Per HP                    PATK：百分比攻击力Per ATK\nEHP ：额外生命值 Extra HP                     EATK：额外攻击力Extra ATK\nCRR  ：暴击率 CRIT Rate                           CDR   ：暴击伤害 CRIT DMG\nEM   ：元素精通 Elemental Mastery        SS      ：护盾强效 Shield Strength\nER    ：元素充能效率 Energy Recharge    BDEF：基础防御力Bass DEF\nPDEF：百分比防御力 Per DEF                    EDEF：额外防御力Extra DEF\nCDR ：冷却缩减 CD Reduction                 MS    ：体力上限 Max Stamina\nHB   ：治疗加成 Healing Bonus               DB     ：伤害加成 DMG Bonus\nIHB  ：受治疗加成 Incoming Healing Bonus\n\n注：此处将各种伤害加成统合为一个【伤害加成】以便计算。", "Genshin Damage Calculator ID-HELP", MB_OK);
    _endthread();
}
void toid01() {
    MessageBox(NULL, "输入ID如下：\n\nBHP ：基础生命值 Bass HP                      BATK：基础攻击力Bass ATK\nPHP ：百分比生命值 Per HP                    PATK：百分比攻击力Per ATK\nEHP ：额外生命值 Extra HP                     EATK：额外攻击力Extra ATK\nCRR  ：暴击率 CRIT Rate                           CDR   ：暴击伤害 CRIT DMG\nEM   ：元素精通 Elemental Mastery        SS      ：护盾强效 Shield Strength\nER    ：元素充能效率 Energy Recharge    BDEF：基础防御力Bass DEF\nPDEF：百分比防御力 Per DEF                    EDEF：额外防御力Extra DEF\nCDR ：冷却缩减 CD Reduction                 MS    ：体力上限 Max Stamina\nHB   ：治疗加成 Healing Bonus               DB     ：伤害加成 DMG Bonus\nIHB  ：受治疗加成 Incoming Healing Bonus\n\n注：此处将各种伤害加成统合为一个【伤害加成】以便计算。\n附加属性：\nOCLV： 我方角色等级Our Character Level\nECLV ： 敌方角色等级Enemy Character Level\nAIR    ：平均倍率 Average injury rate      NIR    ：普通攻击倍率 NormalAIR injury rate\nCIR    ：重击倍率 Average injury rate      FIR     ：下落攻击倍率 NormalAIR injury rate\nSIR    ：元素战技倍率 Average injury rate\nPIR    ：元素爆发倍率 NormalAIR injury rate\nRS     ：伤害抗性 Resistances \n\nSPECIAL：  特殊算法 Special Algorithms", "Genshin Damage Calculator ID-HELP MORE", MB_OK);
    //system("start cmd /k 2.exe 1");
    _endthread();
}
void more_id(int number) {
    
}
/*
*char_in         a arr will be geted valuee like number to use;
char_finded     a arr seved the number of coled and it`s where;
value           a arr will be seved the value from char_in;
others          a arr like it`s name all of the others.
*/
int id_do(int char_in[], int char_from[], int char_finded[], double value[], int others[]) {
    int i = -2, ch0 = 0, i0 = 0, i1 = 0;
    char a[100] = { 0 }, id[100] = { 0 };
    for (;;) {
        i++, i++;
        if (char_finded[i] == 0 && char_finded[i + 1] == 0 && char_finded[i + 2] == 0) {
            return 0;
        }
        if (char_finded[i] - 10 >= 0) {
            printf("处理中……");
            value[char_finded[i] - 10] = be_number(char_in, char_finded[i + 1]);
            for (int i_from0=0,i_from1=0,copy_0=-1;;) {
                if (char_from[i_from0] == 44)i_from1++;
                if (char_finded[i] < i_from1)break;
                if (char_finded[i] == i_from1) {
                    for (;;) {
                        i_from0++, copy_0++;
                        if (char_from[i_from0] == 61||char_from[i_from0]==44||copy_0>=10)break;
                        id[copy_0] = (char)char_from[i_from0] - 32;
                    }
                    break;
                }
                else i_from0++;
            }
            if(10<=char_finded[i]&&char_finded[i]<15)
                printf("\r信息修改：    %s=%.0f;\n", id, value[char_finded[i] - 10]);
            else
                printf("\r信息修改：    %s=%.2f%%;\n", id, 100*value[char_finded[i] - 10]);
        }
        else
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
            message(others,char_from,char_finded,value);
            //printf("message");
           
            //printf("现有信息如下：\n\n  基础属性\n    生命值上限 Max HP                     %.0f\n    攻击力 ATK                            %.0f\n    防御力 DEF                            %.0f\n    元素精通 Elemental Mastery            %.0f\n    体力上限 Max Stamina                  %.0f\n\n  进阶属性\n    暴击率 CRIT Rate                      %.0f%%\n    暴击伤害 CRIT DMG                     %.0f%%\n    治疗加成 Healing Bonus                %.0f%%\n    受治疗加成 Incoming Healing Bonus     %.0f%%\n    元素充能效率 Energy Recharge          %.0f%%\n    冷却缩减 CD Reduction                 %.0f%%\n    护盾强效 Shield Strength              %.0f%%\n    伤害加成 DMG Bonus                    %.0f%%\n\n请继续：", hp1, atk1, def1, em1, ms1, cr1 * 100, cd1 * 100, hb1 * 100, ihb1 * 100, er1 * 100, cdr1 * 100, ss1 * 100, db1 * 100);

            break;
        case 5:
            //idhelp
            if (others[0] == 0) {
                if (others[1] == 0)
                    _beginthread(toid0, 0, NULL);
                else
                    _beginthread(toid00, 0, NULL);
            }
            else if (others[0] == 1) {
                if (others[1] == 0)
                    _beginthread(toid1, 0, NULL);
                else
                    _beginthread(toid01, 0, NULL);
            }
            break;
        case 6:
            //exit
            ShowWindow(GetConsoleWindow(), SW_HIDE);
            MessageBox(NULL, "这就退出了哦。", "Genshin Damage Calculator EXIT", MB_OK);
            return 6;
        case 7:
            //showmore
            if (others[1] != 1) {
                others[1] = 1;
                MessageBox(NULL, "显示更多信息。", "Genshin Damage Calculator Model", MB_OK);
            }
            else printf("已经是此模式。");
            break;
        case 8:
            //showless
            if (others[1] != 0) {
                MessageBox(NULL, "显示较少的信息。", "Genshin Damage Calculator Model", MB_OK);
                others[1] = 0;
            }
            else printf("已经是此模式。");
            break;
        case 9:
            //about
            MessageBox(NULL, "|----------------------------------------------------------------------------------|\n版本信息:\n\n发布版本1.12.54\n内部测试版本04.34.12\n\n部分理论基础参考《伤害乘区论》3.0。\n\n鸣谢：妖狐玉藻前(白猫大人)   holiverse   风祝w   原神冒险团 Yamios 黑川智子\n            空荧酒馆 小明明明中观察   核子安妮1   空荧酒馆 鈴   NGA Shallow夢\n            NGA：吾竟南宫遥\n            提瓦特大学：tesiacoil   Shallow梦   holiverse   吾竟南宫遥   梦魇敌酋\n\n制作：XUANLUN XUWU\n|-------------------------------版权所有。侵权必究---------------------------------|", "Genshin Damage Calculator ABOUT", MB_OK);
            break;

        case 10:
            //hp
            printf("信息修改：    HP=%.2f;\n", value[0]);
            break;
        case 11:
            //mhp
            printf("信息修改：    EMHP=%.0f;\n", value[1]);
            break;
        case 12:
            //bhp
            printf("信息修改：    BHP=%.0f;\n", value[2]);
            break;
        case 13:
            //php
            printf("信息修改：    PHP=%.2f%%;\n", value[3]*100);
            break;
        case 14:
            //ehp
            printf("信息修改：    EHP=%.0f;\n", value[4]);
            break;
        case 15:
            //atk
            printf("信息修改：    HP=%.2f;\n", value[5]);
            break;
        case 16:
            //matk
            printf("信息修改：    MATK=%.0f;\n", value[6]);
            break;
        case 17:
            //batk
            printf("信息修改：    BATK=%.0f;\n", value[7]);
            break;
        case 18:
            //patk
            printf("信息修改：    PATK=%.2f%%;\n", value[8]*100);
            break;
        case 19:
            //eatk
            printf("信息修改：    EATK=%.0f;\n", value[9]);
            break;
        case 20:
            //def
            printf("信息修改：    DEF=%.0f;\n", value[10]);
            break;
        case 21:
            //mdef
            printf("信息修改：    MDEF=%.0f;\n", value[11]);
            break;
        case 22:
            //bdef
            printf("信息修改：    BDEF=%.0f;\n", value[12]);
            break;
        case 23:
            //pdef
            printf("信息修改：    PDEF=%.2f%%;\n", value[13]*100);
            break;
        case 24:
            //edef
            printf("信息修改：    EDEF=%.0f;\n", value[14]);
            break;
        case 25:
            //ss
            printf("信息修改：    SS=%.2f%%;\n", value[15]*100);
            break;
        case 26:
            //crr
            printf("信息修改：    CRR=%.2f%%;\n", value[16]*100);
            break;
        case 27:
            //crd
            printf("信息修改：    CRD=%.2f%%;\n", value[17]*100);
            break;
        case 28:
            //em
            printf("信息修改：    EM=%.0f;\n", value[18]);
            break;
        case 29:
            //er
            printf("信息修改：    ER=%.2f%%;\n", value[19]*100);
            break;
        case 30:
            //hb
            printf("信息修改：    HB=%.2f%%;\n", value[20]*100);
            break;
        case 31:
            //ihb
            printf("信息修改：    IHB=%.2f%%;\n", value[21]*100);
            break;
        case 32:
            //cd
            printf("信息修改：    CD=%.2f%%;\n", value[22]*100);
            break;
        case 33:
            //ms
            printf("信息修改：    MS=%.0f;\n", value[23]);
            break;
        case 34:
            //bd
            printf("信息修改：    BD=%.2f%%;\n", value[24]*100);
            break;
        case 35:
            //mdmg
            printf("信息修改：    MDMG=%.2f%%;\n", value[25]*100);
            break;
        case 36:
            //ndmg
            printf("信息修改：    NDMG=%.2f%%;\n", value[26]*100);
            break;
        case 37:
            //cdmg
            printf("信息修改：    CDMG=%.2f%%;\n", value[27]*100);
            break;
        case 38:
            //fdmg
            printf("信息修改：    FDMG=%.2f%%;\n", value[28]*100);
            break;
        case 39:
            //sdmg
            printf("信息修改：    SDMG=%.2f%%;\n", value[29]*100);
            break;
        case 40:
            //pdmg
            printf("信息修改：    PDMG=%.2f%%;\n", value[30]*100);
            break;
        case 41:
            //rs
            printf("信息修改：    RS=%.2f%%;\n", value[31]*100);
            break;
        case 42:
            //oclv
            printf("信息修改：    Our Character Level=%.0f;\n", value[32]);
            break;
        case 43:
            //eclv
            printf("信息修改：    Enemy Character Level=%.0f;\n", value[33]);
            break;
        case 44:
            //SPEAL
            printf("信息修改：    EHP=%.0f;\n", value[34]*100);
            break;
        case 45:
            //ELEMENT
            printf("信息修改：    HP=%.2f;\n", value[35]*100);
            break;
            //------------------------------------------------------------------------------------------------------\\||
        case 46:
            //matk
            printf("信息修改：    MATK=%.0f;\n", value[36]*100);
            break;
        case 47:
            //batk
            printf("信息修改：    BATK=%.0f;\n", value[37]*100);
            break;
        case 48:
            //patk
            printf("信息修改：    PATK=%.2f%%;\n", value[38] * 100);
            break;
        case 49:
            //eatk
            printf("信息修改：    EATK=%.0f;\n", value[39]*100);
            break;
        case 50:
            break;
        default:;
        }
    }
}
int id_do_old(int char_in[], int char_finded[], double value[], int others[]) {
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
            message_old(others, value);
            //printf("message");

            //printf("现有信息如下：\n\n  基础属性\n    生命值上限 Max HP                     %.0f\n    攻击力 ATK                            %.0f\n    防御力 DEF                            %.0f\n    元素精通 Elemental Mastery            %.0f\n    体力上限 Max Stamina                  %.0f\n\n  进阶属性\n    暴击率 CRIT Rate                      %.0f%%\n    暴击伤害 CRIT DMG                     %.0f%%\n    治疗加成 Healing Bonus                %.0f%%\n    受治疗加成 Incoming Healing Bonus     %.0f%%\n    元素充能效率 Energy Recharge          %.0f%%\n    冷却缩减 CD Reduction                 %.0f%%\n    护盾强效 Shield Strength              %.0f%%\n    伤害加成 DMG Bonus                    %.0f%%\n\n请继续：", hp1, atk1, def1, em1, ms1, cr1 * 100, cd1 * 100, hb1 * 100, ihb1 * 100, er1 * 100, cdr1 * 100, ss1 * 100, db1 * 100);

            break;
        case 5:
            //idhelp
            if (others[0] == 0) {
                if (others[1] == 0)
                    _beginthread(toid0, 0, NULL);
                else
                    _beginthread(toid00, 0, NULL);
            }
            else if (others[0] == 1) {
                if (others[1] == 0)
                    _beginthread(toid1, 0, NULL);
                else
                    _beginthread(toid01, 0, NULL);
            }
            break;
        case 6:
            //exit
            ShowWindow(GetConsoleWindow(), SW_HIDE);
            MessageBox(NULL, "这就退出了哦。", "Genshin Damage Calculator EXIT", MB_OK);
            return 6;
        case 7:
            //showmore
            if (others[1] != 1) {
                others[1] = 1;
                MessageBox(NULL, "显示更多信息。", "Genshin Damage Calculator Model", MB_OK);
            }
            else printf("已经是此模式。");
            break;
        case 8:
            //showless
            if (others[1] != 0) {
                MessageBox(NULL, "显示较少的信息。", "Genshin Damage Calculator Model", MB_OK);
                others[1] = 0;
            }
            else printf("已经是此模式。");
            break;
        case 9:
            //about
            MessageBox(NULL, "|----------------------------------------------------------------------------------|\n版本信息:\n\n发布版本1.12.54\n内部测试版本04.34.12\n\n部分理论基础参考《伤害乘区论》3.0。\n\n鸣谢：妖狐玉藻前(白猫大人)   holiverse   风祝w   原神冒险团 Yamios 黑川智子\n            空荧酒馆 小明明明中观察   核子安妮1   空荧酒馆 鈴   NGA Shallow夢\n            NGA：吾竟南宫遥\n            提瓦特大学：tesiacoil   Shallow梦   holiverse   吾竟南宫遥   梦魇敌酋\n\n制作：XUANLUN XUWU\n|-------------------------------版权所有。侵权必究---------------------------------|", "Genshin Damage Calculator ABOUT", MB_OK);
            break;
        case 10:
            //hp
            value[0] = be_number(char_in, char_finded[i + 1]);
            printf("信息修改：    HP=%.2f;\n", value[0]);
            break;
        case 11:
            //mhp
            value[1] = be_number(char_in, char_finded[i + 1]);
            printf("信息修改：    MHP=%.0f;\n", value[1]);
            break;
        case 12:
            //bhp
            value[2] = be_number(char_in, char_finded[i + 1]);
            printf("信息修改：    BHP=%.0f;\n", value[2]);
            break;
        case 13:
            //php
            value[3] = be_number(char_in, char_finded[i + 1]);
            printf("信息修改：    PHP=%.2f%%;\n", value[3] * 100);
            break;
        case 14:
            //ehp
            value[4] = be_number(char_in, char_finded[i + 1]);
            printf("信息修改：    EHP=%.0f;\n", value[4]);
            break;
        case 15:
            //atk
            value[5] = be_number(char_in, char_finded[i + 1]);
            printf("信息修改：    HP=%.2f;\n", value[5]);
            break;
        case 16:
            //matk
            value[6] = be_number(char_in, char_finded[i + 1]);
            printf("信息修改：    MATK=%.0f;\n", value[6]);
            break;
        case 17:
            //batk
            value[7] = be_number(char_in, char_finded[i + 1]);
            printf("信息修改：    BATK=%.0f;\n", value[7]);
            break;
        case 18:
            //patk
            value[8] = be_number(char_in, char_finded[i + 1]);
            printf("信息修改：    PATK=%.2f%%;\n", value[8] * 100);
            break;
        case 19:
            //eatk
            value[9] = be_number(char_in, char_finded[i + 1]);
            printf("信息修改：    EATK=%.0f;\n", value[9]);
            break;
        case 20:
            //def
            value[10] = be_number(char_in, char_finded[i + 1]);
            printf("信息修改：    DEF=%.0f;\n", value[10]);
            break;
        case 21:
            //mdef
            value[11] = be_number(char_in, char_finded[i + 1]);
            printf("信息修改：    MDEF=%.0f;\n", value[11]);
            break;
        case 22:
            //bdef
            value[12] = be_number(char_in, char_finded[i + 1]);
            printf("信息修改：    BDEF=%.0f;\n", value[12]);
            break;
        case 23:
            //pdef
            value[13] = be_number(char_in, char_finded[i + 1]);
            printf("信息修改：    PDEF=%.2f%%;\n", value[13] * 100);
            break;
        case 24:
            //edef
            value[14] = be_number(char_in, char_finded[i + 1]);
            printf("信息修改：    EDEF=%.0f;\n", value[14]);
            break;
        case 25:
            //ss
            value[15] = be_number(char_in, char_finded[i + 1]);
            printf("信息修改：    SS=%.2f%%;\n", value[15] * 100);
            break;
        case 26:
            //crr
            value[16] = be_number(char_in, char_finded[i + 1]);
            printf("信息修改：    CRR=%.2f%%;\n", value[16] * 100);
            break;
        case 27:
            //crd
            value[17] = be_number(char_in, char_finded[i + 1]);
            printf("信息修改：    CRD=%.2f%%;\n", value[17] * 100);
            break;
        case 28:
            //em
            value[18] = be_number(char_in, char_finded[i + 1]);
            printf("信息修改：    EM=%.0f;\n", value[18]);
            break;
        case 29:
            //er
            value[19] = be_number(char_in, char_finded[i + 1]);
            printf("信息修改：    ER=%.2f%%;\n", value[19] * 100);
            break;
        case 30:
            //hb
            value[20] = be_number(char_in, char_finded[i + 1]);
            printf("信息修改：    HB=%.2f%%;\n", value[20] * 100);
            break;
        case 31:
            //ihb
            value[21] = be_number(char_in, char_finded[i + 1]);
            printf("信息修改：    IHB=%.2f%%;\n", value[21] * 100);
            break;
        case 32:
            //cd
            value[22] = be_number(char_in, char_finded[i + 1]);
            printf("信息修改：    CD=%.2f%%;\n", value[22] * 100);
            break;
        case 33:
            //ms
            value[23] = be_number(char_in, char_finded[i + 1]);
            printf("信息修改：    MS=%.0f;\n", value[23]);
            break;
        case 34:
            //bd
            value[24] = be_number(char_in, char_finded[i + 1]);
            printf("信息修改：    BD=%.2f%%;\n", value[24] * 100);
            break;
        case 35:
            //mdmg
            value[25] = be_number(char_in, char_finded[i + 1]);
            printf("信息修改：    MDMG=%.2f%%;\n", value[25] * 100);
            break;
        case 36:
            //ndmg
            value[26] = be_number(char_in, char_finded[i + 1]);
            printf("信息修改：    NDMG=%.2f%%;\n", value[26] * 100);
            break;
        case 37:
            //cdmg
            value[27] = be_number(char_in, char_finded[i + 1]);
            printf("信息修改：    CDMG=%.2f%%;\n", value[27] * 100);
            break;
        case 38:
            //fdmg
            value[28] = be_number(char_in, char_finded[i + 1]);
            printf("信息修改：    FDMG=%.2f%%;\n", value[28] * 100);
            break;
        case 39:
            //sdmg
            value[29] = be_number(char_in, char_finded[i + 1]);
            printf("信息修改：    SDMG=%.2f%%;\n", value[29] * 100);
            break;
        case 40:
            //pdmg
            value[30] = be_number(char_in, char_finded[i + 1]);
            printf("信息修改：    PDMG=%.2f%%;\n", value[30] * 100);
            break;
        case 41:
            //rs
            value[31] = be_number(char_in, char_finded[i + 1]);
            printf("信息修改：    RS=%.2f%%;\n", value[31] * 100);
            break;
        case 42:
            //oclv
            value[32] = be_number(char_in, char_finded[i + 1]);
            printf("信息修改：    Our Character Level=%.0f;\n", value[32]);
            break;
        case 43:
            //eclv
            value[33] = be_number(char_in, char_finded[i + 1]);
            printf("信息修改：    Enemy Character Level=%.0f;\n", value[33]);
            break;
        case 44:
            //SPEAL
            value[34] = be_number(char_in, char_finded[i + 1]);
            printf("信息修改：    EHP=%.0f;\n", value[34] * 100);
            break;
        case 45:
            //ELEMENT
            value[35] = be_number(char_in, char_finded[i + 1]);
            printf("信息修改：    HP=%.2f;\n", value[35] * 100);
            break;
            //------------------------------------------------------------------------------------------------------\\||
        case 46:
            //matk
            value[36] = be_number(char_in, char_finded[i + 1]);
            printf("信息修改：    MATK=%.0f;\n", value[36] * 100);
            break;
        case 47:
            //batk
            value[37] = be_number(char_in, char_finded[i + 1]);
            printf("信息修改：    BATK=%.0f;\n", value[37] * 100);
            break;
        case 48:
            //patk
            value[38] = be_number(char_in, char_finded[i + 1]);
            printf("信息修改：    PATK=%.2f%%;\n", value[38] * 100);
            break;
        case 49:
            //eatk
            value[39] = be_number(char_in, char_finded[i + 1]);
            printf("信息修改：    EATK=%.0f;\n", value[39] * 100);
            break;
        case 50:
            break;
        default:;
        }
    }
}

