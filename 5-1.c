
/* 5人の学生の点数を読み込んで合計点と平均点を表示 */

#include<stdio.h>

int main ()
{
	int uchida;	/* 内田君の点数 */
	int satoh;	/* 佐藤君の点数 */
	int sanaka;	/* 佐中君の点数 */
	int hiraki;	/* 平木君の点数 */
	int masaki;	/* 真崎君の点数 */
	int sum = 0;	/* 合計点 */

	puts("点数を入力してください。");
	printf("1番:");	scanf("%d", &uchida);
	printf("2番:");	scanf("%d", &satoh);
	printf("3番:");	scanf("%d", &sanaka);
	printf("4番:");	scanf("%d", &hiraki);
	printf("5番:");	scanf("%d", &masaki);

	sum += uchida;
	sum += satoh;
	sum += sanaka;
	sum += hiraki;
	sum += masaki;

	printf("合計点:%5d\n", sum);	// d,fの前に表示する桁数を書く
	printf("平均点:%5.1f\n", (double)sum / 5);   

	return (0);

}

/* 実行結果 

点数を入力してください。
1番:95
2番:83
3番:85
4番:63
5番:89
合計点:  415
平均点: 83.0

*/


