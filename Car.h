#pragma once                                                                                          

#include <iostream>
#include "Transport.h"
                  
class Car: public Transport {
public:
        Car();

        Car(Point, Point, size_t, double, char*);

	~Car() override;

        void print() const override;

	char* get_path() const;
	void set_path(char*&);

private:
	char* _path;
};
