#pragma once

#include <iostream>
#include "Transport.h"

class Metro: public Transport {
public:
	Metro();

	Metro(Point, Point, size_t, double);

	void print() const override;
};
