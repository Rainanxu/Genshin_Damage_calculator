#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include"autoputin.h"
#include"id_to_do.h"
#include"if_id_like.h"

//lv 4.5.0

/*
* no      the number of the date
* name_c  the char array of CN language
* name_e  the char array of EN language
* id      the char array of ID
* value   the value of the date
* grup    the grup the date in
*         0   the ctrl of system
*         1   number int
*         2   number percentage double
* plus    the number of date belong to
*         0   null
*         1   system ctrl
*         2   value simple
*         3   value complex
*         4   value less
*         5   value more
*         6   system cold plus
*/
struct date {
    int no;
    char name_c[100];
    char name_e[100];
    char id[10];
    double value;
    int grup;
    int plus;
};
struct date_0 {
    int no;
    char *name_c;
    char *name_e;
    char *id;
    double value;
    int grup;
    int plus;
};
struct language {
    char* en;
    char* cn;
};
struct date date[100] = { 1 , "���" ,"OK" ,"OK", 0, 0, 1,2,"�ӵ�ƽ��", "Add Points To Balance", "topoint" ,0,0,1,3, "�˺�����", "Damage Calculation", "todamage" , 0,0,1,4,"�鿴��Ϣ",  "View Information", "message" ,0,0,1,5, "�������", "Command Help", "idhelp" ,0,0,1,6, "�˳�","Exit", "exit" ,0,0,1,7, "��ʾ������Ϣ", "Show More Information", "showmore" , 0,0,1,8,"��ʾ������Ϣ", "Show Less Information", "showless" ,0,0,1,9, "����", "About", "about" ,0,0,1,10, "ˢ��", "Refresh" ,"cls" ,0,0,1 ,
                          11,""};
double value[100] = { 0 };
struct language ls[100] = { "jfeih" };
//double property[7] = {2000,1.00,1.00,1.025,1.00,1.00,0.5};
int putin[1000] = { 0 }, number_now = 0, id_of[1000] = { ',','o','k',',','t','o','p','o','i','n','t',',','t','o','d','a','m','a','g','e',',','m','e','s','s','a','g','e',',','i','d','h','e','l','p',',','e','x','i','t',',','s','h','o','w','m','o','r','e',',','s','h','o','w','l','e','s','s',',','a','b','o','u','t',',',',','m','h','p','=',',','b','h','p','=',',','p','h','p','=',',','e','h','p','=',',',',','m','a','t','k','=',',','b','a','t','k','=',',','p','a','t','k','=',',','e','a','t','k','=',',',',','m','d','e','f','=',',','b','d','e','f','=',',','p','d','e','f','=',',','e','d','e','f','=',',','s','s','=',',','c','r','r','=',',','c','r','d','=',',','e','m','=',',','e','r','=',',','h','b','=',',','i','h','b','=',',','c','d','=',',','m','s','=',',','b','d','=',',','a','i','r','=',',',',','n','i','r','=',',',',','c','i','r','=',',',',','f','i','r','=',',',',','s','i','r','=',',',',','p','i','r','=',',',',','r','s','=',',','o','c','l','v','=',',','e','c','l','v','=',',',',','s','p','e','c','i','a','l',',','e','l','e','m','e','n','t',',',0,0 }, number_finded = 0, finded[100];
// 11/08/2022 int putin[1000], number_now=0, id_of[1000]={ ',','o','k',',','t','o','p','o','i','n','t',',','t','o','d','a','m','a','g','e',',','m','e','s','s','a','g','e',',','i','d','h','e','l','p',',','e','x','i','t',',','s','h','o','w','m','o','r','e',',','s','h','o','w','l','e','s','s',',','a','b','o','u','t',',',',','m','h','p','=',',','b','h','p','=',',','p','h','p','=',',','e','h','p','=',',',',','m','a','t','k','=',',','b','a','t','k','=',',','p','a','t','k','=',',','e','a','t','k','=',',',',','m','d','e','f','=',',','b','d','e','f','=',',','p','d','e','f','=',',','e','d','e','f','=',',','s','s','=',',','c','r','r','=',',','c','r','d','=',',','e','m','=',',','e','r','=',',','h','b','=',',','i','h','b','=',',','c','d','=',',','m','s','=',',','b','d','=',',','m','d','m','g','=',',','n','d','m','g','=',',','c','d','m','g','=',',','p','d','m','g','=',',','s','d','m','g','=',',','p','d','m','g','=',',','e','d','=',',','r','d','r','=',','}, number_finded = 0, finded[100];


int main(int array_main_number_in,char** array_main_in[])
{
    printf("\n  --\n%s\n", (char*)array_main_in[0]);
    //printf("\n  --\n%s\n", (char)array_main_in[1]);
    
    // l_e_c   0,english    1,chinese
    int l_e_c = 0, hello0 = -1, hello1 = -1;
    // model0=0 for point ,=1 for damage   ;   model1=0 for more message  ,=1 for less message  ;
    int model[2] = { -1,0 }, model_old = 0;
    /*
    for (int il0 = 0;;) {
        //if(if_like(array_main_in[il0], "cn", 4))
        if (if_like_chars(array_main_in[il0], "cn", 4))
            l_e_c=1;
        //if(if_like(array_main_in[il0], "en", 4))
        if (if_like_chars(array_main_in[il0], "en", 4))
            l_e_c=0;
        il0++;
        break;
        if (il0 >= array_main_number_in)break;
    }
    */
    int ch0 = 0, ch1 = 0;
    /* HELLO
    ShowWindow(GetConsoleWindow(), SW_HIDE);

    hello0 = MessageBox(NULL, "        �������Ϊ������Ȥ���������ݽ����ο��������������!\n�������ȷ���ܷ�ƽ������������������ѡ��ȡ�������˳���", "Genshin Damage Calculator ��ʾ", MB_OKCANCEL);
    if (hello0 == IDCANCEL) return 0;
    hello1 = MessageBox(NULL, "        ��������δ�����������в��ԣ��������豸���ܴ��ڼ��������⣬����������쳣�����½⡣\n        ������Ļ�������豸�����𺦣�����ѡ��ȡ�������˳�", "Genshin Damage Calculator ��ʾ", MB_OKCANCEL);
    if (hello1 == IDCANCEL) return 0;
    MessageBox(NULL, "���ֲο���Ϣ��\n\n���׹�ʽ:\n\n�˺� = ������ * ������ * ������ * ������ * ��Ӧ�� * ������ * ������;\nDamage = A�� * M�� * B�� * C�� * E�� * D�� * R��;\n������ = A = Attack;\n������ = M = Damage Multipiler;\n������ = B = Damage Bonus;\n������ = C = Critical Bracket;\n��Ӧ�� = E = Elemental Reaction;\n������ = D = Defense;\n������ = R = Resistance��", "Genshin Damage Calculator", MB_OK);
    */
    ShowWindow(GetConsoleWindow(), SW_RESTORE);

being:

    if (model[0] == -1)model[0] = 0;
    else if (model[0] == model_old) {
        ch1 = 1;
        MessageBox(NULL, "�Ѿ��Ǵ�ģʽ�ˣ�", "Genshin Damage Calculator Model", MB_OK);
    }
    else if (model[0] == 0) {
        ch1 = 0;
        if (model_old != 0) {
            model_old = 0;
            ShowWindow(GetConsoleWindow(), SW_HIDE);
            MessageBox(NULL, "�������㲿��", "Genshin Damage Calculator Welcome", MB_OK);
            system("cls");
            ShowWindow(GetConsoleWindow(), SW_RESTORE);
        }
    }
    else {
        ch1 = 0;
        if (model_old != 1) {
            model_old = 1;
            ShowWindow(GetConsoleWindow(), SW_HIDE);
            MessageBox(NULL, "�˺����㲿��", "Genshin Damage Calculator Welcome", MB_OK);
            system("cls");
            ShowWindow(GetConsoleWindow(), SW_RESTORE);
        }
    }
    if (ch1 == 0) {
        printf("||||-----------------------------------------------------------------------------------------------------||||\n");
        if (model[0] == 0)
            printf("�˲���Ϊ������������Ҫǰ���˺������������롰TODAMAGE����\n\n");
        else
            printf("�˲���Ϊ�˺���������Ҫǰ�����������������롰TOPOINT����\n\n");
        printf("�������ڴ˴��ڸ�������������ʹ��������׼ȷ��\n");
        if (model[1] == 0)printf("���롰SHOWMORE�����Ի�ø�ȫ�����ֵ֧�֡�\n");
        else {
            printf("���롰SHOWLESS�����Ի�ø�������ֵ֧�֡�\n");
            printf("���롰ELEMENT������Ԫ�ط�Ӧ�������\n");
        }
        printf("���롰TOMESSAGE�����鿴���У�Ĭ�ϣ���ֵ��\n");
        printf("Ҫ�����������ݣ����Լ�������ID����Ϣ��ֵ�����硰MHP=1000����\n");
        printf("�����Ҫ������Ϣ�����򵼣����Գ��Լ��롰TOIDHELP���Ի�ð�����\n");
        printf("����������������롰OK�������롰TOEXIT�������˳���\n\n");
        printf("||||- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -||||\n");
        printf("���������ݣ�");
    }
    for (;;) {
        number_finded = autoputin_new((char)putin, 0, date->id, 1, finded);
        //number_finded = autoputin(putin, 0, id_of, 1, finded);
        printf("����ɹ�%d����\n", number_finded);
        ch0 = id_do(putin, id_of, finded, value, model);
        printf("�����룺");
        if (ch0 == 1)goto damage;
        else if (ch0 == 2 || ch0 == 3) {
            model[0] = ch0 - 2;
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