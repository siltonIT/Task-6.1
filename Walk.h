#pragma once

#include <iostream>
#include "Point.h"
#include "Move.h"

#define size_t unsigned int

class Walk: public Move {
public:
	Walk();
	
	Walk(Point, Point, size_t);

	void print() const override;
};
