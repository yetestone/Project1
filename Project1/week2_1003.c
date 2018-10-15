#include<stdio.h>
//void operation(int data[], int n);
int gcd(int da, int xiao);
int main()
{
	int input_number;
	scanf("%d", &input_number);
	while(input_number>0)
	{
		int data[50],i=0,temp=1,n;

		scanf("%d", &n);
		for(;i<n;i++)
		
		{
			scanf("%d", &data[i]);
			temp = data[i] / gcd(temp, data[i])*temp;
			
		} 
	/*	operation(data,i);*/
		printf("%d\n", temp);
		input_number--;
	}

	return 0;

}

//void operation(int data[],int n)
//{
//	int j=0;
//	int temp=1;
//	for (; j < n; j++)
//	{
//		temp = data[j]/gcd(temp, data[j])*temp;
//	}
//	printf("%d\n",temp);
//
//}

int gcd(int da,int xiao)
{
	if (xiao == 0)
		return da;
	return gcd(xiao, da%xiao);

}