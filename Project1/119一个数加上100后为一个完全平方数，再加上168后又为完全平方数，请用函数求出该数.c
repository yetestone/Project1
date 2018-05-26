#include<math.h>
#include<stdio.h>

main()
{
	int a = -99;
	double t, k;
	while(a<30000)
	{
		t = sqrt(a+ 100);
		k = sqrt(a + 100 + 168);
		if ((int)t == t && (int)k == k)
			printf("%d\n", a);
		a++;
	}
	system("pause");

}