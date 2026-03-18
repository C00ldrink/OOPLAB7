#include <iostream>
using namespace std;
class Box {
	int length, width, height;
public:
	void setDimensions(int length, int width, int height) {
		this->length = length;
		this->width = width;
		this->height = height;
	}
	int calculateVolume() {
		return length * width * height;
	}
	void DisplayVolume() {
	  cout << "Volume of box: " << length * width * height;
	}



};

int main(){
	Box b1;
	b1.setDimensions(2, 3, 4);
	b1.DisplayVolume();

}