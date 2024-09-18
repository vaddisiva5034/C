#include <stdio.h>

int main(){
	int number1 = 20;
	number1 = 300;
	int number2 = number1;
	number2 = 500;
	int number3 = number2;
	number2 = number1;
	number1 = number3;
	number3 = 200;
	number2 = number3 * 2;
	number3 = number2 *2; 
	printf("values are %d %d %d",number1,number2,number3); // 500 400 800
	
	//this is sigle line comment
	//printf("value : %d %d \n",number,number2); // value : 300 500
	return 0;
}