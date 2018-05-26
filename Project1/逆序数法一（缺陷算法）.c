#include<stdio.h>
#include<math.h>
int reverse(int n)
{
	printf("%d", n % 10);
	n = n / 10;
	if (n == 0)
	{
		return;
	}
	reverse(n);
}
main()
{
	int n;
	scanf("%d", &n);
	reverse(n);

}