#pragma once


#include <vector>
#include "ChessPiece.h"

using namespace std;

class BoardCapturer
{
public:
	vector<ChessPiece*> whites;
	vector<ChessPiece*> blacks;
	void capture(string file_path);
	vector<ChessPiece*> getWhitesMap();
	vector<ChessPiece*> getBlacksMap();
};

