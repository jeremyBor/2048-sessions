#include "save.h"




SaveSystem::SaveSystem(const vector<std::vector<Board::ContentValue> > &board, const int &score)
{

}

void SaveSystem::save()
{
	ifstream saveFile("save.game", ifstream::binary);
	if (saveFile)
	{
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				saveFile >> (int)m_board[i][j];
			}
		}
		saveFile >> *m_score;
	}
	saveFile.close();
}

void SaveSystem::assignBoard(const vector<std::vector<Board::ContentValue> > &board)
{
	m_board = (vector<std::vector<Board::ContentValue> >*)&board;
}

void SaveSystem::assignScore(const int &score)
{
	m_score = (int*)&score;
}




