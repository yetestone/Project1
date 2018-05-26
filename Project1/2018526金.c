#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
	int num;
	char name[20];
	int math;
	int english;
	int computer;
	float  average;
} STUDENT;


int main()
{
	STUDENT myclass[5], *pStu = myclass;
	int i;
	const int N = 5;
	for (i = 0; i < N; i++, pStu++)
	{
		scanf("%d", pStu->num);
		scanf("%s", pStu->name);
		scanf("%d %d %d", pStu->math, pStu->english, pStu->computer);
	}
	//
	//................
	//
	return 0;
}