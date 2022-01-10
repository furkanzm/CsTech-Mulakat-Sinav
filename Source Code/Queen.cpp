#include "Queen.h"

#include <iostream>
#include <vector>

using namespace std;

vector<vector<Position>> Queen::move() {
	cout << "Queen move\n";
	return {};
}

Queen::PieceName Queen::getInfo() {
	return queen;
}

string Queen::getName() {
	return "Queen";
}

double Queen::getFullScore() {
	return full_point;
}

PieceColor Queen::getColor() {
	return color;
}

Position Queen::getPosition() {
	return position;
}

double Queen::getScore() {
	return point;
}

void Queen::damaged() {
	point = full_point / 2;
}

void Queen::setPosition(Position position_input) {
	position = position_input;
}
