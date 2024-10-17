#include<stdio.h>
#include"if_id_like.h"

int put_in(int a[], char* b[]) {

}

int main(void) {
    int temp[100] = { 0,1,2,3,4,5,6,7,8 };
    for (int i = 0;;) {
        printf("\n  %d  || %d |\n", temp[i], &temp[i]);
        i++;
    }
}
int main001(void) {
    char a[100] = { 0 }, b[100] = { 0 };
    int x = 3;
    put_in("asidfhh\nekdvnb", "adef", "adef", 1, 2, 'asd', x);
    for (int times = 0;;) {
        printf("\n\ninput a:");
        for (int i = 0;;) {
            if (a[i] == 0 && a[i + 1] == 0 && a[i + 2] == 0)break;
            else a[i] = 0;
            i++;
        }
        for (int i = 0;;) {
            if (b[i] == 0 && b[i + 1] == 0 && b[i + 2] == 0)break;
            else b[i] = 0;
            i++;
        }
        for (int i = 0, i1 = 0;;) {
            i1 = scanf_s("%c", &a[i],1);
            if (i1 == 0)getchar();
            if (a[i] == 10) {
                a[i] = 0;
                break;
            }
            i++;
        }
        printf("\ninput b:");
        for (int i = 0, i1 = 0;;) {
            i1 = scanf_s("%c", &b[i],1);
            if (i1 == 0)getchar();
            if (b[i] == 10) {
                b[i] = 0;
                break;
            }
            i++;
        }
        printf("\n\n get is %d\n------------------------------\n", if_like(a, b, x));
        printf("\n\n get is %d\n-------------\n", if_like(a, "adb", x));

        times++;
        if(times==10)return 0;
    }
}



















/*
struct date {
    int on;
    char* name_c;
    char* name_e;
    char* id;
    double value;
    int grup;
    int plus;
};
struct date date[100] = { 1 , "完成" ,"OK" ,"ok", 0, 0, 1,2,"加点平衡", "Add Points To Balance", "topoint" ,0,0,1,3, "伤害计算", "Damage Calculation", "todamage" , 0,0,1,4,"查看信息",  "View Information", "message" ,0,0,1,5, "命令帮助", "Command Help", "idhelp" ,0,0,1,6, "退出","Exit", "exit" ,0,0,1,7, "显示更多信息", "Show More Information", "showmore" , 0,0,1,8,"显示较少信息", "Show Less Information", "showless" ,0,0,1,9, "关于", "About", "about" ,0,0,1,10, "刷新", "Refresh" ,"cls" ,0,0,1 ,
                          11,0,0,0,0,0,0,0,0,0,0,0,0,0 };

int main(int array_main_number_in, char* array_main_in[])

{
    printf("\n\n\n\n----------------------\n%s\n----------------------\n", array_main_in[0]);
    for (int i = 0;;) {
        printf("\n NO=%d  %s  %s  %s  Value=%d  %d  %d\n", date[i].on, date[i].name_c, date[i].name_e, date[i].id, (int)date[i].value, date[i].grup, date[i].plus);
        i++;
        if (date[i].on == 0)break;
    }
    for (int i = 0,i1=0;;) {
        char* p = date[i].id;
        printf("\n");
        for (;;) {
            if (*p == 0)break;
            printf("%c  ",*p);
            p++;
        }
        printf("\n");
        i++;
        if (date[i].on == 11)break;
    }
    return 0;
}*/