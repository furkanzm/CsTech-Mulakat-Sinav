
#include "Calculater.h"
#include <iostream>

void Calculater::calculate()
{
    //Beyaz taþlarýn tehdit oluþturacaðý durumlar 

    for (ChessPiece* white : whites)
    {
        if (white->getInfo() < 2)                                       // Piyon ve at kontorlü
        {
            vector<vector<Position>> positions = white->move();
            for (vector<Position> position_vector : positions)
            {
                for (Position position : position_vector)
                {
                    for (ChessPiece* black : blacks)
                    {
                        if (black->getPosition() == position)
                        {
                            black->damaged();
                        }
                    }
                }
            }
        }
        else if (white->getInfo() == 2)                                 // Vezir kontrolü
        {
            vector<vector<Position>> positions = white->move();
            bool cancel_move = false;
            for (vector<Position> position_vector : positions)
            {
                for (Position position : position_vector)
                {
                    for (ChessPiece* black : blacks)
                    {
                        for (ChessPiece* budy : whites)
                        {
                            if (position == budy->getPosition())
                            {
                                cancel_move = true;
                                break;
                            }
                            if (black->getPosition() == position)
                            {
                                black->damaged();
                                cancel_move = true;
                                break;
                            }
                        }
                        if (cancel_move == true)
                        {
                            break;
                        }
                    }
                    if (cancel_move == true)
                    {
                        cancel_move = false;
                        break;
                    }
                }
            }
        }
    }


    //Siyah taþlarýn tehdit oluþturacaðý durumlar 

    for (ChessPiece* black : blacks)
    {
        if (black->getInfo() < 2)                                                   // Piyon ve at kontorlü
        {
            vector<vector<Position>> positions = black->move();
            for (vector<Position> position_vector : positions)
            {
                for (Position position : position_vector)
                {
                    for (ChessPiece* white : whites)
                    {
                        if (white->getPosition() == position)
                        {
                            white->damaged();
                        }
                    }
                }
            }
        }
        else if (black->getInfo() == 2)                                            // Vezir kontorlü
        {
            vector<vector<Position>> positions = black->move();
            bool cancel_move = false;
            for (vector<Position> position_vector : positions)
            {
                for (Position position : position_vector)
                {
                    for (ChessPiece* white : whites)
                    {
                        for (ChessPiece* budy : blacks)
                        {
                            if (position == budy->getPosition())
                            {
                                cancel_move = true;
                                break;
                            }
                            if (white->getPosition() == position)
                            {
                                white->damaged();
                                cancel_move = true;
                                break;
                            }
                        }
                        if (cancel_move == true)
                        {
                            break;
                        }
                    }
                    if (cancel_move == true)
                    {
                        cancel_move = false;
                        break;
                    }
                }
            }
        }
    }

    for (ChessPiece* black : blacks)
    {
        total_blacks_point += black->getScore();
    }
    std::cout << std::endl;
    for (ChessPiece* white : whites)
    {
        total_whites_point += white->getScore();
    }
}

void Calculater::setWhitesMap(vector<ChessPiece*> whites_input)
{
    whites = whites_input;
}

void Calculater::setBlacksMap(vector<ChessPiece*> blacks_input)
{
    blacks = blacks_input;
}

double Calculater::getWhitesPoint()
{
    return total_whites_point;
}

double Calculater::getBlacksPoint()
{
    return total_blacks_point;
}
