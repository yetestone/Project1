#include<stdio.h>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a>b?b:a)
main()
{
	int a[5000],number,score=0,i,maxscore,minscore;
	scanf("%d", &number);
	for (i = 1; i <= number; i++)
		scanf("%d", &a[i]);
	maxscore = a[1];
	minscore = a[1];
	i = 2;
	do{
		maxscore = max(a[i], maxscore);
		minscore = min(a[i], minscore);
		i++;
	}while (i <= number);
	for(i=1;i<=number;i++)
		score += a[i];
	score = score - maxscore - minscore;
	printf("%.2f", score*1.0 / (number - 2));
}