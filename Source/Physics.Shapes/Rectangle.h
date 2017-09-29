#include "Coordinate.h"

class Rectangle {
private:
	Coordinate p;
	struct size{
		int height;
		int width;
	}
public:
	Rectangle(Coordinate p, float heigh, float width);
	int GetP();
	int GetHeight();
	int GetWidth();
	void SetP();
	void SetHeight();
	void SetWidth();
	bool Equals(Coordinate* coordinates);
};

