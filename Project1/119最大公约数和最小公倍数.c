/*
#include<stdio.h>
#include<stdlib.h>
int gongyue(int a, int b)
{
	int i;
	i = a > b ? b : a;
	while (i>0)
	{
		if (a%i == 0 && b%i == 0)
			return i;
		i--;
	}
}
int gongbei(int a, int b)
{
	return a*b/gongyue(a, b);
}
main()
{
	int a, b;
	scanf_s("%d%d", &a, &b);
	printf("%d %d", gongyue(a, b),gongbei(a, b));
	system("pause");
}
*/
#include<stdio.h>
#include<stdlib.h>
funa(int a, int b)

{

	int i = (a>b) ? b : a, n;

	if (a == 1 || b == 1)

		return 1;

	for (n = 2; n <= i; n++)

		if (a%n == 0 && b%n == 0)

			return n;

	if (n>i)

		return 1;

}

funb(int a, int b)

{

	int n = (a<b) ? b : a;

	for (; n <= a*b; n++)

		if (n%a == 0 && n%b == 0)

			return n;

}

int main()

{

	int a, b;

	scanf_s("%d", &a);

	scanf_s("%d", &b);

	printf("%d %d\n", funa(a, b), funb(a, b));
	system("pause");
	return 0;

}