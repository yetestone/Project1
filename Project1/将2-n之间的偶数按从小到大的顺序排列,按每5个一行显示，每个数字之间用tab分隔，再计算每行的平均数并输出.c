/*��2-n֮���ż������С�����˳������,��ÿ5��һ����ʾ��ÿ������֮����tab�ָ����ټ���ÿ�е�ƽ���������
�����ʽ��
����300���ڵ�����n

�����ʽ��
���������

����������
58
*/
#include<stdio.h>
int kkkk(int j);
int ave(int a[])
{
	int sum=0,flag=0,t;
	for (t = 0; t <= 4; t++)
	{
		if (*(a+t)!= 0)
			flag++;
		sum += *(a + t);
	}
	return sum /flag;
}
main()
{
	int n,i,imax,j;
	int a[150][4];
	scanf("%d", &n);// ����һ��С��300��������
	if (n % 2 != 0)//n��ż��ʱ��1
		n -= 1;
	imax = ((n / 2) % 5 != 0 ? ((n / 2) / 5) + 1 : (n / 2) / 5);//ȷ���������
	for (i = 0; i < imax; i++)//��ʼ������ȫΪ0
		for (j = 0;j < 5; j++)
			a[i][j] = 0;
	for (i = 0;i<imax; i++)//�б���i
	{
		for (j=0;j<5;j++)//��ֵ�����ͬ�����У�
		{
			a[i][j] = 10 * i + kkkk(j);
			if (i * 5 + j+1 == n / 2)
			{
				printf("%d\t", a[i][j]);
					break;
			}
			switch (j)
			{
			case 0:printf("%d\t", 2 + 10 * i); break;
			case 1:printf("%d\t", 4 + 10 * i); break;
			case 2:printf("%d\t", 6 + 10 * i); break;
			case 3:printf("%d\t", 8 + 10 * i); break;
			case 4:printf("%d\t", 10 + 10 * i); break;
			default:break;
			}
		}
		printf("\n");
	}

	for (i = 0; i < imax; i++)
	{
		printf("��%d���ƽ������%d", i+1, ave(&a[i][0]));//���ƽ����
		printf("\n");
	}
}
int kkkk(int j)
{
	switch (j)
	{
		case 0:return(2); break;
		case 1:return(4); break;
		case 2:return(6); break;
		case 3:return(8); break;
		case 4:return(10); break;
		default:return 0;
	}
}

#include<stdio.h>

int main()

{

	int k,a[500],i,l,n=0,m=0;

	float b[101];

	scanf("%d",&k);

	//����ż������,��n��

	for(i=2;i<=k;i++)

	{

		if(i%2==0)

			a[n++]=i;

	}

//���ż����������ÿ�е�ƽ����

	for(i=0,l=0,b[l]=0;i<n;i++)
	{

//���ż��

		printf("%d\t",a[i]);

		if((i+1)%5==0)

			printf("\n");

		b[l]=b[l]+a[i];

		m++;

		if((i+1)%5==0)
		{

			b[l]=b[l]/m;

			l++;
			b[l]=0;m=0;

		}

}

//���n���ܱ�5�������������һ��

	if(n%5!=0)
		b[l]=b[l]/m;



	printf("\n");

	for(l=0;l<n*1.0/5;l++)

	{

	printf("��%d���ƽ������%.0f\n",l+1,b[l]);

	}

return 0;

}



