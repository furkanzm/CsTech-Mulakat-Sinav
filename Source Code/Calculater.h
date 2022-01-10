#pragma once
#include <vector>
#include "ChessPiece.h"

using namespace std;
class Calculater {
private:
    vector<ChessPiece*> whites;
    vector<ChessPiece*> blacks;
    double total_whites_point = 0.;
    double total_blacks_point = 0.;
public:
    void calculate();
    double getWhitesPoint();
    double getBlacksPoint();
    void setBlacksMap(vector<ChessPiece*>);
    void setWhitesMap(vector<ChessPiece*>);
};
