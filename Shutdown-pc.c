#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char text[20];
Stop:
	printf("系统将在10分钟后关机，请输入“我是小狗”，否则将继续执行关机行为。\n");
	system("shutdown -s -t 600");
	scanf_s("%s", text,10);

	if (strcmp(text, "我是小狗") == 0) {

		printf("恭喜成功取消关机！");
		system("shutdown -a");
	}
	else goto Stop;
	return 0;
}
