#pragma once

#include <iostream>
#include "Transport.h"
                  
class Taxi: public Transport {
        Taxi();

        Taxi(Point, Point, size_t, double);

        void print() const override;
};
