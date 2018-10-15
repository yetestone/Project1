#include<stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	for (; t > 0; t--)
	{
		int n,out;
		scanf("%d", &n);
		switch (n%10)
		{
			case 1:
			case 5:
			case 6:
			case 0:out = n%10; break;
			case 2:switch (n%4)
			{
				case 1:out=2;break;
				case 2:out=4;break;
				case 3:out=8;break;
				case 0:out=6;break;
			default:
				break;
			}
				   break;
			case 3:switch(n%4)
			{
				case 1:out=3;break;
				case 2:out=9;break;
				case 3:out=7;break;
				case 0:out=1;break;
			default:
				break;
				
			} 
				   break;
			case 4:switch(n%2)
			{
				case 1:out=4;break;
				case 0:out=6;break;
			default:
				break;
				
			}
				   break;
			case 9:switch(n%2)
			{
				case 1:out=9;break;
				case 0:out=1;break;
			default:
				break;
				
			}
				   break;
			case 7:switch(n%4)
			{
				case 1:out=7;break;
				case 2:out=9;break;
				case 3:out=3;break;
				case 0:out=1;break;
			default:
				break;
				
			}
				   break;
			case 8:switch(n%4)
			{
				case 1:out=8;break;
				case 2:out=4;break;
				case 3:out=2;break;
				case 0:out=6;break;
			default:
				break;
				
			}
				   break;
			default:
			break;
		}
		/*i= out = n;
		out = n = i % 10;
		for (; i > 1; i--)
		{
			out = out % 10 * n;
		}*/
		printf("%d\n",out);
	}

	return 0;
}