#ifndef SCREEN_H_
#define SCREEN_H_

#include<string>
#include<iostream>

using namespace std;

class Screen {
public:
	typedef string::size_type pos;
	Screen() = default;
	Screen(pos ht, pos wd, int n) :height(ht), width(wd) {}
	Screen(pos ht, pos wd, char c) :height(ht), width(wd), contents(ht* wd, c) {}
	char get() const {
		return contents[cursor];
	}
	Screen& move(pos r, pos c);//返回的是那个return*this的screen类对象的引用
private:
	pos cursor;
	pos height = 0, width = 0;
	string contents;
};

inline Screen& Screen::move(pos r, pos c) {
	pos row = r * width;
	cursor = row + c;
	return *this;
}

#endif