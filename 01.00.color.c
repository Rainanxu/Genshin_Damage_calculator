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

//�汾��01.20.26


int main()
{
    //�����ж�
    int chis, gettims = 1, chok = 0, chexit = 0, chidhelp = 0;
    //��ĸ�ж�
    char ok = 'A', exit = 'A', idhelp = 'A';


    //���ܲ���
    int ch0, ch1, getcharb;
    char id = 'A', is = 'A';



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
    printf("���롰\033[1;36mMESAGE\033[0m�����鿴���У�Ĭ�ϣ���ֵ\n");
    printf("Ҫ�����������ݣ����Լ�������ID����Ϣ��ֵ�����硰\033[1;35mHP=1000\033[0m����\n");
    printf("�����Ҫ������Ϣ�����򵼣����Գ��Լ��롰\033[1;32mIDHELP\033[0m���Ի�ð�����\n");
    printf("����������������롰\033[1;33mOK\033[0m�������롰\033[1;34mEXIT\033[0m�������˳���\n\n");
    printf("\033[1;44;35m||||----------------------------------------------------------------------------------------------||||\033[0m\n");
    printf("\033[1;36m���������ݣ�\033[0m");
    while (ok != 'K')
    {
        //����������������������������������part 1����������������������������������������//
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
                printf("\033[31m����ʧ�ܣ������ԣ�\033[0m");
                getcharb = getchar();
                gettims++;
            }
        }
        //����������������������������������part 2����������������������������������������--//
        for (;;)
        {
            if (gettims >= 2) {
                printf("\b\b\b\b\b\b\\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
                gettims--;
            }
            if (chok != 0 || chexit != 0 || chidhelp != 0) {//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
                printf("\033[1;36m����ɹ����������\033[0m");
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