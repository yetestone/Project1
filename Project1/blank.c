#include<windows.h>
int main()
{
	SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, 2);//�ر���ʾ��
	Sleep(10000); //�ȴ�ʮ����
	SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, -1);//����ʾ��
	return 0;

}
