#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
//#include<thread>
//#include<pthread.h>
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

void toid1() {//�β�void * ����ʡ�ԣ�����������
    MessageBox(NULL, "����ID���£�\n\nHP   ������ֵ���� Max HP                     ATK�������� ATK\nCR   �������� CRIT Rate                           HB �����Ƽӳ� Healing Bonus\nCD   �������˺� CRIT DMG                      IHB�������Ƽӳ� Incoming Healing Bonus\nEM  ��Ԫ�ؾ�ͨ Elemental Mastery        DEF�������� DEF\nER   ��Ԫ�س���Ч�� Energy Recharge    SS  ������ǿЧ Shield Strength\nCDR����ȴ���� CD Reduction                 MS ���������� Max Stamina\nDB   ���˺��ӳ� DMG Bonus\n\nע���˴��������˺��ӳ�ͳ��Ϊһ�����˺��ӳɡ��Ա���㡣", "Genshin Damage Calculator ID-HELP", MB_OK);
    _endthread();
}


int main()
{
    //�����ж�
    int chis, gettims = 1, chok = 0, chto1 = 0, chexit = 0, chidhelp = 0, chid1 = 0, chabout = 0, chmessage = 0, chin1 = 0, chin2 = 0, chin[13] = { 0 };
    //��ĸ�ж�
    char ok = 'A', exit = 'A', idhelp = 'A', about = 'A', message = 'A', chto = 'A';
    //�������
    char hole1 = 'A';
    int hole2 = 0;

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
    printf("���롰TOMESSAGE�����鿴���У�Ĭ�ϣ���ֵ\n");
    printf("Ҫ�����������ݣ����Լ�������ID����Ϣ��ֵ�����硰HP=1000\033����\n");
    printf("�����Ҫ������Ϣ�����򵼣����Գ��Լ��롰TOIDHELP���Ի�ð�����\n");
    printf("����������������롰OK�������롰TOEXIT�������˳���\n\n");
    printf("||||----------------------------------------------------------------------------------------------||||\n");
    printf("���������ݣ�");
    while (ok != 'K')
    {
        //����������������������������������part 1����������������������������������������//
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
                printf("����ʧ�ܣ������ԣ�");
                getcharb = getchar();
                gettims++;
            }
        }
        //����������������������������������part 2����������������������������������������--//
        for (;;)
        {
            if (gettims >= 2) {
                printf("\r");
                gettims--;
            }
            if (chok != 0 || chexit != 0 || chidhelp != 0 || chabout != 0 || chmessage != 0 || chin1 != 0) {//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
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
                idhelp = 'A';
                _beginthread(toid1, 0, NULL);
            }
            if (about == 'T') {
                MessageBox(NULL, "|----------------------------------------------------------------------------------|\n�汾��Ϣ:\n\n�����汾1.12.54\n�ڲ����԰汾20.34.12\n\n�������ۻ����ο����˺������ۡ�3.0��\n��л����������ǰ(��è����)   holiverse   ��ףw   ԭ��ð���� Yamios �ڴ�����\n            ��ӫ�ƹ� С�������й۲�   ���Ӱ���1   ��ӫ�ƹ� �   NGA Shallow��\n            NGA���Ᾱ�Ϲ�ң\n            �����ش�ѧ��tesiacoil   Shallow��   holiverse   �Ᾱ�Ϲ�ң   ���ʵ���\n\n������XUANLUN XUWU\n|-------------------------------��Ȩ���С���Ȩ�ؾ�---------------------------------|", "Genshin Damage Calculator ABOUT", MB_OK);
                about = 'A';
            }
            if (message == 'E') {
                printf("\b\b\b\b\b\b\b\b        \n\n������Ϣ���£�\n\n��������\n����ֵ���� Max HP                     %.0f\n������ ATK                            %.0f\n������ DEF                            %.0f\nԪ�ؾ�ͨ Elemental Mastery            %.0f\n�������� Max Stamina                  %.0f\n\n��������\n������ CRIT Rate                      %.0f%%\n�����˺� CRIT DMG                     %.0f%%\n���Ƽӳ� Healing Bonus                %.0f%%\n�����Ƽӳ� Incoming Healing Bonus     %.0f%%\nԪ�س���Ч�� Energy Recharge          %.0f%%\n��ȴ���� CD Reduction                 %.0f%%\n����ǿЧ Shield Strength              %.0f%%\n�˺��ӳ� DMG Bonus                    %.0f%%\n\n�������",hp1,atk1,def1,em1,ms1,cr1*100,cd1*100,hb1*100,ihb1*100,er1*100,cdr1*100,ss1*100,db1*100);
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