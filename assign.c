#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
/*
���׹�ʽ:

�˺�=������*������*������*������*��Ӧ��*������*������

Damage=A�� * M�� * B�� * C�� * E�� * D�� * R��

������= A = Attack

������= M = Damage Multipiler

������= B = Damage Bonus

������= C = Critical Bracket

��Ӧ��= E = Elemental Reaction

������= D = Defense

������= R = Resistance
*/

//�汾��01.30.26




int main()
{
    //�����ж�
    int chis, gettims = 1, chok = 0, chexit = 0, chidhelp = 0, chid1 = 0, chabout = 0, chmessage = 0;
    //��ĸ�ж�
    char ok = 'A', exit = 'A', idhelp = 'A', about = 'A', message = 'A';


    //���ܲ���
    int ch0, ch1, getcharb;
    char id = 'A', is = 'A';

    //����
    float hp1 = 10000, atk1 = 250, cr1 = 0.05, cd1 = 0.50, hb1 = 0.00, ihb1 = 0.00, em1 = 0, er1 = 1.00, def1 = 700, ss1 = 0.00, cdr1 = 0.00, ms1 = 250, db1 = 0.00;
    float hp2 = 10000, atk2 = 250, cr2 = 0.05, cd2 = 0.50, hb2 = 0.00, ihb2 = 0.00, em2 = 0, er2 = 1.00, def2 = 700, ss2 = 0.00, cdr2 = 0.00, ms2 = 250, db2 = 0.00;

    ShowWindow(GetConsoleWindow(), SW_HIDE);

    ch0 = MessageBox(NULL, "        �������Ϊ������Ȥ���������ݽ����ο��������������!\n�������ȷ���ܷ�ƽ������������������ѡ��ȡ�������˳���", "Genshin Damage Calculator ��ʾ", MB_OKCANCEL);
    if (ch0 == IDCANCEL) return 0;
    ch1 = MessageBox(NULL, "        ��������δ�����������в��ԣ��������豸���ܴ��ڼ��������⣬����������쳣�����½⡣\n        ������Ļ�������豸�����𺦣�����ѡ��ȡ�������˳�", "Genshin Damage Calculator ��ʾ", MB_OKCANCEL);
    if (ch1 == IDCANCEL) return 0;
    MessageBox(NULL, "���ֲο���Ϣ��\n\n���׹�ʽ:\n\n�˺� = ������ * ������ * ������ * ������ * ��Ӧ�� * ������ * ������;\nDamage = A�� * M�� * B�� * C�� * E�� * D�� * R��;\n������ = A = Attack;\n������ = M = Damage Multipiler;\n������ = B = Damage Bonus;\n������ = C = Critical Bracket;\n��Ӧ�� = E = Elemental Reaction;\n������ = D = Defense;\n������ = R = Resistance��", "Genshin Damage Calculator", MB_OK);



    ShowWindow(GetConsoleWindow(), SW_RESTORE);
reputin:
    //printf("���������롰MESAGE�����鿴���У�Ĭ�ϣ���ֵ\n");
    printf("�������ڴ˴��ڸ�������������ʹ��������׼ȷ��\n");
    printf("���롰MESSAGE�����鿴���У�Ĭ�ϣ���ֵ\n");
    printf("Ҫ�����������ݣ����Լ�������ID����Ϣ��ֵ�����硰HP=1000\033����\n");
    printf("�����Ҫ������Ϣ�����򵼣����Գ��Լ��롰IDHELP���Ի�ð�����\n");
    printf("����������������롰OK�������롰EXIT�������˳���\n\n");
    printf("||||----------------------------------------------------------------------------------------------||||\n");
    printf("���������ݣ�");
    while (ok != 'K')
    {
        //����������������������������������part 1����������������������������������������//
        while (chok == 0 || chexit == 0 || chidhelp == 0 || chabout == 0 || chmessage == 0)//|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
        {
            chok = scanf_s("O%c", &ok, 1);
            if (ok != 'K')chok = 0;
            chidhelp = scanf_s("IDHEL%c", &idhelp, 1);
            if (idhelp != 'P') chidhelp = 0;
            chexit = scanf_s("EXI%c", &exit, 1);
            if (exit != 'T') chexit = 0;
            chmessage = scanf_s("MESSAG%c", &message, 1);
            if (message != 'E')chmessage = 0;
            chabout = scanf_s("ABOU%c", &about, 1);
            if (about != 'T')chabout = 0;
            if (chok != 0 || chexit != 0 || chidhelp != 0 || chabout != 0 || chmessage != 0)break;//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
            if (gettims >= 2) {
                printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
                gettims--;
            }
            if (chok == 0 || chexit == 0 || chidhelp == 0 || chabout == 0 || chmessage == 0) {//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
                printf("����ʧ�ܣ������ԣ�");
                getcharb = getchar();
                gettims++;
            }
        }
        //����������������������������������part 2����������������������������������������--//
        for (;;)
        {
            if (gettims >= 2) {
                printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
                gettims--;
            }
            if (chok != 0 || chexit != 0 || chidhelp != 0 || chabout != 0 || chmessage != 0) {//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
                printf("����ɹ����������");
                getcharb = getchar();
                gettims++;
            }
            //����������������������������������CHOSE 2����������������������������������������--//

            if (exit == 'T') {
                ShowWindow(GetConsoleWindow(), SW_HIDE);
                MessageBox(NULL, "����˳���Ŷ��", "Genshin Damage Calculator ID-HELP", MB_OK);
                return 0;
            }
            if (idhelp == 'P') {
                MessageBox(NULL, "����ID���£�\n\nHP   ������ֵ���� Max HP                     ATK�������� ATK\nCR   �������� CRIT Rate                           HB �����Ƽӳ� Healing Bonus\nCD   �������˺� CRIT DMG                      IHB�������Ƽӳ� Incoming Healing Bonus\nEM  ��Ԫ�ؾ�ͨ Elemental Mastery        DEF�������� DEF\nER   ��Ԫ�س���Ч�� Energy Recharge    SS  ������ǿЧ Shield Strength\nCDR����ȴ���� CD Reduction                 MS ���������� Max Stamina\nDB   ���˺��ӳ� DMG Bonus\n\nע���˴��������˺��ӳ�ͳ��Ϊһ�����˺��ӳɡ��Ա���㡣", "Genshin Damage Calculator ID-HELP", MB_OK);
                idhelp = 'A';
            }
            if (about == 'T') {
                MessageBox(NULL, "|----------------------------------------------------------------------------------|\n�汾��Ϣ:\n\n�����汾1.10.44\n�ڲ����԰汾20.34.12\n\n�������ۻ����ο����˺������ۡ�3.0��\n��л��holiverse   ��ףw   ��������ǰ(��è����)   ԭ��ð���� Yamios �ڴ�����\n            ��ӫ�ƹ� С�������й۲�   ���Ӱ���1   ��ӫ�ƹ� �   NGA Shallow��\n            NGA���Ᾱ�Ϲ�ң\n            �����ش�ѧ��tesiacoil   Shallow��   holiverse   �Ᾱ�Ϲ�ң   ���ʵ���\n\n������XUANLUN XUWU\n|-------------------------------��Ȩ���С���Ȩ�ؾ�---------------------------------|", "Genshin Damage Calculator ABOUT", MB_OK);
                about = 'A';
            }
            if (message == 'E') {
                MessageBox(NULL, "����ID���£�\n\nHP   ������ֵ���� Max HP                     ATK�������� ATK\nCR   �������� CRIT Rate                           HB �����Ƽӳ� Healing Bonus\nCD   �������˺� CRIT DMG                      IHB�������Ƽӳ� Incoming Healing Bonus\nEM  ��Ԫ�ؾ�ͨ Elemental Mastery        DEF�������� DEF\nER   ��Ԫ�س���Ч�� Energy Recharge    SS  ������ǿЧ Shield Strength\nCDR����ȴ���� CD Reduction                 MS ���������� Max Stamina\nDB   ���˺��ӳ� DMG Bonus\n\nע���˴��������˺��ӳ�ͳ��Ϊһ�����˺��ӳɡ��Ա���㡣", "Genshin Damage Calculator ID-HELP", MB_OK);
                message = 'A';
            }
            if (ok == 'K')break;
            chok = scanf_s("O%c", &ok, 1);
            if (ok != 'K')chok = 0;

            chidhelp = scanf_s("IDHEL%c", &idhelp, 1);
            if (idhelp != 'P') chidhelp = 0;

            chexit = scanf_s("EXI%c", &exit, 1);
            if (exit != 'T') chexit = 0;

            chmessage = scanf_s("MESSAG%c", &message, 1);
            if (message != 'E')chmessage = 0;

            chabout = scanf_s("ABOU%c", &about, 1);
            if (about != 'T')chabout = 0;

            if (chok == 0 && chexit == 0 && chidhelp == 0 && chabout == 0 && chmessage == 0)break;//|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
        }
    }
    printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
    printf("����������ɣ�    \n");
    printf("\n");
    //printf("a=%d\n", a);
    printf("ȷ��������ȷ��\n");
    printf("��ȷ����Y������ȷ������N��\n");
    chis = scanf_s(" %c", &is, 1);
    if (chis == 0 || is != 'Y' || is != 'N') {
        for (;;) {
            if (is == 'Y' || is == 'N')break;
            printf("����ʧ�ܣ����������룺\n");
            chis = scanf_s(" %c", &is, 1);
            getcharb = getchar();
        }
    }
    if (is == 'Y') {
        ShowWindow(GetConsoleWindow(), SW_HIDE);
        MessageBox(NULL, "��ѽ����û�������أ�", "Genshin Damage Calculator ABOUT", MB_OK);
        MessageBox(NULL, "����˳���Ŷ��", "Genshin Damage Calculator ABOUT", MB_OK);
        return 0;
    }
    if (is == 'N') {
        ok = 'A';
        is = 'A';
        system("cls");
        printf("�볢���ٴ����롣\n\n");
        goto reputin;
    }
}