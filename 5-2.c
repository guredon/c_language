
/* 配列の各要素に先頭から順に1,2,3,4,5を代入して表示 */

#include<stdio.h>

int main()
{
	int vc[5];	/* 要素数が5の配列 */

	vc[0] = 1;
	vc[1] = 2;
	vc[2] = 3;
	vc[3] = 4;
	vc[4] = 5;

	printf("vc[0] = %d\n", vc[0]);
	printf("vc[1] = %d\n", vc[1]);
	printf("vc[2] = %d\n", vc[2]);
	printf("vc[3] = %d\n", vc[3]);
	printf("vc[4] = %d\n", vc[4]);

	return 0;
}

