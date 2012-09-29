/*
  配列の各要素を先頭から順に1,2,3,4,5で初期化して表示
*/

#include<stdio.h>

int main()
{
	int i;
	int vc[5] = {1,2,3,4,5};	/* 初期化 */

	for (i = 0; i < 5; i++)
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

