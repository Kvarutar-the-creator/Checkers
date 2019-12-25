#include "AI.h"

AI::AI()
{
}

AI::~AI()
{
}


int*x, *y;

void AI::GetRightMove()
{
	int*x, *y, check = 0;
	int endPos1, endPos2, startPos1, startPos2, endPos, startPos;
	for (int i = 11; i < 80; i++) {
		if (check == -1) { break; }
		for (int j = 11; j < 80; j++) {
			startPos = i;
			endPos = j;
			startPos1 = i / 10;
			startPos2 = i - 10 * startPos1;
			endPos1 = j / 10;
			endPos2 = j - 10 * startPos1;
			const int dY = endPos- startPos;
			const int dX = endPos - startPos;
			const pos startPosition = pos(1, 6);
			auto startCellState = mCells.at(startPosition).GetState();
			if ((startCellState == Cell::State::BLACK)&&((abs(dX) == 2 && abs(dY) == 2)|| (abs(dX) == 1 && dY == -1)))
			{
				x = &i;
				y = &j;
				check = -1;
				break;
			}
		}
	}
}


int* AI::RetX()
{
	GetRightMove();
	return x;
}

int* AI::Rety()
{
	GetRightMove();
	return y;
}




