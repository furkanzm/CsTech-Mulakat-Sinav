#include <iostream>
#include "BoardCapturer.h" 
#include "Calculater.h"


int main() {
	BoardCapturer capturer;
	capturer.capture("board1.txt");
	Calculater calculater;
	calculater.setBlacksMap(capturer.getBlacksMap());
	calculater.setWhitesMap(capturer.getWhitesMap());
	calculater.calculate();
	std::cout << "Blacks Total score: " << calculater.getBlacksPoint() << std::endl;
	std::cout << "Whites Total score: " << calculater.getWhitesPoint() << std::endl;

	return 0;
}
