#pragma once
#include<stdlib.h>
#include<stdio.h>
#include<windows.h>

void message_windows() {

	
	system("start");
	system("title 100");
	system("mode con cols=90 lines=20");
	system("color f0");
	printf("1002jfhsfgj");
	ShowWindow(GetConsoleWindow(), SW_RESTORE);

	getchar();
	system("exit");

}
