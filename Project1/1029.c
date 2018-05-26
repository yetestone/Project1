#include<stdio.h>
#include<stdlib.h>
int main(void) {

	int x, d, k = 0;

	x = 5782;

	do {
		d = x % 10;

		k = k * 10 + d;

		x /= 10;

	} while (x != 0);

	printf("%d\n", k);
	system("pause");
	return 0;

}