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

// 矩陣
/*
int main(void){
	int scores[5] = {75, 82, 93, 60, 58};
	printf("%d\n", scores[0]);
	printf("%d\n", scores[1]);
	printf("%d\n", scores[2]);
	printf("%d\n", scores[3]);
	printf("%d\n", scores[4]);

	// 印出矩陣外的值不會出錯，這部分需要特別注意
	printf("%d\n", scores[5]);
	return 0;
}
*/

//矩陣宣告與給值方式，搭配迴圈呈現
/*
int main(void){
	//int scores[5] = {75, 82, 93, 60, 58};
	//int scores[5] = {75, 82, 93}; // {75, 82, 93, 0, 0};
	//int scores[5] = {}; // {0, 0, 0, 0, 0}
	int scores[] = {75, 82, 93}; // {75, 82, 93} 長度大小為 3

	for(int i = 0; i < 5; i++){
		printf("%d\n", scores[i]);
	}
}
*/

//先宣告好陣列長度，由使用者輸入值，並且印出
/*
int main(void) {
	int scores[6];

	for(int i = 0; i < 6; i++) {
		scanf("%d", &scores[i]);
	}
	for(int i = 0; i < 6; i++){
		printf("index %d: %d\n", i, scores[i]);
	}
	return 0;
}
*/

//矩陣記憶體位置配置
/*
int main(void) {
	int scores[6] = {};
	printf("%p %p\n", scores, &scores[0]);
	for(int i = 0; i < 6; i++){
		printf("index %d: %p\n", i, &scores[i]);
	}
	return 0;
}
*/

// call by reference
/*
void swap(int a[]){
	printf("This is swap function address: %p\n", a);
}

int main(void){
	int num[2] = {3, 5};
	printf("This is main function address: %p\n", num);
	swap(num);
	return 0;
}
*/

// 交換數值
/*
void swap(int a[]){
	int temp = a[0];
	a[0] = a[1];
	a[1] = temp;
}

int main(void){
	int num[2] = {3, 5};
	swap(num);
	printf("After swap function\n");
	for(int i = 0; i < 2; i++){
		printf("index %d: %d\n", i, num[i]);
	}
	return 0;
}
*/

// 二維矩陣
/*
int main(void){
	int scores[3][2] = {{2, 3}, {5, 7}, {6, 8}};
	printf("%d\n", scores[0][0]);
	printf("%d\n", scores[0][1]);
	printf("%d\n", scores[1][0]);
	printf("%d\n", scores[1][1]);
	printf("%d\n", scores[2][0]);
	printf("%d\n", scores[2][1]);
	return 0;
}
*/

// 二維矩陣 + 雙層迴圈
/*
int main(void){
	int scores[3][2] = {{2, 3}, {5, 7}, {6, 8}};
	//int scores[3][2] = {{2}, {5, 7}, {6}};
	printf("   c c\n");
	for(int i = 0; i < 3; i++){
		printf("r: ");
		for(int j = 0; j < 2; j++){
			printf("%d ", scores[i][j]);
		}
		printf("\n");
	}
	return 0;
}
*/

// 二維矩陣記憶體配置
/*
int main(void){
	int scores[3][2] = {{2, 3}, {5, 7}, {6, 8}};
	for(int i = 0; i < 3; i++){
		printf("%p ", scores[i]);
		for(int j = 0; j < 2; j++){
			printf("%p\n", &scores[i][j]);
		}
	}
	return 0;
}
*/

// 二維矩陣練習

int main(void){
	int scores[3][5] = {{3, 2, 5, 7, 8},
			    {1, 2, 8, 10, 4},
			    {6, 8, 2, 3, 8}};

	int row_sum[3] = {0, 0, 0};
	int col_sum[5] = {0, 0, 0, 0, 0};

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 5; j++){
			row_sum[i] += scores[i][j];
			col_sum[j] += scores[i][j];
		}
	}
	printf("row: ");
	for(int i = 0; i< 3; i++){
		printf("%d ", row_sum[i]);
	}
	printf("\ncol: ");
	for(int j = 0; j < 5; j++){
		printf("%d ", col_sum[j]);
	}
	return 0;
}










