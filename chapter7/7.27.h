#ifndef SCREEN_H_
#define SCREEN_H_

#include<string>
#include<iostream>

using namespace std;

class Screen {
public:
	typedef string::size_type pos;
	Screen() = default;
	Screen(pos ht, pos wd) :height(ht), width(wd) {}
	Screen(pos ht, pos wd, char c) :height(ht), width(wd), contents(ht* wd, c) {}
	char get() const {
		return contents[cursor];
	}
	Screen& move(pos r, pos c);//返回的是那个return*this的screen类对象的引用
	Screen& set(pos r, pos col, char ch);
	Screen& set(char ch);
	Screen& display(ostream& os) {
		do_display(os);
		return *this;
	}
	const Screen& display(ostream& os) const{
		do_display(os);
		return *this;
	}
private:
	pos cursor;
	pos height = 0, width = 0;
	string contents;
	void do_display(ostream& os) const {
		os << contents;
	}
};

inline Screen& Screen::move(pos r, pos c) {
	pos row = r * width;
	cursor = row + c;
	return *this;
}

inline Screen& Screen::set(char ch) {
	contents[cursor] = ch;
	return *this;
}

inline Screen& Screen::set(pos r,pos col, char ch) {
	contents[r * width + col] = ch;
	return *this;

}

#endif