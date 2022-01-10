#pragma once

#include "position.h"
#include <string>
#include <vector>
using namespace std;
enum PieceColor {
	Black,
	White
};

class ChessPiece
{
public:
	ChessPiece(PieceColor, Position) {

	}
	enum PieceName {
		pawn = 0,
		horse,
		king,
		queen,
		rook,
		bishop
	};
	double white_score;
	double black_score;
	virtual PieceColor getColor() = 0;
	virtual Position getPosition() = 0;
	virtual void setPosition(Position) = 0;
	virtual vector<vector<Position>> move() = 0;
	virtual PieceName getInfo() = 0;
	virtual string getName() = 0;
	virtual double getFullScore() = 0;
	virtual void damaged() = 0;
	virtual double getScore() = 0;

};



