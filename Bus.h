#pragma once

#include <iostream> 
#include "Transport.h"

class Bus : public Transport {
public:
	Bus();

	Bus(Point, Point, size_t, double);

	void print() const override;
};
