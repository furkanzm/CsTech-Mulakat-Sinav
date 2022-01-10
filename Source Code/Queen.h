#pragma once
#include "ChessPiece.h"
class Queen :
    public ChessPiece
{
public:
    Queen(PieceColor param_color, Position param_position) : ChessPiece(param_color, param_position)
        , color(param_color), position(param_position) {
    }
    PieceColor getColor()override;
    Position getPosition()override;
    void setPosition(Position)override;
    vector<vector<Position>> move()override;
    PieceName getInfo()override;
    string getName()override;
    double getFullScore()override;
    void damaged()override;
    double getScore()override;
private:
    PieceColor color;
    Position position;
    static constexpr double full_point = 100;
    double point = full_point;
};

