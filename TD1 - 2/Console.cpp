#include "Console.h"
#include <iostream>

void Console::clear() {
	std::cout << "\033[2J";
}

void Console::moveTo(int x, int y) {
	std::cout << "\033[" + std::to_string(y) + ";" + std::to_string(x) + "H";
}

void Console::textTo(int x, int y, const std::string& text) {
	moveTo(x, y);
	std::cout << text;
}

void Console::textTo(int x, int y, unsigned char uc) {
	moveTo(x, y);
	std::cout << uc;
}