#pragma once

#include <iostream>
#include "Move.h"

class Walk: public Move {
public:
	Walk();
	
	Walk(Point, Point, size_t);

	void print() const override;
};
