#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include"5.0.0.Info_Box.h"
#include"5.0.0.Put_Out.h"
#include"calculator_exart.h"
#include"IValidatable.h"


struct Ctrl {
	//use CH_CN or US_EN
	int CorE;
	//Point or Damage
	int PorD;
	//show Less or More
	int LorM;

};
struct HellowTextType {
	char text_zh[220];
	char title_zh[50];
	char text_en[300];
	char title_en[50];
};
struct Ctrl Ctrl = { 0,0,0 };
struct HellowTextType HellowText[] = { "        本程序仅为个人兴趣开发，数据仅供参考，请勿过分认真!\n如果您不确定能否平静看待计算结果，可以选择【取消】以退出。" ,"Genshin Damage Calculator 提示","    This program is only developed for personal interest, the data is for reference only, please do not be too serious! nIf you are not sure if you can calmly view the calculation results, you can select [Cancel] to exit.","Genshin Damage Calculator Tipes", 
									   "        本程序尚未经过大量运行测试，与您的设备可能存在兼容性问题，如出现运行异常，请谅解。\n        如果担心会对您的设备产生损害，可以选择“取消”以退出", "Genshin Damage Calculator 提示", "    This program has not been extensively tested for operation, there may be compatibility problems with your device, please understand if there is an abnormal operation.\n     If you're concerned about damage to your device, you can select [Cancel] to exit","Genshin Damage Calculator Tipes" ,
                                        };
long int Lines = 0;

int main(int InTimes, char** CrlCodes[])
{
	//Hellow
	{
		int IFHellow00 = 0;
		IFHellow00 = HellowBox(0, 0,Ctrl.CorE,HellowText[0]);
		//if (IFHellow00 == IDCANCEL) return 0;
		if (IFHellow00 = IfYes())return 0;
		int IFHellow01 = 0;
		IFHellow01 = HellowBox(0, 0, Ctrl.CorE, HellowText[1]);
		//if (IFHellow00 == IDCANCEL) return 0;
		if (IfYes())return 0;
		//IFHellow01 = HellowBox(0, 0, Ctrl.CorE, HellowText[2]);
	}
	//Start
	{
		PutOut(Lines,0,"hueuksfhsuhksg\nbfhsfgiadhbfsbvdj\n");
		return 0;
	}
}