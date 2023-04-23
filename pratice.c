#include<stdio.h>
struct book {
	char name[8], thoter[8];
	float jiage;
	char chuBa[10];
}Stu;
void main() {
	printf("请输入书的信息：");
	scanf_s("%s%s%f%s", Stu.name,8, Stu.thoter,8, &Stu.jiage, Stu.chuBa,8);
	printf("%s%s%0.2f%s", Stu.name,  Stu.thoter, Stu.jiage, Stu.chuBa);
	getch();
}
