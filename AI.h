#ifndef AI_H
#define AI_H
#include "Board.h"
#include "Cell.h"

using map = std::map<pos, Cell>;

class AI
{
public:
    AI();
    ~AI();
    int* RetX();
    int* Rety();
private:
    Board aBoard;
    void GetRightMove();
    map mCells;
};

#endif // CELL_H
