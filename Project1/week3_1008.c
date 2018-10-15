#include<stdio.h>
#include<stdlib.h>

int cmp(const void *a, const void *b)
{

	return	(*(int *)a>*(int *)b) ? 1 : -1;
}


int main()
{
	int N;
	
	while (scanf("%d", &N))
	{
		int ch[101];
		int jp[101];
		int i,
		ch_mark=0, jp_mark=0;
		if (N == 0)
			break;
		for (i = 0; i < N; i++)
			scanf("%d", ch + i);
		for (i = 0; i < N; i++)
			scanf("%d", jp + i);
		qsort(ch, N, sizeof(ch[0]), cmp);
		qsort(jp, N, sizeof(jp[0]), cmp);
		for (i = 0; i < N; i++)
		{
			if (ch[i] == jp[i])
			{
				ch_mark++;
				jp_mark++;
			}
			else
				(ch[i] > jp[i]) ? (ch_mark += 2 ): (jp_mark += 2);
		}
		printf("%d vs %d\n", ch_mark, jp_mark);
	}
	return 0;
}