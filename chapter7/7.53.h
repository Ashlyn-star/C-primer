#ifndef DEBUG_EX53_
#define DEBUG_EX53_

class Debug
{
public:
	constexpr Debug(bool b = true) : hw(b), io(b), other(b) {}
	constexpr Debug(bool h, bool i, bool o) : hw(h), io(i), other(o) {}

	constexpr bool amy() { return hw || io || other; }
	void set_io(bool b) { io = b; }
	void set_hw(bool b) { hw = b; }
	void set_other(bool b) { other = b; }
private:
	bool hw;
	bool io;
	bool other;
};

#endif
//这种类应该常用在使用在状态选择等固定选项的情况