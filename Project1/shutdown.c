#include<stdio.h>		//printf
#include<stdlib.h>		//system 
#include<string.h>		//strcat---exit
#include<windows.h>


int print()
{
	int n;
	//printf("*****c语言关机程序*****\n");
	printf("0:退出系统\n");
	printf("1:实现十分钟内定时关机\n");
	printf("2:立即关闭计算机\n");
	printf("3:注销计算机\n");	
	printf("4:黑屏\n");
	printf("请输入你要选择的功能0——4:\n");
	scanf("%d", &n);
	return n;
}

void main()
{
	system("title  c语言关机程序");        //设定dos窗口名称
	system("mode con cols=100 lines=100"); //列column，行lines，将dos窗口转化为100行，100列
	system("color 0B");                    //0(即前者)幕背景颜色，B（即后者）前背景颜色
	system("date /T");                     //打印系统当前时间  /T作用不太清楚 
	system("TIME /T");		       //打印系统当前日期

	char cmd[20] = "shutdown -s -t";         //-s关闭计算机，-t延迟时间，
	char t[5] = "0";
	char a[4][25];

	int i;
	int c = print();

	for (i = 0;i<4; i++)
	{
		gets(a[i]);
	}
	
	c = 4;
//	getchar();

	switch (c)
	{
	case 1:
		printf("您想在多少秒后自动关闭计算机？（0--600）\n");
		scanf("%s", t);
		system(strcat(cmd, t));    //"system -s -t 100"延迟100秒之后关闭计算机
		break;
	case 2:
		system("shutdown -p");	  //仅关闭本地计算机
		break;
	case 3:
		system("shutdown -l");    //-l:注销当前用户
		break;
	case 4:
		SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, 2);//关闭显示器
		Sleep(10000); //等待十秒钟
		SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, -1);//打开显示器
		break;
	case 0:
		break;
	default:
		printf("error\n");
	}
	system("pause");            //冻结屏幕，便于观察程序的执行结果
	exit(0);

}