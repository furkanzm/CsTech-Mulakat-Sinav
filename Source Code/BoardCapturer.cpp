#include "BoardCapturer.h"
#include <fstream>
#include <cstdlib>
#include <iostream>
#include "King.h"
#include "Horse.h"
#include "Pawn.h"
#include "Queen.h"
#include "Rook.h"
#include "Bishop.h" 


using namespace std;

void BoardCapturer::capture(string file_path) {
	//setlocale(LC_ALL, "tr_TR.UTF-8");
	ifstream ifs(file_path);
	if (!ifs.is_open()) {
		cout << "File is not opened!" << endl;
	}
	char data[256] = { 0 };
	Position now{ 'a',8 };
	while (!ifs.eof()) {
		ifs.getline(data, 256);
		string str{ data };
		int index = -1;
		now.x = 'a';
		for (int i = 0; i < 7; ++i) {
			string map_data_string = str.substr(0, 2);
			if (map_data_string[1] == 'b') {
				switch (map_data_string[0])
				{
				case 'v':
					whites.push_back(new King(White, Position{ now.x,now.y }));
					break;
				case 'a':
					whites.push_back(new Horse(White, Position{ now.x,now.y }));
					break;
				case 'p':
					whites.push_back(new Pawn(White, Position{ now.x,now.y }));
					break;
				case 's':
					whites.push_back(new Queen(White, Position{ now.x,now.y }));
					break;
				case 'f':
					whites.push_back(new Bishop(White, Position{ now.x,now.y }));
					break;
				case 'k':
					whites.push_back(new Rook(White, Position{ now.x,now.y }));
					break;
				default:

					break;
				}

			}
			else if (map_data_string[1] == 's') {
				switch (map_data_string[0])
				{
				case 'v':
					blacks.push_back(new King(Black, Position{ now.x,now.y }));
					break;
				case 'a':
					blacks.push_back(new Horse(Black, Position{ now.x,now.y }));
					break;
				case 'p':
					blacks.push_back(new Pawn(Black, Position{ now.x,now.y }));
					break;
				case 's':
					blacks.push_back(new Queen(Black, Position{ now.x,now.y }));
					break;
				case 'f':
					blacks.push_back(new Bishop(Black, Position{ now.x,now.y }));
					break;
				case 'k':
					blacks.push_back(new Rook(Black, Position{ now.x,now.y }));
					break;
				default:

					break;
				}
			}
			str = str.substr(2 + 1, str.length() - 2);

			++now.x;

		}



		if (str[1] == 'b') {
			switch (str[0])
			{
			case 'v':
				whites.push_back(new King(White, Position{ now.x,now.y }));
				break;
			case 'a':
				whites.push_back(new Horse(White, Position{ now.x,now.y }));
				break;
			case 'p':
				whites.push_back(new Pawn(White, Position{ now.x,now.y }));
				break;
			case 's':
				whites.push_back(new Queen(White, Position{ now.x,now.y }));
				break;
			case 'f':
				whites.push_back(new Bishop(White, Position{ now.x,now.y }));
				break;
			case 'k':
				whites.push_back(new Rook(White, Position{ now.x,now.y }));
				break;
			default:

				break;
			}

		}
		else if (str[1] == 's') {
			switch (str[0])
			{
			case 'v':
				blacks.push_back(new King(Black, Position{ now.x,now.y }));
				break;
			case 'a':
				blacks.push_back(new Horse(Black, Position{ now.x,now.y }));
				break;
			case 'p':
				blacks.push_back(new Pawn(Black, Position{ now.x,now.y }));
				break;
			case 's':
				blacks.push_back(new Queen(Black, Position{ now.x,now.y }));
				break;
			case 'f':
				blacks.push_back(new Bishop(Black, Position{ now.x,now.y }));
				break;
			case 'k':
				blacks.push_back(new Rook(Black, Position{ now.x,now.y }));
				break;
			default:

				break;
			}
		}
		++now.x;


		now.y--;
		cout << data << endl;
		memset(data, 0, 256);

	}



	/*
	* Okunan taþlarý ekrana yazdýrarak yazýlan kodun test edildiði kodlar 
 
	for (ChessPiece* item : whites) {
		cout << item->getName() << ": " << (char)item->getPosition().x << " " << item->getPosition().y << endl;
	}
	cout << "\n\n\n";
	for (ChessPiece* item : blacks) {
		cout << item->getName() << ": " << (char)item->getPosition().x << " " << item->getPosition().y << endl;
	}
	ifs.close();*/
}

vector<ChessPiece*> BoardCapturer::getWhitesMap() {
	return whites;
}

vector<ChessPiece*> BoardCapturer::getBlacksMap() {
	return blacks;
}
