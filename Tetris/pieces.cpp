#include "piece.h"
#include "position.h"

class IPiece : public Piece {
public:
	IPiece()
	{
		type = 1;
		occupiedCells[0] = { Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 3) };
		occupiedCells[1] = { Position(0, 2), Position(1, 2), Position(2, 2), Position(3, 2) };
		occupiedCells[2] = { Position(2, 0), Position(2, 1), Position(2, 2), Position(2, 3) };
		occupiedCells[3] = { Position(0, 1), Position(1, 1), Position(2, 1), Position(3, 1) };
		Move(-1, 3);
	}
};

class OPiece : public Piece {
public:
	OPiece()
	{
		type = 2;
		occupiedCells[0] = 
		occupiedCells[1] = 
		occupiedCells[2] = 
		occupiedCells[3] = { Position(0, 0), Position(0, 1), Position(1, 0), Position(1, 1) };
		Move(0, 4);
	}
};

class TPiece : public Piece {
public:
	TPiece()
	{
		type = 3;
		occupiedCells[0] = { Position(0, 1), Position(1, 0), Position(1, 1), Position(1, 2) };
		occupiedCells[1] = { Position(0, 1), Position(1, 1), Position(1, 2), Position(2, 1) };
		occupiedCells[2] = { Position(1, 0), Position(1, 1), Position(1, 2), Position(2, 1) };
		occupiedCells[3] = { Position(0, 1), Position(1, 0), Position(1, 1), Position(2, 1) };
		Move(0, 3);
	}
};

class LPiece : public Piece {
public:
	LPiece()
	{
		type = 4;
		occupiedCells[0] = { Position(0, 2), Position(1, 0), Position(1, 1), Position(1, 2) };
		occupiedCells[1] = { Position(0, 1), Position(1, 1), Position(2, 1), Position(2, 2) };
		occupiedCells[2] = { Position(1, 0), Position(1, 1), Position(1, 2), Position(2, 0) };
		occupiedCells[3] = { Position(0, 0), Position(0, 1), Position(1, 1), Position(2, 1) };
		Move(0, 3);
	}
};

class JPiece : public Piece {
public:
	JPiece()
	{
		type = 5;
		occupiedCells[0] = { Position(0, 0), Position(1, 0), Position(1, 1), Position(1, 2) };
		occupiedCells[1] = { Position(0, 1), Position(0, 2), Position(1, 1), Position(2, 1) };
		occupiedCells[2] = { Position(1, 0), Position(1, 1), Position(1, 2), Position(2, 2) };
		occupiedCells[3] = { Position(0, 1), Position(1, 1), Position(2, 0), Position(2, 1) };
		Move(0, 3);
	}
};

class SPiece : public Piece {
public:
	SPiece()
	{
		type = 6;
		occupiedCells[0] = { Position(0, 1), Position(0, 2), Position(1, 0), Position(1, 1) };
		occupiedCells[1] = { Position(0, 1), Position(1, 1), Position(1, 2), Position(2, 2) };
		occupiedCells[2] = { Position(1, 1), Position(1, 2), Position(2, 0), Position(2, 1) };
		occupiedCells[3] = { Position(0, 0), Position(1, 0), Position(1, 1), Position(2, 1) };
		Move(0, 3);
	}
};

class ZPiece : public Piece {
public:
	ZPiece()
	{
		type = 7;
		occupiedCells[0] = { Position(0, 0), Position(0, 1), Position(1, 1), Position(1, 2) };
		occupiedCells[1] = { Position(0, 2), Position(1, 1), Position(1, 2), Position(2, 1) };
		occupiedCells[2] = { Position(1, 0), Position(1, 1), Position(2, 1), Position(2, 2) };
		occupiedCells[3] = { Position(0, 1), Position(1, 0), Position(1, 1), Position(2, 0) };
		Move(0, 3);
	}
};
