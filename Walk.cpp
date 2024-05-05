#include "Walk.h"

Walk::Walk(): Move() {}

Walk::Walk(Point start, Point end, size_t time): Move(start, end, time) {}

void Walk::print() const {
	std::cout << "Walk" << std::endl
		<< "get_start set_start" << std::endl
		<< "get_end set_end" << std::endl
		<< "get_time set_time" << std::endl;
}
