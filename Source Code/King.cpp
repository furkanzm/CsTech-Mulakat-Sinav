#include "King.h"
#include <iostream>

using namespace std;


vector<vector<Position>> King::move() {
	vector<vector<Position>> positions;
	// down moves
	if (position.y > 2) {
		positions.push_back({});
		for (int i = 1; i <= 8; i++) {
			if (position.y - i < 1) {
				break;
			}
			positions.back().push_back({ position.x, position.y - i });

		}
	}
	// up moves
	if (position.y >= 1) {
		positions.push_back({});
		for (int i = 1; i <= 7; i++) {
			if (position.y + i > 8) {
				break;
			}
			positions.back().push_back({ position.x, position.y + i });

		}
	}

	// left moves

	if (position.x >= 'b') {
		positions.push_back({});
		for (char i = 1; i <= 8; i++) {
			if (position.x - i < 'a') {
				break;
			}
			positions.back().push_back({ position.x - i, position.y });
		}
	}
	// right moves
	if (position.x >= 'a') {
		positions.push_back({});
		for (char i = 1; i <= 7; i++) {
			if (position.x + i > 'h') {
				break;
			}
			positions.back().push_back({ position.x + i, position.y });
		}
	}


	// cross moves = +1,+1 upper right cross / +1,-1 lower right cross/ -1,+1 upper left cross / -1,-1 lower left cross

	// lower right cross
	if (position.x < 'h' && position.y > 1) {
		positions.push_back({});
		for (int i = 1; i < 7; i++) {
			if (!(position.x + i < 'h') || !(position.y - i > 1)) {
				break;
			}
			positions.back().push_back({ position.x + i , position.y - i });

		}
	}

	// upper right cross
	if (position.x < 'h' && position.y < 8) {
		positions.push_back({});
		for (int i = 1; i < 7; i++) {
			if (!(position.x + i < 'h') || !(position.y + i < 8)) {
				break;
			}
			positions.back().push_back({ position.x + i , position.y + i });

		}
	}

	// lower left cross
	if (position.x > 'a' && position.y > 1) {
		positions.push_back({});
		for (int i = 1; i < 7; i++) {
			if (!(position.x - i > 'a') || !(position.y - i > 1)) {
				break;
			}
			positions.back().push_back({ position.x - i , position.y - i });
		}
	}

	// upper left cross
	if (position.x > 'a' && position.y < 8) {
		positions.push_back({});
		for (int i = 1; i < 7; i++) {
			if (!(position.x - i > 'a') || !(position.y + i < 8)) {
				break;
			}
			positions.back().push_back({ position.x - i , position.y + i });
		}
	}





	return positions;
}


string King::getName() {
	return "King";
}

King::PieceName King::getInfo() {
	return king;
}

double King::getFullScore() {
	return full_point;
}

PieceColor King::getColor() {
	return color;
}

Position King::getPosition() {
	return position;
}

double King::getScore() {
	return point;
}

void King::damaged() {
	point = full_point / 2;
}

void King::setPosition(Position position_input) {
	position = position_input;
}
