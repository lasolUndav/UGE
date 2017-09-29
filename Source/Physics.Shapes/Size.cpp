#include "Size.h"

Size::Size(float height, float width) {
	this->height = height;
	this->width = width;
}

Size::Size(const Size &size){
	this->height = size.height;
	this->width = size.width;
}

Size::Size(){
}

float Size::GetHeight(){
	return this->height;
}

float Size::GetWidth(){
		return this->width;
}

void Size::SetHeight(float height){
	this->height = height;
}

void Size::SetWidth(float width){
	this->width = width;
}

Size::~Size() {
}

