#include "Coordinate.h"
#include "Size.h"

class Rectangle{
private:
	Coordinate* point;
	Size* size;

public:
	Rectangle(Coordinate* point, Size* size);
	Coordinate* GetPoint()const;
	Size* GetSize()const;
	void SetPoint(Coordinate* point);
	void SetSize(Size* size);
};

