/*
 ============================================================================
 Name        : class02.c
 Author      : Thousand AI
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdbool.h>

int main(void) {
	// 有錯誤警告時候記得看錯誤訊息是什麼
	/*
	int num;
	printf("How are you %d", num);
	*/

	// 輸入
	/*
	int num;
	scanf("%d", &num);
	printf("Your number is: %d", num);
	*/

	// 一次輸入多個數字
	/*
	int num;
	float score;
	scanf("%d%f",&num, &score);
	printf("Your number is: %d, and your score is %.2f", num, score);
	*/

	// eclipse 需要解決的問題
	/*
	int num;
	setbuf(stdout, NULL); // 加入這行才會讓 printf 按照順序顯示
	printf("Enter a number: ");
	scanf("%d", &num);
	return 0;
	*/

	// buffer 緩衝區
	/*
	setbuf(stdout, NULL);
	int num;
	float score;
	printf("Enter a number: ");
	scanf("%d", &num);
	printf("Enter a score: ");
	scanf("%f", &score);
	printf("Your number is: %d, and your score is: %.2f", num, score);
	*/

	// 算術運算子
	/*
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d + %d = %d\n", x, y, x+y);
	printf("%d - %d = %d\n", x, y, x-y);
	printf("%d * %d = %d\n", x, y, x*y);
	printf("%d / %d = %d\n", x, y, x/y);
	printf("%d %% %d = %d", x, y, x%y);
	*/

	// 算術運算子(轉型)
	/*
	int x, y;
	float res;
	scanf("%d %d", &x, &y);
	res = (float) x/y;
	printf("%.2f", res);
	*/

	// 餘數練習
	/*
	int num;
	scanf("%d", &num);
	printf("百位數字: %d\n", num/100);
	printf("十位數字: %d\n", (num/10)%10);
	printf("個位數字: %d", num%10);
	*/

	// 指定運算子
	/*
	int x = 1;
	x += 3;
	printf("x: %d\n", x);
	x -= 2;
	printf("x: %d\n", x);
	x *= 8;
	printf("x: %d\n", x);
	x /= 3;
	printf("x: %d\n", x);
	x %= 3;
	printf("x: %d\n", x);
	*/

	// x++ vs. ++x
	/*
	int x = 1;
	x++; // x=2
	printf("%d\n", x);
	++x; // x=3
	printf("%d", x);
	*/

	/*
	int x = 1;
	//int y = x++; // 先指定給 y 再使 x+=1
	int y = ++x; //　先使 x+=1 再指定給 y
	printf("y: %d, x: %d", y, x);
	*/

	// 交換數值
	/*
	setbuf(stdout,NULL);
	int x,y,temp;
	printf("x: ");
	scanf("%d", &x);
	printf("y: ");
	scanf("%d", &y);
	temp = x;
	x = y;
	y = temp;
	printf("x: %d\n",x);
	printf("y: %d",y);
	*/

	// overflow
	/*
	int num = 2147483647;
	printf("%d\n", num);
	num++;
	printf("%d", num);
	*/

	// boolean
	int x, y;
	scanf("%d %d", &x, &y);
	//bool z = (x==y);
	//bool z = (x > 3 && x < 10);
	//bool z = (x == 3 || x==5);
	bool z = !(x==3 || x==5);

	printf("%d", z); // 型態為 boolean 只有 true or false，使用整數型態表示就是 true: 1, false: 0

	return 0;

}
