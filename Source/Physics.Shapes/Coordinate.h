#ifndef COORDINATE_H_
#define COORDINATE_H_
#include <string>
#include <iostream>

using std::string;

class Coordinate{
	private:
		float x;
		float y;

	public:
		Coordinate();
		Coordinate(float x, float y);
		float GetX();
		float GetY();
		void SetX(float x);
		void SetY(float y);
		string ToString();
		bool Equals(Coordinate* coordinates);
};




#endif /* COORDINATE_H_ */
