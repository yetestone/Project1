#include<stdio.h>
#include<string.h>
void reverse(char b[]);
void exchang(char *a, char *b);
int main()
{
	char a[100], temp_b[200] = "";
	gets(a);
	strcpy(temp_b, a);
	reverse(temp_b);
	if (strcmp(temp_b, a) == 0)
		printf("YES");
	else
		printf("NO");
	return 0;
}
void reverse(char b[])
{
	int i, j;
	for (i = 0, j = strlen(b) - 1; i == j; i++, j--)
	{
		exchang(&b[i], &b[j]);
	}
}
void exchang(char *a, char *b)
{
	char temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include"stdio.h"

int fun(char a[],int n)

{

int i=n/2,flag=1;

	for(i=0;i<n;i++)

	{

	if(a[i]==a[n-i-1]);

	if(a[i]!=a[n-i-1])

	{

		flag=0;

		break;

	}

}

return flag;

}

int main()

{

char a[100];

int i,k;

gets(a);

for(i=0;a[i]!='\0';i++);

k=fun(a,i);

if(k==1)

printf("YES");

else

printf("NO");

return 0;

}

*/