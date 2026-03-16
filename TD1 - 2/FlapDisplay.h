#pragma once
#include <vector>
#include <string>
#include "FlapModule.h"

class FlapDisplay{
public:
	FlapDisplay(int);

	void displayMessage(std::string);
	std::string currentDisplay();
	bool update();
private:
	std::vector<FlapModule> modules;
};

