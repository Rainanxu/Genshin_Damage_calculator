#pragma once
#include<stdio.h>
#include<windows.h>
#include"calculator_word_to_number.h"
#include"show_message.h"
double number = 0;


void toid0() {
    MessageBox(NULL, "����ID���£�\n\nMHP������ֵ���� Max HP                      MATK�������� ATK\nCRR  �������� CRIT Rate                           CDR   �������˺� CRIT DMG\nEM   ��Ԫ�ؾ�ͨ Elemental Mastery        MDEF�������� DEF\nER    ��Ԫ�س���Ч�� Energy Recharge    SS      ������ǿЧ Shield Strength\nCDR ����ȴ���� CD Reduction                 MS    ���������� Max Stamina\nHB   �����Ƽӳ� Healing Bonus               DB     ���˺��ӳ� DMG Bonus\nIHB  �������Ƽӳ� Incoming Healing Bonus\n\nע���˴��������˺��ӳ�ͳ��Ϊһ�����˺��ӳɡ��Ա���㡣", "Genshin Damage Calculator ID-HELP", MB_OK);
    //MessageBox(NULL, "����ID���£�\n\nMHP������ֵ���� Max HP                      MATK�������� ATK\nCRR  �������� CRIT Rate                           CDR   �������˺� CRIT DMG\nEM   ��Ԫ�ؾ�ͨ Elemental Mastery        MDEF�������� DEF\nER    ��Ԫ�س���Ч�� Energy Recharge    SS      ������ǿЧ Shield Strength\nCDR ����ȴ���� CD Reduction                 MS    ���������� Max Stamina\nHB   �����Ƽӳ� Healing Bonus               DB     ���˺��ӳ� DMG Bonus\nIHB  �������Ƽӳ� Incoming Healing Bonus\n\nע���˴��������˺��ӳ�ͳ��Ϊһ�����˺��ӳɡ��Ա���㡣", "Genshin Damage Calculator ID-HELP ", MB_OK);
    _endthread();
}
void toid00() {
    MessageBox(NULL, "����ID���£�\n\nMHP������ֵ���� Max HP                      MATK�������� ATK\nCRR  �������� CRIT Rate                           CDR   �������˺� CRIT DMG\nEM   ��Ԫ�ؾ�ͨ Elemental Mastery        MDEF�������� DEF\nER    ��Ԫ�س���Ч�� Energy Recharge    SS      ������ǿЧ Shield Strength\nCDR ����ȴ���� CD Reduction                 MS    ���������� Max Stamina\nHB   �����Ƽӳ� Healing Bonus               DB     ���˺��ӳ� DMG Bonus\nIHB  �������Ƽӳ� Incoming Healing Bonus\n\nע���˴��������˺��ӳ�ͳ��Ϊһ�����˺��ӳɡ��Ա���㡣\n\n�������ԣ�\nOCLV�� �ҷ���ɫ�ȼ�Our Character Level\nECLV �� �з���ɫ�ȼ�Enemy Character Level\nAIR    ��ƽ������ Average injury rate      NIR    ����ͨ�������� NormalAIR injury rate\nCIR    ���ػ����� Average injury rate      FIR     �����乥������ NormalAIR injury rate\nSIR    ��Ԫ��ս������ Average injury rate\nPIR    ��Ԫ�ر������� NormalAIR injury rate\nRS     ���˺����� Resistances \n\nSPECIAL��  �����㷨 Special Algorithms", "Genshin Damage Calculator ID-HELP MORE", MB_OK);
    //MessageBox(NULL, "����ID���£�\n\nMHP������ֵ���� Max HP                      MATK�������� ATK\nCRR  �������� CRIT Rate                           CDR   �������˺� CRIT DMG\nEM   ��Ԫ�ؾ�ͨ Elemental Mastery        MDEF�������� DEF\nER    ��Ԫ�س���Ч�� Energy Recharge    SS      ������ǿЧ Shield Strength\nCDR ����ȴ���� CD Reduction                 MS    ���������� Max Stamina\nHB   �����Ƽӳ� Healing Bonus               DB     ���˺��ӳ� DMG Bonus\nIHB  �������Ƽӳ� Incoming Healing Bonus\nMDMG��ƽ������      RR  ������ \n\nע���˴��������˺��ӳ�ͳ��Ϊһ�����˺��ӳɡ��Ա���㡣", "Genshin Damage Calculator ID-HELP MORE", MB_OK);
    _endthread();
}
void toid1() {
    MessageBox(NULL, "����ID���£�\n\nBHP ����������ֵ Bass HP                      BATK������������Bass ATK\nPHP ���ٷֱ�����ֵ Per HP                    PATK���ٷֱȹ�����Per ATK\nEHP ����������ֵ Extra HP                     EATK�����⹥����Extra ATK\nCRR  �������� CRIT Rate                           CDR   �������˺� CRIT DMG\nEM   ��Ԫ�ؾ�ͨ Elemental Mastery        SS      ������ǿЧ Shield Strength\nER    ��Ԫ�س���Ч�� Energy Recharge    BDEF������������Bass DEF\nPDEF���ٷֱȷ����� Per DEF                    EDEF�����������Extra DEF\nCDR ����ȴ���� CD Reduction                 MS    ���������� Max Stamina\nHB   �����Ƽӳ� Healing Bonus               DB     ���˺��ӳ� DMG Bonus\nIHB  �������Ƽӳ� Incoming Healing Bonus\n\nע���˴��������˺��ӳ�ͳ��Ϊһ�����˺��ӳɡ��Ա���㡣", "Genshin Damage Calculator ID-HELP", MB_OK);
    _endthread();
}
void toid01() {
    MessageBox(NULL, "����ID���£�\n\nBHP ����������ֵ Bass HP                      BATK������������Bass ATK\nPHP ���ٷֱ�����ֵ Per HP                    PATK���ٷֱȹ�����Per ATK\nEHP ����������ֵ Extra HP                     EATK�����⹥����Extra ATK\nCRR  �������� CRIT Rate                           CDR   �������˺� CRIT DMG\nEM   ��Ԫ�ؾ�ͨ Elemental Mastery        SS      ������ǿЧ Shield Strength\nER    ��Ԫ�س���Ч�� Energy Recharge    BDEF������������Bass DEF\nPDEF���ٷֱȷ����� Per DEF                    EDEF�����������Extra DEF\nCDR ����ȴ���� CD Reduction                 MS    ���������� Max Stamina\nHB   �����Ƽӳ� Healing Bonus               DB     ���˺��ӳ� DMG Bonus\nIHB  �������Ƽӳ� Incoming Healing Bonus\n\nע���˴��������˺��ӳ�ͳ��Ϊһ�����˺��ӳɡ��Ա���㡣\n�������ԣ�\nOCLV�� �ҷ���ɫ�ȼ�Our Character Level\nECLV �� �з���ɫ�ȼ�Enemy Character Level\nAIR    ��ƽ������ Average injury rate      NIR    ����ͨ�������� NormalAIR injury rate\nCIR    ���ػ����� Average injury rate      FIR     �����乥������ NormalAIR injury rate\nSIR    ��Ԫ��ս������ Average injury rate\nPIR    ��Ԫ�ر������� NormalAIR injury rate\nRS     ���˺����� Resistances \n\nSPECIAL��  �����㷨 Special Algorithms", "Genshin Damage Calculator ID-HELP MORE", MB_OK);
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
            printf("�����С���");
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
                printf("\r��Ϣ�޸ģ�    %s=%.0f;\n", id, value[char_finded[i] - 10]);
            else
                printf("\r��Ϣ�޸ģ�    %s=%.2f%%;\n", id, 100*value[char_finded[i] - 10]);
        }
        else
        switch (char_finded[i])
        {
        case 1:
            //ok
            printf("ȷ��׼���������\n");
            for (;;) {
                printf("ȷ������'y'��'Y'����������'n'��'N'\n�����룺");
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
                        printf("ȡ����\n");
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
           
            //printf("������Ϣ���£�\n\n  ��������\n    ����ֵ���� Max HP                     %.0f\n    ������ ATK                            %.0f\n    ������ DEF                            %.0f\n    Ԫ�ؾ�ͨ Elemental Mastery            %.0f\n    �������� Max Stamina                  %.0f\n\n  ��������\n    ������ CRIT Rate                      %.0f%%\n    �����˺� CRIT DMG                     %.0f%%\n    ���Ƽӳ� Healing Bonus                %.0f%%\n    �����Ƽӳ� Incoming Healing Bonus     %.0f%%\n    Ԫ�س���Ч�� Energy Recharge          %.0f%%\n    ��ȴ���� CD Reduction                 %.0f%%\n    ����ǿЧ Shield Strength              %.0f%%\n    �˺��ӳ� DMG Bonus                    %.0f%%\n\n�������", hp1, atk1, def1, em1, ms1, cr1 * 100, cd1 * 100, hb1 * 100, ihb1 * 100, er1 * 100, cdr1 * 100, ss1 * 100, db1 * 100);

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
            MessageBox(NULL, "����˳���Ŷ��", "Genshin Damage Calculator EXIT", MB_OK);
            return 6;
        case 7:
            //showmore
            if (others[1] != 1) {
                others[1] = 1;
                MessageBox(NULL, "��ʾ������Ϣ��", "Genshin Damage Calculator Model", MB_OK);
            }
            else printf("�Ѿ��Ǵ�ģʽ��");
            break;
        case 8:
            //showless
            if (others[1] != 0) {
                MessageBox(NULL, "��ʾ���ٵ���Ϣ��", "Genshin Damage Calculator Model", MB_OK);
                others[1] = 0;
            }
            else printf("�Ѿ��Ǵ�ģʽ��");
            break;
        case 9:
            //about
            MessageBox(NULL, "|----------------------------------------------------------------------------------|\n�汾��Ϣ:\n\n�����汾1.12.54\n�ڲ����԰汾04.34.12\n\n�������ۻ����ο����˺������ۡ�3.0��\n\n��л����������ǰ(��è����)   holiverse   ��ףw   ԭ��ð���� Yamios �ڴ�����\n            ��ӫ�ƹ� С�������й۲�   ���Ӱ���1   ��ӫ�ƹ� �   NGA Shallow��\n            NGA���Ᾱ�Ϲ�ң\n            �����ش�ѧ��tesiacoil   Shallow��   holiverse   �Ᾱ�Ϲ�ң   ���ʵ���\n\n������XUANLUN XUWU\n|-------------------------------��Ȩ���С���Ȩ�ؾ�---------------------------------|", "Genshin Damage Calculator ABOUT", MB_OK);
            break;

        case 10:
            //hp
            printf("��Ϣ�޸ģ�    HP=%.2f;\n", value[0]);
            break;
        case 11:
            //mhp
            printf("��Ϣ�޸ģ�    EMHP=%.0f;\n", value[1]);
            break;
        case 12:
            //bhp
            printf("��Ϣ�޸ģ�    BHP=%.0f;\n", value[2]);
            break;
        case 13:
            //php
            printf("��Ϣ�޸ģ�    PHP=%.2f%%;\n", value[3]*100);
            break;
        case 14:
            //ehp
            printf("��Ϣ�޸ģ�    EHP=%.0f;\n", value[4]);
            break;
        case 15:
            //atk
            printf("��Ϣ�޸ģ�    HP=%.2f;\n", value[5]);
            break;
        case 16:
            //matk
            printf("��Ϣ�޸ģ�    MATK=%.0f;\n", value[6]);
            break;
        case 17:
            //batk
            printf("��Ϣ�޸ģ�    BATK=%.0f;\n", value[7]);
            break;
        case 18:
            //patk
            printf("��Ϣ�޸ģ�    PATK=%.2f%%;\n", value[8]*100);
            break;
        case 19:
            //eatk
            printf("��Ϣ�޸ģ�    EATK=%.0f;\n", value[9]);
            break;
        case 20:
            //def
            printf("��Ϣ�޸ģ�    DEF=%.0f;\n", value[10]);
            break;
        case 21:
            //mdef
            printf("��Ϣ�޸ģ�    MDEF=%.0f;\n", value[11]);
            break;
        case 22:
            //bdef
            printf("��Ϣ�޸ģ�    BDEF=%.0f;\n", value[12]);
            break;
        case 23:
            //pdef
            printf("��Ϣ�޸ģ�    PDEF=%.2f%%;\n", value[13]*100);
            break;
        case 24:
            //edef
            printf("��Ϣ�޸ģ�    EDEF=%.0f;\n", value[14]);
            break;
        case 25:
            //ss
            printf("��Ϣ�޸ģ�    SS=%.2f%%;\n", value[15]*100);
            break;
        case 26:
            //crr
            printf("��Ϣ�޸ģ�    CRR=%.2f%%;\n", value[16]*100);
            break;
        case 27:
            //crd
            printf("��Ϣ�޸ģ�    CRD=%.2f%%;\n", value[17]*100);
            break;
        case 28:
            //em
            printf("��Ϣ�޸ģ�    EM=%.0f;\n", value[18]);
            break;
        case 29:
            //er
            printf("��Ϣ�޸ģ�    ER=%.2f%%;\n", value[19]*100);
            break;
        case 30:
            //hb
            printf("��Ϣ�޸ģ�    HB=%.2f%%;\n", value[20]*100);
            break;
        case 31:
            //ihb
            printf("��Ϣ�޸ģ�    IHB=%.2f%%;\n", value[21]*100);
            break;
        case 32:
            //cd
            printf("��Ϣ�޸ģ�    CD=%.2f%%;\n", value[22]*100);
            break;
        case 33:
            //ms
            printf("��Ϣ�޸ģ�    MS=%.0f;\n", value[23]);
            break;
        case 34:
            //bd
            printf("��Ϣ�޸ģ�    BD=%.2f%%;\n", value[24]*100);
            break;
        case 35:
            //mdmg
            printf("��Ϣ�޸ģ�    MDMG=%.2f%%;\n", value[25]*100);
            break;
        case 36:
            //ndmg
            printf("��Ϣ�޸ģ�    NDMG=%.2f%%;\n", value[26]*100);
            break;
        case 37:
            //cdmg
            printf("��Ϣ�޸ģ�    CDMG=%.2f%%;\n", value[27]*100);
            break;
        case 38:
            //fdmg
            printf("��Ϣ�޸ģ�    FDMG=%.2f%%;\n", value[28]*100);
            break;
        case 39:
            //sdmg
            printf("��Ϣ�޸ģ�    SDMG=%.2f%%;\n", value[29]*100);
            break;
        case 40:
            //pdmg
            printf("��Ϣ�޸ģ�    PDMG=%.2f%%;\n", value[30]*100);
            break;
        case 41:
            //rs
            printf("��Ϣ�޸ģ�    RS=%.2f%%;\n", value[31]*100);
            break;
        case 42:
            //oclv
            printf("��Ϣ�޸ģ�    Our Character Level=%.0f;\n", value[32]);
            break;
        case 43:
            //eclv
            printf("��Ϣ�޸ģ�    Enemy Character Level=%.0f;\n", value[33]);
            break;
        case 44:
            //SPEAL
            printf("��Ϣ�޸ģ�    EHP=%.0f;\n", value[34]*100);
            break;
        case 45:
            //ELEMENT
            printf("��Ϣ�޸ģ�    HP=%.2f;\n", value[35]*100);
            break;
            //------------------------------------------------------------------------------------------------------\\||
        case 46:
            //matk
            printf("��Ϣ�޸ģ�    MATK=%.0f;\n", value[36]*100);
            break;
        case 47:
            //batk
            printf("��Ϣ�޸ģ�    BATK=%.0f;\n", value[37]*100);
            break;
        case 48:
            //patk
            printf("��Ϣ�޸ģ�    PATK=%.2f%%;\n", value[38] * 100);
            break;
        case 49:
            //eatk
            printf("��Ϣ�޸ģ�    EATK=%.0f;\n", value[39]*100);
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
            printf("ȷ��׼���������\n");
            for (;;) {
                printf("ȷ������'y'��'Y'����������'n'��'N'\n�����룺");
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
                        printf("ȡ����\n");
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

            //printf("������Ϣ���£�\n\n  ��������\n    ����ֵ���� Max HP                     %.0f\n    ������ ATK                            %.0f\n    ������ DEF                            %.0f\n    Ԫ�ؾ�ͨ Elemental Mastery            %.0f\n    �������� Max Stamina                  %.0f\n\n  ��������\n    ������ CRIT Rate                      %.0f%%\n    �����˺� CRIT DMG                     %.0f%%\n    ���Ƽӳ� Healing Bonus                %.0f%%\n    �����Ƽӳ� Incoming Healing Bonus     %.0f%%\n    Ԫ�س���Ч�� Energy Recharge          %.0f%%\n    ��ȴ���� CD Reduction                 %.0f%%\n    ����ǿЧ Shield Strength              %.0f%%\n    �˺��ӳ� DMG Bonus                    %.0f%%\n\n�������", hp1, atk1, def1, em1, ms1, cr1 * 100, cd1 * 100, hb1 * 100, ihb1 * 100, er1 * 100, cdr1 * 100, ss1 * 100, db1 * 100);

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
            MessageBox(NULL, "����˳���Ŷ��", "Genshin Damage Calculator EXIT", MB_OK);
            return 6;
        case 7:
            //showmore
            if (others[1] != 1) {
                others[1] = 1;
                MessageBox(NULL, "��ʾ������Ϣ��", "Genshin Damage Calculator Model", MB_OK);
            }
            else printf("�Ѿ��Ǵ�ģʽ��");
            break;
        case 8:
            //showless
            if (others[1] != 0) {
                MessageBox(NULL, "��ʾ���ٵ���Ϣ��", "Genshin Damage Calculator Model", MB_OK);
                others[1] = 0;
            }
            else printf("�Ѿ��Ǵ�ģʽ��");
            break;
        case 9:
            //about
            MessageBox(NULL, "|----------------------------------------------------------------------------------|\n�汾��Ϣ:\n\n�����汾1.12.54\n�ڲ����԰汾04.34.12\n\n�������ۻ����ο����˺������ۡ�3.0��\n\n��л����������ǰ(��è����)   holiverse   ��ףw   ԭ��ð���� Yamios �ڴ�����\n            ��ӫ�ƹ� С�������й۲�   ���Ӱ���1   ��ӫ�ƹ� �   NGA Shallow��\n            NGA���Ᾱ�Ϲ�ң\n            �����ش�ѧ��tesiacoil   Shallow��   holiverse   �Ᾱ�Ϲ�ң   ���ʵ���\n\n������XUANLUN XUWU\n|-------------------------------��Ȩ���С���Ȩ�ؾ�---------------------------------|", "Genshin Damage Calculator ABOUT", MB_OK);
            break;
        case 10:
            //hp
            value[0] = be_number(char_in, char_finded[i + 1]);
            printf("��Ϣ�޸ģ�    HP=%.2f;\n", value[0]);
            break;
        case 11:
            //mhp
            value[1] = be_number(char_in, char_finded[i + 1]);
            printf("��Ϣ�޸ģ�    MHP=%.0f;\n", value[1]);
            break;
        case 12:
            //bhp
            value[2] = be_number(char_in, char_finded[i + 1]);
            printf("��Ϣ�޸ģ�    BHP=%.0f;\n", value[2]);
            break;
        case 13:
            //php
            value[3] = be_number(char_in, char_finded[i + 1]);
            printf("��Ϣ�޸ģ�    PHP=%.2f%%;\n", value[3] * 100);
            break;
        case 14:
            //ehp
            value[4] = be_number(char_in, char_finded[i + 1]);
            printf("��Ϣ�޸ģ�    EHP=%.0f;\n", value[4]);
            break;
        case 15:
            //atk
            value[5] = be_number(char_in, char_finded[i + 1]);
            printf("��Ϣ�޸ģ�    HP=%.2f;\n", value[5]);
            break;
        case 16:
            //matk
            value[6] = be_number(char_in, char_finded[i + 1]);
            printf("��Ϣ�޸ģ�    MATK=%.0f;\n", value[6]);
            break;
        case 17:
            //batk
            value[7] = be_number(char_in, char_finded[i + 1]);
            printf("��Ϣ�޸ģ�    BATK=%.0f;\n", value[7]);
            break;
        case 18:
            //patk
            value[8] = be_number(char_in, char_finded[i + 1]);
            printf("��Ϣ�޸ģ�    PATK=%.2f%%;\n", value[8] * 100);
            break;
        case 19:
            //eatk
            value[9] = be_number(char_in, char_finded[i + 1]);
            printf("��Ϣ�޸ģ�    EATK=%.0f;\n", value[9]);
            break;
        case 20:
            //def
            value[10] = be_number(char_in, char_finded[i + 1]);
            printf("��Ϣ�޸ģ�    DEF=%.0f;\n", value[10]);
            break;
        case 21:
            //mdef
            value[11] = be_number(char_in, char_finded[i + 1]);
            printf("��Ϣ�޸ģ�    MDEF=%.0f;\n", value[11]);
            break;
        case 22:
            //bdef
            value[12] = be_number(char_in, char_finded[i + 1]);
            printf("��Ϣ�޸ģ�    BDEF=%.0f;\n", value[12]);
            break;
        case 23:
            //pdef
            value[13] = be_number(char_in, char_finded[i + 1]);
            printf("��Ϣ�޸ģ�    PDEF=%.2f%%;\n", value[13] * 100);
            break;
        case 24:
            //edef
            value[14] = be_number(char_in, char_finded[i + 1]);
            printf("��Ϣ�޸ģ�    EDEF=%.0f;\n", value[14]);
            break;
        case 25:
            //ss
            value[15] = be_number(char_in, char_finded[i + 1]);
            printf("��Ϣ�޸ģ�    SS=%.2f%%;\n", value[15] * 100);
            break;
        case 26:
            //crr
            value[16] = be_number(char_in, char_finded[i + 1]);
            printf("��Ϣ�޸ģ�    CRR=%.2f%%;\n", value[16] * 100);
            break;
        case 27:
            //crd
            value[17] = be_number(char_in, char_finded[i + 1]);
            printf("��Ϣ�޸ģ�    CRD=%.2f%%;\n", value[17] * 100);
            break;
        case 28:
            //em
            value[18] = be_number(char_in, char_finded[i + 1]);
            printf("��Ϣ�޸ģ�    EM=%.0f;\n", value[18]);
            break;
        case 29:
            //er
            value[19] = be_number(char_in, char_finded[i + 1]);
            printf("��Ϣ�޸ģ�    ER=%.2f%%;\n", value[19] * 100);
            break;
        case 30:
            //hb
            value[20] = be_number(char_in, char_finded[i + 1]);
            printf("��Ϣ�޸ģ�    HB=%.2f%%;\n", value[20] * 100);
            break;
        case 31:
            //ihb
            value[21] = be_number(char_in, char_finded[i + 1]);
            printf("��Ϣ�޸ģ�    IHB=%.2f%%;\n", value[21] * 100);
            break;
        case 32:
            //cd
            value[22] = be_number(char_in, char_finded[i + 1]);
            printf("��Ϣ�޸ģ�    CD=%.2f%%;\n", value[22] * 100);
            break;
        case 33:
            //ms
            value[23] = be_number(char_in, char_finded[i + 1]);
            printf("��Ϣ�޸ģ�    MS=%.0f;\n", value[23]);
            break;
        case 34:
            //bd
            value[24] = be_number(char_in, char_finded[i + 1]);
            printf("��Ϣ�޸ģ�    BD=%.2f%%;\n", value[24] * 100);
            break;
        case 35:
            //mdmg
            value[25] = be_number(char_in, char_finded[i + 1]);
            printf("��Ϣ�޸ģ�    MDMG=%.2f%%;\n", value[25] * 100);
            break;
        case 36:
            //ndmg
            value[26] = be_number(char_in, char_finded[i + 1]);
            printf("��Ϣ�޸ģ�    NDMG=%.2f%%;\n", value[26] * 100);
            break;
        case 37:
            //cdmg
            value[27] = be_number(char_in, char_finded[i + 1]);
            printf("��Ϣ�޸ģ�    CDMG=%.2f%%;\n", value[27] * 100);
            break;
        case 38:
            //fdmg
            value[28] = be_number(char_in, char_finded[i + 1]);
            printf("��Ϣ�޸ģ�    FDMG=%.2f%%;\n", value[28] * 100);
            break;
        case 39:
            //sdmg
            value[29] = be_number(char_in, char_finded[i + 1]);
            printf("��Ϣ�޸ģ�    SDMG=%.2f%%;\n", value[29] * 100);
            break;
        case 40:
            //pdmg
            value[30] = be_number(char_in, char_finded[i + 1]);
            printf("��Ϣ�޸ģ�    PDMG=%.2f%%;\n", value[30] * 100);
            break;
        case 41:
            //rs
            value[31] = be_number(char_in, char_finded[i + 1]);
            printf("��Ϣ�޸ģ�    RS=%.2f%%;\n", value[31] * 100);
            break;
        case 42:
            //oclv
            value[32] = be_number(char_in, char_finded[i + 1]);
            printf("��Ϣ�޸ģ�    Our Character Level=%.0f;\n", value[32]);
            break;
        case 43:
            //eclv
            value[33] = be_number(char_in, char_finded[i + 1]);
            printf("��Ϣ�޸ģ�    Enemy Character Level=%.0f;\n", value[33]);
            break;
        case 44:
            //SPEAL
            value[34] = be_number(char_in, char_finded[i + 1]);
            printf("��Ϣ�޸ģ�    EHP=%.0f;\n", value[34] * 100);
            break;
        case 45:
            //ELEMENT
            value[35] = be_number(char_in, char_finded[i + 1]);
            printf("��Ϣ�޸ģ�    HP=%.2f;\n", value[35] * 100);
            break;
            //------------------------------------------------------------------------------------------------------\\||
        case 46:
            //matk
            value[36] = be_number(char_in, char_finded[i + 1]);
            printf("��Ϣ�޸ģ�    MATK=%.0f;\n", value[36] * 100);
            break;
        case 47:
            //batk
            value[37] = be_number(char_in, char_finded[i + 1]);
            printf("��Ϣ�޸ģ�    BATK=%.0f;\n", value[37] * 100);
            break;
        case 48:
            //patk
            value[38] = be_number(char_in, char_finded[i + 1]);
            printf("��Ϣ�޸ģ�    PATK=%.2f%%;\n", value[38] * 100);
            break;
        case 49:
            //eatk
            value[39] = be_number(char_in, char_finded[i + 1]);
            printf("��Ϣ�޸ģ�    EATK=%.0f;\n", value[39] * 100);
            break;
        case 50:
            break;
        default:;
        }
    }
}

