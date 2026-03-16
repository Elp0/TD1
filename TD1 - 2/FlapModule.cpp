#include "FlapModule.h"
#include <iostream>

FlapModule::FlapModule() : signToDisplay(178), currentSignIndex(26) {
	for (int i = 0; i < 26; i++) {
		availableSigns.push_back('A'+i);
	}
	availableSigns.push_back(178);
}

unsigned char FlapModule::currentSign() const{
	return availableSigns[currentSignIndex];
}

void FlapModule::display(unsigned char value) {
	//verifier si le symbole demander est possible à afficher
	for (int checkInd = 0; checkInd < availableSigns.size(); checkInd++) {
		if (value == availableSigns[checkInd]) {
			signToDisplay = value;
			return;
		}
	}
	//sinon afficher le symbole #178
	signToDisplay = 178;
}

bool FlapModule::update() {
	if (currentSign() == signToDisplay) return false;
	
	currentSignIndex++;
	if (currentSignIndex >= availableSigns.size()) currentSignIndex = 0;

	return true;
}