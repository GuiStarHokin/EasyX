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
	putimage(0, 0, &img);
	settextcolor(RGB(255, 8, 163));
	settextstyle(30, 0, L"华文隶书"); // 文字高度100，宽度0为自适应
	outtextxy(95, 265, L"Pallete-IU");
	getchar();
	return 0;
}