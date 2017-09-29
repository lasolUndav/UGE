#include "Rectangle.h"
#include "Size.h"
#include "Coordinate.h"

Rectangle::Rectangle(Coordinate* point, Size* size){
	this->point = point;
	this->size = size;
}

Coordinate* Rectangle::GetPoint()const{
	return this->point;
}

Size* Rectangle::GetSize()const{
	return this->size;
}

void Rectangle::SetPoint(Coordinate* point){
	this->point = point;
}

void Rectangle::SetSize(Size* size){
	this->size = size;
}

