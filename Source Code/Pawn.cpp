#include "Pawn.h"
#include <iostream>
using namespace std;

vector<vector<Position>> Pawn::move() {
	vector<vector<Position>> positions;
	positions.push_back(vector<Position>{});

	if (color == White) {
		if (position.y < 8) {
			if (position.x > 'a' && position.x < 'h') {
				positions.back().push_back({ position.x - 1, position.y + 1 });
				positions.back().push_back({ position.x + 1, position.y + 1 });

			}
			else if (position.x == 'a') {
				positions.back().push_back({ position.x + 1, position.y + 1 });
			}
			else if (position.x == 'h') {
				positions.back().push_back({ position.x - 1, position.y + 1 });
			}
		}
	}
	else {
		if (position.y > 1) {
			if (position.x > 'a' && position.x < 'h') {
				positions.back().push_back({ position.x - 1, position.y - 1 });
				positions.back().push_back({ position.x + 1, position.y - 1 });
			}
			else if (position.x == 'a') {
				positions.back().push_back({ position.x + 1, position.y - 1 });
			}
			else if (position.x == 'h') {
				positions.back().push_back({ position.x - 1, position.y - 1 });
			}
		}
	}

	return positions;
}

Pawn::PieceName Pawn::getInfo() {
	return pawn;
}

string Pawn::getName() {
	return "Pawn";
}

double Pawn::getFullScore() {
	return full_point;
}


PieceColor Pawn::getColor() {
	return color;
}

Position Pawn::getPosition() {
	return position;
}

double Pawn::getScore() {
	return point;
}

void Pawn::damaged() {
	point = full_point / 2;
}

void Pawn::setPosition(Position position_input) {
	position = position_input;
}
