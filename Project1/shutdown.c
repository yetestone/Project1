#include<stdio.h>		//printf
#include<stdlib.h>		//system 
#include<string.h>		//strcat---exit
#include<windows.h>


int print()
{
	int n;
	//printf("*****c���Թػ�����*****\n");
	printf("0:�˳�ϵͳ\n");
	printf("1:ʵ��ʮ�����ڶ�ʱ�ػ�\n");
	printf("2:�����رռ����\n");
	printf("3:ע�������\n");	
	printf("4:����\n");
	printf("��������Ҫѡ��Ĺ���0����4:\n");
	scanf("%d", &n);
	return n;
}

void main()
{
	system("title  c���Թػ�����");        //�趨dos��������
	system("mode con cols=100 lines=100"); //��column����lines����dos����ת��Ϊ100�У�100��
	system("color 0B");                    //0(��ǰ��)Ļ������ɫ��B�������ߣ�ǰ������ɫ
	system("date /T");                     //��ӡϵͳ��ǰʱ��  /T���ò�̫��� 
	system("TIME /T");		       //��ӡϵͳ��ǰ����

	char cmd[20] = "shutdown -s -t";         //-s�رռ������-t�ӳ�ʱ�䣬
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
		printf("�����ڶ�������Զ��رռ��������0--600��\n");
		scanf("%s", t);
		system(strcat(cmd, t));    //"system -s -t 100"�ӳ�100��֮��رռ����
		break;
	case 2:
		system("shutdown -p");	  //���رձ��ؼ����
		break;
	case 3:
		system("shutdown -l");    //-l:ע����ǰ�û�
		break;
	case 4:
		SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, 2);//�ر���ʾ��
		Sleep(10000); //�ȴ�ʮ����
		SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, -1);//����ʾ��
		break;
	case 0:
		break;
	default:
		printf("error\n");
	}
	system("pause");            //������Ļ�����ڹ۲�����ִ�н��
	exit(0);

}