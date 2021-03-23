#include <stdio.h>
int main()
{
char charType; // char형 변수 charType 선언
int integerType; // int형 변수 integerType 선언
float floatType; // float형 변수 floatType 선언
double doubleType; // double형 변수 doubleType 선언
printf("[----- 손영재 2018038080 -----]\n");
printf("Size of char: %ld byte\n",sizeof(charType)); // char형 변수 charType의 크기 출력 ... 1 byte
printf("Size of int: %ld bytes\n",sizeof(integerType)); // int형 변수 integerType의 크기 출력 ... 4 byte
printf("Size of float: %ld bytes\n",sizeof(floatType)); // float형 변수 floatType의 크기 출력 ... 4 byte
printf("Size of double: %ld bytes\n",sizeof(doubleType)); // double형 변수 doubleType의 크기 출력 ... 8byte
printf("-----------------------------------------\n");
printf("Size of char: %ld byte\n",sizeof(char)); // char 자료형의 크기 출력 ... 1 byte
printf("Size of int: %ld bytes\n",sizeof(int)); // int 자료형의 크기 출력 ... 4 byte
printf("Size of float: %ld bytes\n",sizeof(float)); // float 자료형의 크기 출력 ... 4 byte
printf("Size of double: %ld bytes\n",sizeof(double)); // double 자료형의 크기 출력 ... 4 byte
printf("-----------------------------------------\n");
printf("Size of char*: %ld byte\n",sizeof(char*)); // char형 포인터의 크기 출력... 4 byte
printf("Size of int*: %ld bytes\n",sizeof(int*));  // int형 포인터의 크기 출력... 4 byte
printf("Size of float*: %ld bytes\n",sizeof(float*)); // float형 포인터의 크기 출력... 4 byte
printf("Size of double*: %ld bytes\n",sizeof(double*)); // double형 포인터의 크기 출력... 4 byte
// 각각의포인터 크기가 4 byte, 즉 32 bit이므로 32 bit 환경의 컴파일러임을 알 수 있다.
return 0;
}