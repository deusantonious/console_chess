#pragma once
#include <iostream>
#include <vector>
#include "piece.h"
#include "pos.h"
class Knight :
	public piece
{
public:
	Knight(const Knight& a) : piece(a.color, a.position) {}
	Knight(char color, pos position) : piece(color, position) {}
	std::vector<pos> ways(piece*** desk);
	void Display() override;
};

