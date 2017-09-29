#ifndef SIZE_H_
#define SIZE_H_

class Size {
private:
	float height;
	float width;
public:
	Size();
	Size(const Size &size);
	Size(float height, float width);
	float GetHeight();
	float GetWidth();
	void SetHeight(float height);
	void SetWidth(float width);
	virtual ~Size();
};

#endif
