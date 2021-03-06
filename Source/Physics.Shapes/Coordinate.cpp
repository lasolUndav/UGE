#include "Coordinate.h"
#include <cstdlib>

float Coordinate::GetX()const{
	return this->x;
}

float Coordinate::GetY()const{
	return this->y;
}

void Coordinate::SetX(float x){
	this->x = x;
}

void Coordinate::SetY(float y){
	this->y = y;
}

string Coordinate::ToString(){
	return "()";
}

bool Coordinate::Equals(Coordinate* coordinate){
	return this->GetX() == coordinate->GetX() && this->GetY() == coordinate->GetY();
}
