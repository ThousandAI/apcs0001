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
#include <stdbool.h>

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

	// 0: false, 非0: true
	/*
	if(0){
		printf("This is if.");
	}else{
		printf("This is else.");
	}
	*/

	// if/else if /else  vs. 多個 if
	/*
	int num = 3;
	if(num >= 2 ){
		printf("%d >= 2\n", num);
	}else if(num >= 1){
		printf("%d >= 1\n", num);
	}else{
		printf("%d >= 0", num);
	}

	if(num >= 2 ){
		printf("%d >= 2\n", num);
	}
	if(num >= 1){
		printf("%d >= 1\n", num);
	}
	if(num >= 0){
		printf("%d >= 0", num);
	}
	*/

	// 使用者輸入3個數字，並且找出最大值
	/*
	int x, y, z, max;
	scanf("%d%d%d", &x, &y, &z);
	if(x > y)
		max = x;
	else
		max = y;

	if(z > max)
		max = z;

	printf("max is: %d", max);
	*/

	// 三元運算子
	/*
	int x ;
	scanf("%d", &x);
	int k = (x > 0)? x: -x;
	printf("The absolute value of %d is %d", x, k);
	*/

	// 使用三元運算子找尋最大值
	/*
	int x, y, z;
	scanf("%d%d%d", &x, &y, &z);
	int max = (x > y) ? x : y;
	max = (z > max) ? z : max;
	printf("%d", max);
	*/

	// switch
	/*
	char grade;
	scanf("%c", &grade);
	switch (grade){
		case 'A':
			printf("You Got %c.\n", grade);
			printf("Excellent!!");
			break;
		case 'B':
			printf("You Got %c.\n", grade);
			printf("Well done.");
			break;
		case 'F':
			printf("You Got %c.\n", grade);
			printf("You failed");
			break;
		default:
			printf("Please Enter a valid grade");
	}
	*/

	// while
	/*
	int i = 0;
	while(i < 10){
		printf("%d ", i);
		i++;
	}
	*/

	// 無窮迴圈
	/*
	int i = 0;
	while(i < 10){
		printf("%d\n",i);
	}
	*/

	// 總和
	/*
	int num;
	int sum = 0,i = 1;
	scanf("%d", &num);
	while(i <= num){
		sum = sum + i;  // sum += i;
		i ++;
	}
	printf("%d", sum);
	*/

	// 1+2+...+n = sum
	/*
	int num;
	int sum = 0, i = 1;
	scanf("%d", &num);
	while(i <= num){
		if(i == num)
			printf("%d = ", i);
		else
			printf("%d + ", i);
		sum += i;
		i++;
	}
	printf("%d", sum);
	*/

	// for
	/*
	for(int i = 0; i < 10; i++){
		printf("%d ", i);
	}

	// printf("%d", i); 離開迴圈後就不能使用 i，因為是在迴圈裡面宣告
	*/

	// 迴圈外宣告
	/*
	int j;
	for(j=0; j < 10; j++){
		printf("%d ", j);
	}
	printf("\n");
	printf("%d", j);
	*/

	// 使用者輸入n，印出 0 1 2 3 4 5 ... n-1
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		printf("%d ",i);
	}

	return 0;

}
