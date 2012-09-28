
/* 配列の各要素に先頭から順に1,2,3,4,5を代入して表示 */

#include<stdio.h>

int main()
{
	int i;
	int vc[5];	/* 要素数が5の配列 */

	for(i = 0; i < 5; i++)
		vc[i] = i + 1;

	for(i = 0; i < 5; i++)
		printf("vc[%d] = %d\n", i, vc[i]);

	return 0;
}


/* 実行結果

vc[0] = 1
vc[1] = 2
vc[2] = 3
vc[3] = 4
vc[4] = 5

*/

