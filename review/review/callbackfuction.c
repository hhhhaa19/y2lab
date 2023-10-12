#define _CRT_SECURE_NO_WARNINGS 1
#include"main.h"
int add(int a, int b) {
	return a + b;
}
int sub(int a, int b) {
	return a - b;
}
int div(int a, int b) {
	return a / b;
}
int time(int a, int b) {
	return a * b;
}
int opreation(int a, int b, int (*op)(int, int)) {
	op(a, b);
}