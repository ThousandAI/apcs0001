/*
 ============================================================================
 Name        : class05.c
 Author      : Thousand AI
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

// call by value (pass by value)
/*

void show(int number){
	number++;
	printf("This is show function, and number is: %d\n", number);
	printf("This is show function, and address of number is: %p\n", &number);
}

int main(void){
	int number = 12;
	show(number);
	printf("This is main function, and number is: %d\n", number);
	printf("This is main function, and address of number is: %p\n", &number);

}
*/


// 全域變數 vs. 區域變數
/*
int number = 12;

void show(){
	int score = 0;
	printf("This is show function, and number is: %d\n", number);
	printf("This is show function, and score is: %d\n", score);
}

int main(void) {
	printf("This is main function, and number is: %d\n", number);
	show();
	printf("This is main function, and score is: %d\n", score);
	return 0;
}
*/

// 操作全域變數
/*

int number = 12;

void show(){
	number++;
}

int main(void){
	printf("Number is: %d\n", number);
	for(int i = 0; i < 5; i++) show();
	printf("After show function, number is: %d\n", number);
	for(int i = 0; i < 10; i++) number++;
	printf("After main function, number is: %d", number);
	return 0;
}
*/


// 全域變數 vs. 區域變數 變數名稱相同容易混淆
/*
int number = 12;

void show(){
	number++;
	int number = 0;
	number++;
	printf("This is show function, and number is: %d\n", number);
}

int main(void){
	printf("This is main function, and number is: %d\n", number);
	show();
	printf("After show function, number is: %d\n", number);
	return 0;
}
*/



















