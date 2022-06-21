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
	/*
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
	*/

	// 每個變數型態所佔的記憶體容量
	/*
	char ch = 'A';
	short s = 0;
	int n1 = 0;
	unsigned int n2 = 0;
	long long int n3 = 0;
	float n4 = 0;  // 0.0
	double n5 = 0; // 0.0
	printf("The size of char is %u bytes\n", sizeof(ch));
	printf("The size of short is %u bytes\n", sizeof(s));
	printf("The size of integer is %u bytes\n", sizeof(n1));
	printf("The size of unsigned integer is %u bytes\n", sizeof(n2));
	printf("The size of long long integer is %u bytes\n", sizeof(n3));
	printf("The size of float is %u bytes\n", sizeof(n4));
	printf("The size of double is %u bytes\n", sizeof(n5));
	*/

	// 記憶體位置
	/*
	int number = 12;
	printf("%p", &number);
	*/

	// Pass by value
	int num_a = 10;
	int num_b = num_a;
	printf("%p\n", &num_a);
	printf("%p\n", &num_b);
	num_a = num_a + 1;
	printf("%d\n", num_a);
	printf("%d", num_b);

	return 0;
}
