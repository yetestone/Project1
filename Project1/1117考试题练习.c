/*	#include <stdio.h>
	#include <string.h>
	void fun(char *s, char *t)
 {
		int i, sl;
		sl = strlen(s);
		for (i = 0; i<sl; i++)
			t[i] = s[i];
		for (i = 0; i<sl; i++)
			t[sl + i] = s[sl - 1 - i];
		
			t[2 * sl] = '\0';
	
}
	void main()
{
		char s[100], t[100];
		scanf("%s", s);
		fun(s, t);
		printf("%s", t);
	
}

  	#include "stdio.h"
  #include<stdlib.h>
  	void Dec2Bin(int m)
   {
	  	int bin[32], j;
	  	for (j = 0; m != 0; j++)
		  {
		  	bin[j] = m % 2;
	  	m = m / 2;
	   }
	  	for (; j != 0; j--)
		  	printf("%d", bin[j - 1]);
	  
}
  	void main()
   {
	  	int n;
	  	scanf("%d", &n);
	  	Dec2Bin(n);
	  itoa()
}
	
*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int i;
	scanf("%d", &i);
	float x[10] = { -1.5,2.1,6.3,3.2,-0.7,7.0,5.1,3.2,4.5,7.6 };
	float y[10] = { 3.5,7.6,8.1,4.5,6.0,1.1,1.2,2.1,3.3,4.4 };
	float s = 0.0,sr;
	for (i = 0; i <= 9; i++)
	{
		sr = (x[i] - 1.0)*(x[i] - 1.0) + (y[i] - 1.0)*(y[i] - 1.0);
		s = sqrt(sr) + s;
	}
	printf("%.6f", s);
	system("pause");

}