/*
 ============================================================================
 Name        : class03.c
 Author      : Thousand AI
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main(void) {
	// 控制流程
	/*
	int num = 5;
	if(num>10){
		printf("number is > 10.\n");
		printf("This is true.");
	}else{
		printf("number is < 10.\n");
		printf("This is false.");
	}
	*/

	/*
	int num;
	scanf("%d", &num);
	if(num > 10)
		printf("%d > 10", num);  // 如果敘述句只有一行可以不用大括號
	else if (num >= 5 && num <= 10) printf("5 <= %d <= 10", num); // 排版格式可以隨自己喜歡
	else
		printf("%d < 5", num);
	*/

	// 三元運算子
	/*
	int x ;
	scanf("%d", &x);
	int k = (x > 0)? x: -x;
	printf("The absolute value of %d is %d", x, k);
	*/

	int x, y, z;
	scanf("%d%d%d", &x, &y, &z);
	int max = (x > y) ? x : y;
	max = (z > max) ? z : max;
	printf("%d", max);
	return 0;























}
