#pragma once

struct Position {
	bool operator == (Position position) {
		return x == position.x && y == position.y;
	}
	int x;
	int y;
};