#pragma once

#include <iostream>
#include "Transport.h"

class Trolley: public Transport {
	Trolley();

	Trolley(Point, Point, size_t, double);

	void print() const override;
};

