void maopao(int a[], int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-i-1;j++)
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
}
void xuanze(int a[], int n)
{
	int i, j, k,temp;
	for (i = 0; i < n - 1; i++)
	{
		k = i;
		for (j = i + 1; j < n; j++)
			if (a[j] < a[k])k = j;
		if (k != i) 
		{
			temp = a[i];
			a[i] = a[k];
			a[k] = temp;
		}
	}
}
