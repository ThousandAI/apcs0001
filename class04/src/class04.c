/*
 ============================================================================
 Name        : class04.c
 Author      : Thousand AI
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


// 前置宣告
void show();
void say_hello(char name[]);
double get_bmi(double height, double weight);

int main(void) {

	// do while
	/*
	int num;
	scanf("%d", &num);
	do
		num++;  // 一定會先執行一次
	while(num < 0);
	printf("%d", num);
	*/

	// 使用者輸入 n，印出 0 1 2 3 4 5 ... n-1
	/*
	int n;
	int i = 0;
	scanf("%d", &n);
	do{
		printf("%d ", i);
		i++;
	}while(i < n);
	*/

	// break
	/*
	for(int i = 0; i < 10; i++){
		if(i == 6) break;
		printf("%d ", i);
	}
	*/

	//判斷是否質數
	/*
	int num;
	bool prime = true; // 預設為質數
	scanf("%d", &num);
	for(int i = 2; i < num; i++){
		if(num % 2 == 0){
			prime = false;
			break;
		}
	}
	if(prime) printf("%d 為質數", num);
	else printf("%d 不為質數", num);
	*/

	// 直到輸入值 -1，跳出迴圈算平均
	/*
	int num;
	int count = 0, sum = 0;
	double average = 0.0;
	while(true){
		scanf("%d", &num);
		if(num == -1 ) break;
		sum += num;
		count++;
	}
	average = (double) sum/count;
	printf("%.3f", average);
	*/

	// continue
	/*
	for(int i = 0; i < 10; i++){
		if(i % 2 == 0) continue;
		printf("%d ", i);
	}
	*/

	// 使用者輸入第一個數字表示接下來的成績，請將大於等於 60 分的成績算出總合
	/*
	int n;
	scanf("%d", &n);
	int sum = 0;
	for(int i = 0; i < n; i++){
		int temp;
		scanf("%d", &temp);
		if(temp < 60) continue;
		sum += temp;
	}
	printf("%d", sum);
	*/

	// Nested Loop
	/*
	for(int i = 0; i < 4; i++){
		//printf("%d: ", i);
		for(int j = 0; j < i+1; j++){
			printf("%d ", j);
		}
		printf("\n");
	}

	*/

	// 函式介紹
	// 系統定義函式，必須要引入 <stdlib.h>
	/*
	int ans = abs(-3); // 絕對值
	printf("%d", ans);
	*/

	// 使用者定義函式
	show();
	say_hello("Thousand");
	double ans = get_bmi(175,68);
	printf("%.2f", ans);
	return 0;
}


void show(){
	printf("Welcome!\n");
}

void say_hello(char name[]){
	printf("Hello %s\n", name);
}

double get_bmi(double height, double weight){
	double bmi;
	height /= 100;
	bmi = weight/(height * height);
	return bmi;
}


