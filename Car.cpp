#include "Car.h"

Car::Car(): Transport(), _path(nullptr) {}

Car::Car(Point start, Point end, size_t time, double price, char* path): Transport(start, end, time, price), _path(path) {}

Car::~Car() {
	delete[] _path;
}

void Car::print() const {
        std::cout << "Car" << std::endl
                << "get_start set_start" << std::endl
                << "get_end set_end" << std::endl
                << "get_time set_time" << std::endl
                << "get_price set_price" << std::endl 
		<< "get_path set_path" << std::endl;
}

char* Car::get_path() const {
	return _path;
}

void Car::set_path(char*& path) {
	_path = path;
}
