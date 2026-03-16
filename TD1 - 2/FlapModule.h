#pragma once
#include <vector>

class FlapModule{
public:
	FlapModule();

	unsigned char currentSign() const;
	void display(unsigned char);
	bool update();
private:
	std::vector<unsigned char> availableSigns;
	int currentSignIndex;
	unsigned char signToDisplay;
};

