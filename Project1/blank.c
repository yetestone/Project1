#include<windows.h>
int main()
{
	SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, 2);//关闭显示器
	Sleep(10000); //等待十秒钟
	SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, -1);//打开显示器
	return 0;

}
