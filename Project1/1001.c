#include<stdio.h>
// 1005
int main() {

	
	int p;
	
	int a,sum;
	int i;
	scanf("%d", &p);
	
		
		while (scanf("%d", &i))
		{
			sum = 0;
			/*if (i == 0)
				break;*/
			for (; i > 0; i--)
			{
				scanf("%d", &a);
				sum += a;
			}
			if(p==1)
				printf("%d\n", sum);
			else	
				printf("%d\n\n", sum);
			p--;
			if (p == 0)
				break;
				

		}
	
	return 0;

}