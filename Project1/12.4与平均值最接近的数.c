#include<stdio.h>
#include<math.h>
int min(double a[], int n);
double ave(double a[], int n);
int main()
{
	double a[50], b[50];
	int n, i;
	double avetemp;
	scanf("%d", &n);
	for (i = 0; i<n; i++)
		scanf("%lf", &a[i]);
	avetemp = ave(a, n);
	printf("%.2f\n", avetemp);
	for (i = 0; i<n; i++)
	{
		b[i] = fabs(a[i] - avetemp);
	}
	printf("%.2f", a[minaa(b, n)]);
}
double ave(double a[], int n)
{
	double sum = 0;
	int i;
	for (i = 0; i<n; i++)
		sum += a[i];
	return sum / n;
}
int minaa(double a[], int n)
{
	int i, k = 0;
	double mindata = a[0];
	for (i = 0; i<n; i++)
	{
		if (a[i] < mindata)
		{
			mindata = a[i];
			k = i;
		}
	}
	return k;
}