#include "Metro.h"

Metro::Metro(): Transport() {}

Metro::Metro(Point start, Point end, size_t time, double price): Transport(start, end, time, price) {}

void Metro::print() const {
        std::cout << "Metro" << std::endl
                << "get_start set_start" << std::endl
                << "get_end set_end" << std::endl
                << "get_time set_time" << std::endl 
                << "get_price set_price" << std::endl;
}

