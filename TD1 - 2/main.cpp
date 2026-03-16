#include <iostream>
#include <chrono>
#include <thread>

#include "FlapModule.h"
#include "FlapDisplay.h"
#include "Console.h"

int main(int argc, char* argv) {
	Console console;


	//Test de FlapModule
	/*FlapModule flapMod;

	console.textTo(10, 10, flapMod.currentSign());
	flapMod.display('T');
	while (flapMod.update()) {
		console.textTo(10, 10, flapMod.currentSign());
		std::this_thread::sleep_for(std::chrono::milliseconds(100));
	}
	std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	flapMod.display('E');
	while (flapMod.update()) {
		console.textTo(10, 10, flapMod.currentSign());
		std::this_thread::sleep_for(std::chrono::milliseconds(100));
	}
	std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	flapMod.display('S');
	while (flapMod.update()) {
		console.textTo(10, 10, flapMod.currentSign());
		std::this_thread::sleep_for(std::chrono::milliseconds(100));
	}
	std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	flapMod.display('T');
	while (flapMod.update()) {
		console.textTo(10, 10, flapMod.currentSign());
		std::this_thread::sleep_for(std::chrono::milliseconds(100));
	}*/


	//Test de FlapDisplay
	/*FlapDisplay disp(10);
	console.textTo(10, 10, disp.currentDisplay());
	std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	disp.displayMessage("HELLO THIS IS A TEST");
	while (disp.update()) {
		console.textTo(10, 10, disp.currentDisplay());
		std::this_thread::sleep_for(std::chrono::milliseconds(100));
	}
	std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	disp.displayMessage("HELLO THIS");
	while (disp.update()) {
		console.textTo(10, 10, disp.currentDisplay());
		std::this_thread::sleep_for(std::chrono::milliseconds(100));
	}
	std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	disp.displayMessage("BONJ");
	while (disp.update()) {
		console.textTo(10, 10, disp.currentDisplay());
		std::this_thread::sleep_for(std::chrono::milliseconds(100));
	}*/

	return 0;
}