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
	// RGB()->��ͼ, ��ɫ����
	IMAGE img;
	loadimage(&img, L"IU_-_Palette.jpg");
	// ������ͼ�������ͼ��
	BeginBatchDraw(); // ��ʼ��ͼƬ���Ƶ�������
	putimage(0, 0, &img);
	settextcolor(RGB(255, 8, 163));
	settextstyle(30, 0, L"��������"); // ���ָ߶�100�����0Ϊ����Ӧ
	outtextxy(95, 265, L"Pallete-IU");
	EndBatchDraw(); // �����������Ļ��ƣ�������һ֡��ͼ�������������
	/*
	͸����ͼ->.pngԭ��
	׼������ͼƬ��һ�źڵװ��棬һ�Ű׵ײ���
	IMAGE imgae1, image2;
	loadimage(&image1, L"xxx.jpg");
	loadimage(&image2, L"xxx.jpg");
	������ͼƬ������ͬһ������
	�ֱ�ʹ�ö����Ʋ��� SRCPAINT | SRCAND &
	��ɫ��0������ɫ��255��
	putimage(10, 10, &image1, SRCPAINT); // image1���ڵװ��棩��ԭͼ��λ����Ϊ����ɫ��ʧ�ˣ���ɫ������
	putimage(10, 10, &image2, SRCAND); // image2���׵ײ��棩���޸ĺ��ԭͼ��λ����Ϊ:��ɫ��ʧ�ˣ���ɫ������
	*/
	getchar();
	return 0;
}