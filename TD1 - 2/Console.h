#pragma once
#include <string>

class Console {
public:
	void clear();
	void moveTo(int, int);
	void textTo(int, int, const std::string&);
	void textTo(int, int, unsigned char);
};