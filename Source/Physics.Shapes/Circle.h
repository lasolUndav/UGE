

#ifndef CIRCLE_H_
#define CIRCLE_H_
#include "Coordinate.h"
#include <string>
#include <iostream>

using std::string;

class Circle{
	private:
		float rad;

	public:
		Circle();
		Circle(float rad, float x, float y);
		float GetRad();
		void SetRad(float rad);
};

#endif
