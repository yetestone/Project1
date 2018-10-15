//Problem I
//Time Limit : 1000 / 1000ms(Java / Other)   Memory Limit : 32768 / 32768K(Java / Other)
//Total Submission(s) : 84   Accepted Submission(s) : 33
//Problem Description
//ʱ�䣺2008��5��16�գ�����4�죩
//�ص㣺�봨��ţ��կ
//���Ǽ��������
//
//��ת��������ţ��կ��һ��ȫ��600���˵�Ǽ��կ�ӣ�����죬������Ȼ�ܳ�������¡¡�����������Ƕ���ɽ��ʯͷ���ϻ�������������������ͻ���ӵ������ƶ���վ������������������ʼ��¼������ܴ������
//ͻȻ���ҵ����������һ��Ǽ�����ˣ��������ޱȵ��𾪣�Ҫ֪��������һ���������£����������������������ô���ѵ��������ģ���������ʲô��
//
//
//���˱����Ǽ������£���ֻ��һֻ�۾�����ϡ���������������ط��棬���ǻ��˺ܾá�����������������úܵ͵�������Ѱ�š��������ļҾ����Աߣ�������Ŀ�����Ѿ������˿�������������ĿԶ�������������ܿ����ҵ�һ���ۼ���ԭ���Ҿ����Աߣ�����ץסһ�����ڣ�Ŭ�����Լ�վס�������ȥ�����ˣ�����һ�λص������ļҡ�
//
//
//һ�������Ĺ��ӣ�����װ��һ˿ϣ�������˺ܳ����ذᶯ�ڸ��ڹ����ϵ�н�������ҵ�һ��ľ���õ����ӣ������ݺᣬ�������ĸ���ȥ��������ľ��������˼�ˣ��������ӡ�
//
//
//�����ң�һ��ɢ��Ĺ���������ҵ���ǰ��������ΡΡ�����������ҳ��Ĺ��棬�ٴ�����������......
//��������ϸ�ذѹ���Ž���ǰ��Χ����Ҷ�Ȼ�о��������������ڵõ���Ԯ֮ǰ��������Ŀ����ˣ�������ǽ�ͨ�жϣ��ⲿ��Ԯ�����������˼��ֺα�����80��������壬ǿ��ʧȥ���˵�ʹ�࣬���»ص����ȡ�����������ķ��棬Ѱ��������棿�����������......
//
//
//�������������������૵����������仰���������ˣ��ҿ���ô��������Ƕ������������е�����΢������Ĺ��棬Զȥ��......
//
//PS: ����������Ƭ���Ҳ�֪����5��14�ž�������ɻ���һ�θ��봨��Ͷ��Ԯ���ʾ͵���ţ��կ�����ֵĴ�����û��ռΪ���У����Ǻ���䤱�����������Сʱ����ɽ�µ��سǽ���������
//	--------------------------------------------------------------------------------------------------------
//
//	�����Ҵ��������˵������������Ȼ���±����⣬���ֲ���һ������֯��Աȫ����ͨ��ͨ��һ������֯�ɹ���ʳ�����ڼ����²���һ�������ľ��־���Ҫȥ�г��ɹ����ף�ɢװ��������г���m�ִ��ף����ִ��׵ĵ��ۺ�������֪�����ʣ�Ϊ����������������������ܲɹ����������Ĵ����أ�
//
//
//	Input
//	�����������Ȱ���һ��������C����ʾ��C�����������ÿ����������ĵ�һ������������n��m��0<n <= 1000, 0<m <= 1000��, �ֱ��ʾ���ѵĽ��ʹ��׵����࣬Ȼ����m�����ݣ�ÿ�а���2������p��h(1 <= p <= 25, 1 <= h <= 100)���ֱ��ʾ���ۺͶ�Ӧ���׵�������
//
//
//	Output
//	����ÿ��������ݣ�������ܹ�������׵��������������Լ��辭���򲻹����еĴ��ף��� ÿ��ʵ�������ռһ�У�����2λС����
//
//
//	Sample Input
//	1
//	7 2
//	3 3
//	4 4
//
//
//	Sample Output
//	2.33
//



#include<stdio.h>
#include<stdlib.h>
typedef struct test
{
	int p;
	int h;
//	double mmm;
} STR;


int cmp(const void *a, const void *b)
{
	STR *aa = (STR *)a;
	STR *bb = (STR *)b;
	return(((aa->p)>(bb->p)) ? 1 : -1);
}

int main()
{
	int T;
	scanf("%d", &T);
	while (T--)
	{
		int money;
		int sort;
		STR a[1001];
		int i;
		double buy=0.0;
		scanf("%d %d", &money, &sort);
		for (i = 0; i < sort; i++)
		{
			scanf("%d %d", &a[i].p, &a[i].h);
//			a[i].mmm = (double)a[i].h / a[i].p;
		}
		qsort(a, sort, sizeof(a[0]), cmp);
		for (i = 0; i < sort; i++)
		{
			if (a[i].h*a[i].p <= money)
			{
				buy += a[i].h;
				money -= a[i].h*a[i].p;
			}
			else
			{
				buy += money * (double)1 / a[i].p;
				break;
			}
		}
		printf("%.2f\n", buy);
	}
}