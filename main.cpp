#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <easyx.h>
#include <mmsystem.h> // mutil-media
#pragma comment(lib, "winmm.lib")

int main()
{
	initgraph(300, 300);
	mciSendString(L"open Pallete.mp3", 0, 0, 0); // media control interface send string
	mciSendString(L"play Pallete.mp3", 0, 0, 0);
	// RGB()->画图, 颜色常量
	IMAGE img;
	loadimage(&img, L"IU_-_Palette.jpg");
	// 批量绘图（缓冲绘图）
	BeginBatchDraw(); // 开始将图片绘制到缓冲区
	putimage(0, 0, &img);
	settextcolor(RGB(255, 8, 163));
	settextstyle(30, 0, L"华文隶书"); // 文字高度100，宽度0为自适应
	outtextxy(95, 265, L"Pallete-IU");
	EndBatchDraw(); // 结束缓冲区的绘制，将完整一帧的图像输出到窗口中
	/*
	透明绘图->.png原理
	准备两张图片，一张黑底白面，一张白底彩面
	IMAGE imgae1, image2;
	loadimage(&image1, L"xxx.jpg");
	loadimage(&image2, L"xxx.jpg");
	将两张图片绘制在同一个坐标
	分别使用二进制操作 SRCPAINT | SRCAND &
	黑色（0），白色（255）
	putimage(10, 10, &image1, SRCPAINT); // image1（黑底白面）和原图按位或结果为：黑色消失了，白色留下来
	putimage(10, 10, &image2, SRCAND); // image2（白底彩面）和修改后的原图按位与结果为:白色消失了，彩色留下来
	*/
	getchar();
	return 0;
}