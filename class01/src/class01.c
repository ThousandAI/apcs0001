/*
 ============================================================================
 Name        : class01.c
 Author      : Thousand AI
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	// 註解
	// 宣告變數
	char ch;
	int number;
	float score;
	ch = 'A'; // 指定運算子 (賦予 assign) 從右往左看
	// char ch = 'A' 可以宣告時直接賦予值
	number = 12;
	score = 36.5;
	printf("%c\n", ch); // 所對應的變數型態必須要正確
	printf("%d\n", ch); // ASCII code
	printf("%d\n", number);
	printf("%d\n", score); // score 是浮點數而若使用整數的方式印出，會產生錯誤的數值
	printf("%f\n", score);
	printf("%.2f",score);
	return 0;
}
