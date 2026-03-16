#include "FlapDisplay.h"
#include <iostream>

FlapDisplay::FlapDisplay(int size) {
	for (int i = 0; i < size; i++) modules.push_back(FlapModule());
}

void FlapDisplay::displayMessage(std::string message) {
	int Min = modules.size(), Over = 0;
	if (message.size() < Min) {
		Over = Min - message.size();
		Min = message.size();
	}

	for (int modInd = 0; modInd < Min; modInd++) {
		modules[modInd].display(message[modInd]);
	}
	for (int modInd = Min; modInd < Over+Min; modInd++) {
		modules[modInd].display(127);
	}
}

std::string FlapDisplay::currentDisplay() {
	std::string currDisp;
	for (int modInd = 0; modInd < modules.size(); modInd++) {
		currDisp += modules[modInd].currentSign();
	}
	return currDisp;
}

bool FlapDisplay::update() {
	bool update = false;
	for (int modInd = 0; modInd < modules.size(); modInd++) {
		update |= modules[modInd].update();
	}
	return update;
}