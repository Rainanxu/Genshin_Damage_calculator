#pragma once
#include<stdio.h>
#include<windows.h>
#include"calculator_word_to_number.h"
double number = 0;


void toid0() {
    MessageBox(NULL, "����ID���£�\n\nHP   ������ֵ���� Max HP                     ATK�������� ATK\nCR   �������� CRIT Rate                           HB �����Ƽӳ� Healing Bonus\nCD   �������˺� CRIT DMG                      IHB�������Ƽӳ� Incoming Healing Bonus\nEM  ��Ԫ�ؾ�ͨ Elemental Mastery        DEF�������� DEF\nER   ��Ԫ�س���Ч�� Energy Recharge    SS  ������ǿЧ Shield Strength\nCDR����ȴ���� CD Reduction                 MS ���������� Max Stamina\nDB   ���˺��ӳ� DMG Bonus\n\nע���˴��������˺��ӳ�ͳ��Ϊһ�����˺��ӳɡ��Ա���㡣", "Genshin Damage Calculator ID-HELP ", MB_OK);
    _endthread();
}
void toid00() {
    MessageBox(NULL, "����ID���£�\n\nHP   ������ֵ���� Max HP                     ATK�������� ATK\nCR   �������� CRIT Rate                           HB �����Ƽӳ� Healing Bonus\nCD   �������˺� CRIT DMG                      IHB�������Ƽӳ� Incoming Healing Bonus\nEM  ��Ԫ�ؾ�ͨ Elemental Mastery        DEF�������� DEF\nER   ��Ԫ�س���Ч�� Energy Recharge    SS  ������ǿЧ Shield Strength\nCDR����ȴ���� CD Reduction                 MS ���������� Max Stamina\nDB   ���˺��ӳ� DMG Bonus\n\nע���˴��������˺��ӳ�ͳ��Ϊһ�����˺��ӳɡ��Ա���㡣", "Genshin Damage Calculator ID-HELP MORE", MB_OK);
    _endthread();
}
void toid1() {
    MessageBox(NULL, "����ID���£�\n\nHP   ������ֵ���� Max HP                     ATK�������� ATK\nCR   �������� CRIT Rate                           HB �����Ƽӳ� Healing Bonus\nCD   �������˺� CRIT DMG                      IHB�������Ƽӳ� Incoming Healing Bonus\nEM  ��Ԫ�ؾ�ͨ Elemental Mastery        DEF�������� DEF\nER   ��Ԫ�س���Ч�� Energy Recharge    SS  ������ǿЧ Shield Strength\nCDR����ȴ���� CD Reduction                 MS ���������� Max Stamina\nDB   ���˺��ӳ� DMG Bonus\n\nע���˴��������˺��ӳ�ͳ��Ϊһ�����˺��ӳɡ��Ա���㡣", "Genshin Damage Calculator ID-HELP", MB_OK);
    _endthread();
}
void toid01() {
    MessageBox(NULL, "����ID���£�\n\nHP   ������ֵ���� Max HP                     ATK�������� ATK\nCR   �������� CRIT Rate                           HB �����Ƽӳ� Healing Bonus\nCD   �������˺� CRIT DMG                      IHB�������Ƽӳ� Incoming Healing Bonus\nEM  ��Ԫ�ؾ�ͨ Elemental Mastery        DEF�������� DEF\nER   ��Ԫ�س���Ч�� Energy Recharge    SS  ������ǿЧ Shield Strength\nCDR����ȴ���� CD Reduction                 MS ���������� Max Stamina\nDB   ���˺��ӳ� DMG Bonus\n\nע���˴��������˺��ӳ�ͳ��Ϊһ�����˺��ӳɡ��Ա���㡣", "Genshin Damage Calculator ID-HELP MORE", MB_OK);
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
            printf("message");
           
            //printf("������Ϣ���£�\n\n  ��������\n    ����ֵ���� Max HP                     %.0f\n    ������ ATK                            %.0f\n    ������ DEF                            %.0f\n    Ԫ�ؾ�ͨ Elemental Mastery            %.0f\n    �������� Max Stamina                  %.0f\n\n  ��������\n    ������ CRIT Rate                      %.0f%%\n    �����˺� CRIT DMG                     %.0f%%\n    ���Ƽӳ� Healing Bonus                %.0f%%\n    �����Ƽӳ� Incoming Healing Bonus     %.0f%%\n    Ԫ�س���Ч�� Energy Recharge          %.0f%%\n    ��ȴ���� CD Reduction                 %.0f%%\n    ����ǿЧ Shield Strength              %.0f%%\n    �˺��ӳ� DMG Bonus                    %.0f%%\n\n�������", hp1, atk1, def1, em1, ms1, cr1 * 100, cd1 * 100, hb1 * 100, ihb1 * 100, er1 * 100, cdr1 * 100, ss1 * 100, db1 * 100);

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
            MessageBox(NULL, "����˳���Ŷ��", "Genshin Damage Calculator EXIT", MB_OK);
            return 6;
        case 7:
            //showmore
            others[1] = 1;
            printf("����7"); 
            break;
        case 8:
            //showless
            others[1] = 0;
            break;
        case 9:
            MessageBox(NULL, "|----------------------------------------------------------------------------------|\n�汾��Ϣ:\n\n�����汾1.12.54\n�ڲ����԰汾04.34.12\n\n�������ۻ����ο����˺������ۡ�3.0��\n��л����������ǰ(��è����)   holiverse   ��ףw   ԭ��ð���� Yamios �ڴ�����\n            ��ӫ�ƹ� С�������й۲�   ���Ӱ���1   ��ӫ�ƹ� �   NGA Shallow��\n            NGA���Ᾱ�Ϲ�ң\n            �����ش�ѧ��tesiacoil   Shallow��   holiverse   �Ᾱ�Ϲ�ң   ���ʵ���\n\n������XUANLUN XUWU\n|-------------------------------��Ȩ���С���Ȩ�ؾ�---------------------------------|", "Genshin Damage Calculator ABOUT", MB_OK);
            break;
        case 10:
            value[0] = be_number(char_in, char_finded[i + 1]);
            printf("��Ϣ�޸ģ�    HP=%.2f;\n", value[0]);
            break;
        case 11:
            break;
        default:;
        }
    }
}
