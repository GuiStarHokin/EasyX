#define _CRT_SECURE_NO_WARNINGS
#include <graphics.h>
#include <conio.h>

int main()
{
	// ������ͼ����
	initgraph(640, 480);

	// ���������գ�ͨ�����������ӵķ�ʽʵ�֣�
	float H = 190; // ɫ��
	float S = 1; // ���Ͷ�
	float L = 0.7f; // ����
	for (int y = 0; y < 480; y++)
	{
		L += 0.0005f;
		setlinecolor(HSLtoRGB(H, S, L));
		line(0, y, 640, y);
	}

	// ���ʺ磨ͨ��ɫ�������ӣ�
	H = 0;
	S = 1;
	L = 0.5f;
	setlinestyle(PS_SOLID, 2); // �����߿�Ϊ2
	for (int r = 400; r > 344; r--)
	{
		H += 5;
		setlinecolor(HSLtoRGB(H, S, L));
		circle(500, 480, r);

	}

	// ��������˳�
	_getch();
	closegraph();
	return 0;
}