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

    hello0 = MessageBox(NULL, "        �������Ϊ������Ȥ���������ݽ����ο��������������!\n�������ȷ���ܷ�ƽ������������������ѡ��ȡ�������˳���", "Genshin Damage Calculator ��ʾ", MB_OKCANCEL);
    if (hello0 == IDCANCEL) return 0;
    hello1 = MessageBox(NULL, "        ��������δ�����������в��ԣ��������豸���ܴ��ڼ��������⣬����������쳣�����½⡣\n        ������Ļ�������豸�����𺦣�����ѡ��ȡ�������˳�", "Genshin Damage Calculator ��ʾ", MB_OKCANCEL);
    if (hello1 == IDCANCEL) return 0;
    MessageBox(NULL, "���ֲο���Ϣ��\n\n���׹�ʽ:\n\n�˺� = ������ * ������ * ������ * ������ * ��Ӧ�� * ������ * ������;\nDamage = A�� * M�� * B�� * C�� * E�� * D�� * R��;\n������ = A = Attack;\n������ = M = Damage Multipiler;\n������ = B = Damage Bonus;\n������ = C = Critical Bracket;\n��Ӧ�� = E = Elemental Reaction;\n������ = D = Defense;\n������ = R = Resistance��", "Genshin Damage Calculator", MB_OK);
    ShowWindow(GetConsoleWindow(), SW_RESTORE);

being:

    if (modile[0] == -1)modile[0] = 0;
    else if (modile[0] == modile_old) {
        ch1 = 1;
        MessageBox(NULL, "�Ѿ��Ǵ�ģʽ�ˣ�", "Genshin Damage Calculator Welcome", MB_OK);
    }
    else if (modile[0] == 0) {
        ch1 = 0;
        if (modile_old != 0) {
            modile_old = 0;
            ShowWindow(GetConsoleWindow(), SW_HIDE);
            MessageBox(NULL, "�������㲿��", "Genshin Damage Calculator Welcome", MB_OK);
            system("cls");
            ShowWindow(GetConsoleWindow(), SW_RESTORE);
        }
    }
    else {
        ch1 = 0;
        if (modile_old != 1) {
            modile_old = 1;
            ShowWindow(GetConsoleWindow(), SW_HIDE);
            MessageBox(NULL, "�˺����㲿��", "Genshin Damage Calculator Welcome", MB_OK);
            system("cls");
            ShowWindow(GetConsoleWindow(), SW_RESTORE);
        }
    }
    if (ch1 == 0) {
        printf("||||-----------------------------------------------------------------------------------------------||||\n");
        if(modile[0] == 0)
            printf("�˲���Ϊ������������Ҫǰ���˺������������롰TODAMAGE����\n\n");
        else 
            printf("�˲���Ϊ�˺���������Ҫǰ�����������������롰TOPOINT����\n\n");
        printf("�������ڴ˴��ڸ�������������ʹ��������׼ȷ��\n");
        printf("���롰TOMESSAGE�����鿴���У�Ĭ�ϣ���ֵ\n");
        printf("Ҫ�����������ݣ����Լ�������ID����Ϣ��ֵ�����硰HP=1000����\n");
        printf("�����Ҫ������Ϣ�����򵼣����Գ��Լ��롰TOIDHELP���Ի�ð�����\n");
        printf("����������������롰OK�������롰TOEXIT�������˳���\n\n");
        printf("||||- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -||||\n");
        printf("���������ݣ�");
    }
    for (;;) {
        number_finded = autoputin(putin, 0, id_of, 1, finded);
        ch0 = id_do(putin, finded, value,modile);
        printf("����ɹ�%d����\n�����룺", number_finded);
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
    printf("���㲿��");
    return 0;
}