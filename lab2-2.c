#include <stdio.h>
int main()
{
int i;
int *ptr;
int **dptr; // int형 변수 i, int형 포인터 변수 ptr, int형 이중포인터 변수 dptr 선언

i = 1234; // i에 1234 대입

printf("[----- 손영재 2018038080 -----]\n");
printf("[checking values before ptr = &i] \n"); // ptr에 i의 주소를 참조시키기 전의 변수 값 확인
printf("value of i == %d\n", i); // i의 값 출력, 1234
printf("address of i == %p\n", &i); // i의 주소 출력
printf("value of ptr == %p\n", ptr); // ptr의 값 출력(쓰레기값)
printf("address of ptr == %p\n", &ptr); // ptr의 주소 출력

ptr = &i; /* ptr is now holding the address of i */

printf("\n[checking values after ptr = &i] \n");   // ptr에 i의 주소를 참조시킨 후의 변수 값 확인
printf("value of i == %d\n", i); // i의 값 출력...1234
printf("address of i == %p\n", &i); // i의 주소 출력, ptr에 i의 주소를 참조시키기 전과 동일
printf("value of ptr == %p\n", ptr); // ptr의 값 출력, i의 주소를 참조시켰으므로 윗줄의 address of i와 같은 값을 가짐
printf("address of ptr == %p\n", &ptr); // ptr의 주소 출력, ptr에 i의 주소를 참조시키기 전과 동일
printf("value of *ptr == %d\n", *ptr);  // ptr 포인터 변수로 i를 역참조, i의 값과 동일함...1234

dptr = &ptr; /* dptr is now holding the address of ptr */

printf("\n[checking values after dptr = &ptr] \n"); // 이중포인터 변수 dptr에 포인터 변수 ptr의 주소를 참조시킨 후 변수 값 확인
printf("value of i == %d\n", i); // i의 값 출력...1234
printf("address of i == %p\n", &i); // i의 주소 출력, ptr에 i의 주소를 참조시키기 전과 동일
printf("value of ptr == %p\n", ptr); // ptr의 값 출력, i의 주소를 참조시켰으므로 윗줄의 address of i와 같은 값을 가짐
printf("address of ptr == %p\n", &ptr); // ptr의 주소 출력, ptr에 i의 주소를 참조시키기 전과 동일
printf("value of *ptr == %d\n", *ptr); // ptr 포인터 변수로 i를 역참조, i의 값과 동일함...1234
printf("value of dptr == %p\n", dptr); // dptr의 값 출력, 포인터 변수 ptr의 주소를 참조시켰으므로 윗줄의 address of ptr과 같은 값을 가짐
printf("address of dptr == %p\n", &dptr); // dptr의 주소 출력
/* 바로 윗줄 코드는 과제 pdf 상 address of 'ptr' == ...형태로 나와있었으나
전체적인 코드의 흐름과 코드 후반 '&dptr'로 보아 dptr의 주소를 표현하고자 하는 의도로 보여 address of dptr로 수정했습니다. */
printf("value of *dptr == %p\n", *dptr); // dptr 이중포인터 변수로 포인터 변수 ptr 역참조함. ptr의 값, i의 주소값과 동일
printf("value of **dptr == %d\n", **dptr); // dptr 이중포인터로 이중으로 역참조하여 변수 i값을 출력함. *ptr 값과 동일함...1234

*ptr = 7777; /* changing the value of *ptr */ // ptr 포인터 변수로 i를 역참조하여 값을 변경, i의 값이 7777로 변경됨.

printf("\n[after *ptr = 7777] \n");
printf("value of i == %d\n", i); // i의 값 출력...7777
printf("value of *ptr == %d\n", *ptr); // ptr 포인터 변수로 i를 역참조, i의 값과 동일함...7777
printf("value of **dptr == %d\n", **dptr); // dptr 이중포인터로 두 번 역참조하여 변수 i값을 출력함. *ptr 값과 동일함...7777

**dptr = 8888; /* changing the value of **dptr */ // dptr 이중포인터 변수로 이중으로 역참조하여 i의 값을 변경, i의 값이 8888로 변경됨.

printf("\n[after **dptr = 8888] \n");
printf("value of i == %d\n", i); // i의 값 출력...8888
printf("value of *ptr == %d\n", *ptr); // ptr 포인터 변수로 i를 역참조, i의 값과 동일함...8888
printf("value of **dptr == %d\n", **dptr); // dptr 이중포인터로 두 번 역참조하여 변수 i값을 출력함. *ptr 값과 동일함...8888

return 0;
}