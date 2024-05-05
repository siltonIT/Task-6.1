#include "Trolley.h"

Trolley::Trolley(): Transport() {}

Trolley::Trolley(Point start, Point end, size_t time, double price): Transport(start, end, time, price) {}

void Trolley::print() const {
        std::cout << "Trolley" << std::endl
                << "get_start set_start" << std::endl
                << "get_end set_end" << std::endl
                << "get_time set_time" << std::endl 
                << "get_price set_price" << std::endl;
}

