#include "base.hpp"

struct Button {
	Rect button;
	Font font;
	Color color;
	String str;
	bool valid;
	Button(Rect button, Color color, int ft, String str, bool valid);
	//�ꏊ�T�C�Y�A�F�A�t�H���g�T�C�Y�A������A�g�p�\��
	void draw();
	bool onclick();
};