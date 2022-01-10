#include "Horse.h"
#include <iostream>

using namespace std;

vector<vector<Position>> Horse::move() {
	vector<vector<Position>> positions;
	positions.push_back(vector<Position>{});
	if (position.y > 2 && position.y < 7) {
		if (position.x > 'b' && position.x < 'g') {
			positions.back().push_back({ position.x - 2, position.y + 1 });
			positions.back().push_back({ position.x - 1, position.y + 2 });
			positions.back().push_back({ position.x + 1, position.y + 2 });
			positions.back().push_back({ position.x + 2, position.y + 1 });
			positions.back().push_back({ position.x + 2, position.y - 1 });
			positions.back().push_back({ position.x + 1, position.y - 2 });
			positions.back().push_back({ position.x - 1, position.y - 2 });
			positions.back().push_back({ position.x - 2, position.y - 1 });
		}
		else if (position.x == 'b')
		{
			positions.back().push_back({ position.x - 1, position.y + 2 });
			positions.back().push_back({ position.x + 1, position.y + 2 });
			positions.back().push_back({ position.x + 2, position.y + 1 });
			positions.back().push_back({ position.x + 2, position.y - 1 });
			positions.back().push_back({ position.x + 1, position.y - 2 });
			positions.back().push_back({ position.x - 1, position.y - 2 });
		}
		else if (position.x == 'a')
		{
			positions.back().push_back({ position.x + 1, position.y + 2 });
			positions.back().push_back({ position.x + 2, position.y + 1 });
			positions.back().push_back({ position.x + 2, position.y - 1 });
			positions.back().push_back({ position.x + 1, position.y - 2 });
		}
		else if (position.x == 'g')
		{
			positions.back().push_back({ position.x - 1, position.y + 2 });
			positions.back().push_back({ position.x + 1, position.y + 2 });
			positions.back().push_back({ position.x - 2, position.y + 1 });
			positions.back().push_back({ position.x - 2, position.y - 1 });
			positions.back().push_back({ position.x + 1, position.y - 2 });
			positions.back().push_back({ position.x - 1, position.y - 2 });
		}
		else if (position.x == 'h')
		{
			positions.back().push_back({ position.x - 1, position.y + 2 });
			positions.back().push_back({ position.x - 2, position.y + 1 });
			positions.back().push_back({ position.x - 2, position.y - 1 });
			positions.back().push_back({ position.x - 1, position.y - 2 });
		}
	}
	else if (position.y > 6)
	{
		if (position.x > 'b' && position.x < 'g') {
			positions.back().push_back({ position.x - 2, position.y + 1 });
			positions.back().push_back({ position.x + 2, position.y + 1 });
			positions.back().push_back({ position.x + 2, position.y - 1 });
			positions.back().push_back({ position.x + 1, position.y - 2 });
			positions.back().push_back({ position.x - 1, position.y - 2 });
			positions.back().push_back({ position.x - 2, position.y - 1 });

		}
	}
	else if (position.y == 7)
	{
		if (position.x == 'b')
		{
			positions.back().push_back({ position.x + 1, position.y - 2 });
			positions.back().push_back({ position.x - 1, position.y - 2 });
			positions.back().push_back({ position.x + 2, position.y - 1 });
			positions.back().push_back({ position.x + 2, position.y + 1 });
		}
		else if (position.x == 'a')
		{
			positions.back().push_back({ position.x + 1, position.y - 2 });
			positions.back().push_back({ position.x + 2, position.y - 1 });
			positions.back().push_back({ position.x + 2, position.y + 1 });
		}
		else if (position.x == 'g')
		{
			positions.back().push_back({ position.x + 1, position.y - 2 });
			positions.back().push_back({ position.x - 1, position.y - 2 });
			positions.back().push_back({ position.x - 2, position.y - 1 });
			positions.back().push_back({ position.x - 2, position.y + 1 });
		}
		else if (position.x == 'h')
		{
			positions.back().push_back({ position.x - 1, position.y - 2 });
			positions.back().push_back({ position.x - 2, position.y - 1 });
			positions.back().push_back({ position.x - 2, position.y + 1 });
		}
	}

	else if (position.y == 8)
	{
		if (position.x == 'b')
		{
			positions.back().push_back({ position.x + 1, position.y - 2 });
			positions.back().push_back({ position.x - 1, position.y - 2 });
			positions.back().push_back({ position.x + 2, position.y - 1 });
		}
		else if (position.x == 'a')
		{
			positions.back().push_back({ position.x + 1, position.y - 2 });
			positions.back().push_back({ position.x + 2, position.y - 1 });
		}
		else if (position.x == 'g')
		{

			positions.back().push_back({ position.x + 1, position.y - 2 });
			positions.back().push_back({ position.x - 1, position.y - 2 });
			positions.back().push_back({ position.x - 2, position.y - 1 });
		}
		else if (position.x == 'h')
		{
			positions.back().push_back({ position.x - 1, position.y - 2 });
			positions.back().push_back({ position.x - 2, position.y - 1 });
		}
	}
	else if (position.y == 1)
	{
		if (position.x > 'b' && position.x < 'g')
		{
			positions.back().push_back({ position.x + 1, position.y + 2 });
			positions.back().push_back({ position.x + 2, position.y + 1 });
			positions.back().push_back({ position.x - 2, position.y + 1 });
			positions.back().push_back({ position.x - 1, position.y + 2 });
		}
		else if (position.x == 'a')
		{
			positions.back().push_back({ position.x + 1 , position.y + 2 });
			positions.back().push_back({ position.x + 2 , position.y + 1 });
		}
		else if (position.x == 'b')
		{
			positions.back().push_back({ position.x + 1 , position.y + 2 });
			positions.back().push_back({ position.x + 2 , position.y + 1 });
			positions.back().push_back({ position.x - 1 , position.y + 2 });
		}
		else if (position.x == 'h')
		{
			positions.back().push_back({ position.x - 1 , position.y + 2 });
			positions.back().push_back({ position.x - 2 , position.y + 1 });
		}
		else if (position.x == 'g')
		{
			positions.back().push_back({ position.x - 1 , position.y + 2 });
			positions.back().push_back({ position.x - 2 , position.y + 1 });
			positions.back().push_back({ position.x + 1 , position.y + 2 });
		}
	}

	else if (position.y == 2)
	{
		if (position.x == 'a')
		{
			positions.back().push_back({ position.x + 1 , position.y + 2 });
			positions.back().push_back({ position.x + 2 , position.y + 1 });
			positions.back().push_back({ position.x + 2 , position.y - 1 });
		}
		else if (position.x == 'b')
		{
			positions.back().push_back({ position.x + 1 , position.y + 2 });
			positions.back().push_back({ position.x + 2 , position.y + 1 });
			positions.back().push_back({ position.x + 2 , position.y - 1 });
			positions.back().push_back({ position.x - 1 , position.y + 2 });
		}
		else if (position.x == 'h')
		{
			positions.back().push_back({ position.x - 1 , position.y + 2 });
			positions.back().push_back({ position.x - 2 , position.y + 1 });
			positions.back().push_back({ position.x - 2 , position.y - 1 });
		}
		else if (position.x == 'g')
		{
			positions.back().push_back({ position.x - 1 , position.y + 2 });
			positions.back().push_back({ position.x - 2 , position.y + 1 });
			positions.back().push_back({ position.x - 2 , position.y - 1 });
			positions.back().push_back({ position.x + 1 , position.y + 2 });
		}
	}
	return positions;
}

Horse::PieceName Horse::getInfo()
{
	return horse;
}

string Horse::getName() {
	return "Horse";
}

double Horse::getFullScore() {
	return full_point;
}

PieceColor Horse::getColor() {
	return color;
}

Position Horse::getPosition() {
	return position;
}
double Horse::getScore() {
	return point;
}

void Horse::damaged() {
	point = full_point / 2;
}

void Horse::setPosition(Position position_input) {
	position = position_input;
}
