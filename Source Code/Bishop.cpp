#include "Bishop.h"

#include <iostream>
#include <vector>

using namespace std;

vector<vector<Position>> Bishop::move() {
	cout << "Bishop move\n";
	return {};
}

Bishop::PieceName Bishop::getInfo() {
	return bishop;
}

string Bishop::getName() {
	return "Bishop";
}

double Bishop::getFullScore() {
	return full_point;
}

PieceColor Bishop::getColor() {
	return color;
}

Position Bishop::getPosition() {
	return position;
}

double Bishop::getScore() {
	return point;
}

void Bishop::damaged() {
	point = full_point / 2;
}

void Bishop::setPosition(Position position_input) {
	position = position_input;
}
