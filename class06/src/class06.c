/*
 ============================================================================
 Name        : class06.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <ctype.h>
#include <string.h>


//
//int main(void) {
//
//	// 字元，ASCII 碼
//	/*
//	char n = 'A';
//	printf("char: %c\n", n);
//	printf("ASCII: %d\n", n);
//	*/
//
//
//	// 字元函式，記得 include <ctype.h>
//	/*
//	char a = 'a';
//	char b = 'B';
//	a = toupper(a);
//	b = tolower(b);
//	printf("%c %c", a, b);
//	*/
//
//	// 字串(字元陣列)定義
//
//	/*
//	// 1. 字元方式給值
//	//char s[] = {'W', 'e', 'l', 'c', 'o', 'm', 'e', ' ', 'a', 'p', 'c', 's', '!', '!','\0'};
//
//	// 2. 字串方式給值，定義時未給長度
//	//char s[] = {"Welcome apcs!!"};
//
//	// 3. 字串方式給值，在定義時就給予長度
//	char s[20] = {"Welcome apcs!!"};
//
//	// 使用迴圈逐一印出字元
//	for(int i = 0; i < 14; i++){
//		printf("%c", s[i]);
//	}
//	*/
//
//	// 印出字串
//	/*
//	char s[20] = {"Welcome apcs!!"};
//	for(int i = 0; i < 20; i++){
//		printf("%c", s[i]);
//	}
//	printf("\n");
//	for(int i = 0; i < 20; i++){
//		printf("%d ", s[i]);
//	}
//	printf("\n");
//	printf("%s", s);
//	*/
//
//	// 字串記憶體配置
//	/*
//	char s[20] = {};
//	s[0] = 'a';
//	s[1] = 'p';
//	s[2] = 'c';
//	s[3] = 's';
//	s[4] = '0';
//	s[5] = '1';
//	s[6] = '\0'; // 0
//	s[7] = 'H';
//
//	for(int i = 0; i < 20; i++){
//		printf("%c", s[i]);
//	}
//	printf("\n");
//
//	printf("%s", s);
//
//	*/
//
//	// 計算字串長度
//	/*
//	char s[] = {"Welcome apcs!!"};
//	unsigned int len1 = sizeof(s) / sizeof(char);
//	printf("%u\n", len1);
//	unsigned int len2 = strlen(s);
//	printf("%u", len2);
//	*/
//
//	// 輸入字串
//	/*
//	char name[20];
//	setbuf(stdout, NULL);
//	printf("Please Enter your name: ");
//	scanf("%s", name);
//	printf("%s", name);
//	*/
//
//	// 解決輸入字串空白的問題
//	/*
//	char name[20];
//	setbuf(stdout, NULL);
//	printf("Please Enter your name: ");
//
////	for(int i = 0 ; i < 19; i++){
////		scanf("%c", &name[i]);
////	}
//
//	fgets(name, sizeof(name), stdin);
//	printf("%s", name);
//	*/
//
//	// 指標變數
//	/*
//	int x = 3;
//	int *px = &x;
//	printf("x address: %p\n", &x);
//	printf("px value: %p\n", px);
//	printf("px address: %p\n", &px);
//	*/
//
//	// 透過指標變數操作值
//	/*
//	int x = 3;
//	int *px = &x;
//	printf("%d\n", *px);
//	*px = 5;
//	printf("%d", x);
//	*/
//
//	// 指標變數記憶體配置
//	/*
//	int x = 3;
//	double y = 5;
//	int *px = &x;
//	double *py = &y;
//	printf("px: %u bytes, py: %u bytes\n", sizeof(px), sizeof(py));
//	*/
//
//	// 1. 指標變數一定要存放有效的記憶體位置，以下程式碼是錯誤的，因為 px 並未指向一個有效的記憶體位置
//	// 2. 不能自己給予一個記憶體位置
//
//	/*
//	int *px;
//	px = '0061FECC';
//	*px = 100;
//	printf("%d\n", *px);
//	*/
//
//	// 指標變數互相 assign
//	/*
//	int num = 3;
//	int *px1, *px2;
//	px1 = &num;
//	px2 = px1;
//	printf("num address: %p\n", &num);
//	printf("px1 value: %p\n", px1);
//	printf("px1 address: %p\n", &px1);
//	printf("px2 value: %p\n", px2);
//	printf("px2 address: %p\n", &px2);
//	*px1 += 3;
//	*px2 += 6;
//	printf("num value: %d\n", num);
//	*/
//
//	return 0;
//}




// 指標函數交換練習 (call by value)
/*
void swap(int x, int y){
	int temp = x;
	x = y ;
	y = temp;
}

int main(void){
	int x,y;
	setbuf(stdout, NULL);
	printf("x: ");
	scanf("%d", &x);
	printf("y: ");
	scanf("%d", &y);
	swap(x, y);
	printf("After swap function\n");
	printf("x: %d\ny: %d", x, y);
}
*/

// 指標函數交換數值 (call by reference)
/*
void swap(int *px, int *py){
	int temp = *px;
	*px = *py;
	*py = temp;
}

int main(void){
	int x, y;
	setbuf(stdout, NULL);
	printf("x: ");
	scanf("%d", &x);
	printf("y: ");
	scanf("%d", &y);
	swap(&x, &y);
	printf("After swap function\n");
	printf("x: %d\ny: %d", x, y);
}

*/

// *(&px) vs. &(*px)
/*
int main(void){
	int x = 3;
	int *px = &x;
	printf("*(&px): %p\n", *(&px));
	printf("&(*px): %p\n", &(*px));
	printf("*(&x): %d\n", *(&x));
	// printf("&(*x): %d\n", &(*x)); 錯誤觀念

}
*/

// 指標與陣列
/*
int main(void){
	int arr[5] = {0,1,2,3,4};
	int *parr = arr; // &arr[0]
	printf("%d\n", *parr);
	printf("%d\n", *(parr+1));
	printf("%d\n", *(parr+2));
}
*/

// double
/*
int main(void){
	double arr[5] = {0,1,2,3,4};
	double *parr = arr;
	for(int i = 0; i < 5; i++){
		printf("%.2f\n", *(parr));
		parr++;
	}
}
*/

// 指標與陣列 (解答)
/*
int main(void){
	double arr[5] = {57, 23, 88, 32, 100};
	double *parr = arr;
	for(int i = 0; i < 5; i++){
		*parr = *parr *0.8;
		parr++;
	}
	for(int i = 0; i < 5; i++){
		printf("%.2f\n", arr[i]);
	}
}
*/

// *(parr + i) 與 arr[i]

/*
int main(void){
	int arr[5] = {0,1,2,3,4};
	printf("%d\n", *(arr + 1));
	printf("%d\n", arr[1]);
	printf("%d\n", 1[arr]);
}
*/

// 指標與陣列，參數使用指標
/*
void f(int *parr, int size){
	for(int i = 0; i < size; i++){
		 *parr = *parr * *parr;
		 parr++;
		 // parr[i] = parr[i] * parr[i];
	}
}

int main(void){
	int arr[5] = {0,1,2,3,4};
	f(arr, 5);
	for(int i = 0 ; i < 5; i++){
		printf("%d\n", arr[i]);
	}
}
*/

// 指標與陣列，常犯的錯誤

int main(void){
	int arr[3] = {0,1,2};
	int brr[3] = {3,4,5};
	int *parr = arr;
	printf("%p %p\n", parr, arr);
	parr = brr;
	brr = arr;
	//printf("%p %p\n", ++parr , ++arr); // 錯誤，不能夠對矩陣重新給位置
}
