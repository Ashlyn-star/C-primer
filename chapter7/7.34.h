#ifndef SCREEN_H_
#define SCREEN_H_

#include<iostream>

class Screen {
public:
	typedef std::string::size_type pos;
	void dummy_fcn(pos height) {
		cursor = width * height;		
	}
private:
	pos cursor=0;
	pos width=0, height=0;
	
};
#endif