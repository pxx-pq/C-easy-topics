#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
void drawPi(int left, int top, int right, int bottom, double stangle, double end);
int main() {
	initgraph(600, 600);
	setbkcolor(BLACK);
	cleardevice();
	int i = 1;
	int left = 0, top = 0, right = 600, bottom = 600;
	double pi = 3.1415, stangle = 0, end = 1.0 / 6 * pi;
	float offset = 1.0 / 6 * pi;
	for(i=1;i<=12;i++)//绘制成一个圆
	{
		drawPi(left, top, right, bottom, stangle, end);
		stangle = end;//起始等于终止位置
		end += offset;//终止位置等于下个1/6的位置
	}
	_getch();
	closegraph();
	return 0;
}
//绘制扇形
void drawPi(int left, int top, int right, int bottom, double stangle, double end) {
	setfillcolor(RGB(rand() % 256, rand() % 256, rand() % 256));//随意颜色的扇形
	fillpie(left, top, right, bottom, stangle, end);
}