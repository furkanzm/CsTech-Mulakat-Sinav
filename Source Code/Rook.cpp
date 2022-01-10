#include "Rook.h"

#include <iostream>
#include <vector>

using namespace std;

vector<vector<Position>> Rook::move() {
	cout << "Rook move\n";
	return {};
}

Rook::PieceName Rook::getInfo() {
	return rook;
}

string Rook::getName() {
	return "Rook";
}

double Rook::getFullScore() {
	return full_point;
}

PieceColor Rook::getColor() {
	return color;
}

Position Rook::getPosition() {
	return position;
}

double Rook::getScore() {
	return point;
}

void Rook::damaged() {
	point = full_point / 2;
}

void Rook::setPosition(Position position_input) {
	position = position_input;
}
