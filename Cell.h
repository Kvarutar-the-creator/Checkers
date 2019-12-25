#ifndef CELL_H
#define CELL_H
#include <utility>

using pos = std::pair<size_t, size_t>;

class Cell
{
public:
    enum class State { BLACK, WHITE, BLANK };
    Cell(State state);
    ~Cell();
    State GetState() const { return mState; }
    void SetState(State state) { mState = state; }
private:
    State mState;
    pos mPosition;
};

#endif // CELL_H
