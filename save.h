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
	SaveSystem(const vector<vector<Board::ContentValue> > &board, const int &score = 0);
	void save();
	void assignBoard(const vector<vector<Board::ContentValue> > &board);
	void assignScore(const int &score);
};
