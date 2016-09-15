#pragma once
#include <iostream>
#include <fstream> 
#include <vector>
#include "core/include/core/board.h"

using namespace std;

class SaveSystem
{
private:
	// Reference Vers le tableau
	// reference sur le score
	vector<std::vector<Board::ContentValue> > *m_board;
	int *m_score;

public:
	SaveSystem(const vector<std::vector<Board::ContentValue> > &board, const int &score);
	void save();
	void assignBoard(const vector<std::vector<Board::ContentValue> > &board);
	void assignScore(const int &score);
};
