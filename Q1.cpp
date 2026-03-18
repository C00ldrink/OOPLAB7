//
//#include <iostream>
//using namespace std;
//
//class Image {
//	int width, height, ** pixelData;
//public:
//	Image(int width = 0, int height = 0){
//		this->width = width;
//		this->height = height;
//		pixelData = new int*[height];
//		for (int i = 0; i < height; i++) {
//			pixelData[i] = new int[width];
//		}
//	}
//	Image(Image&& obj) {
//		width = obj.width;
//		height = obj.height;
//		pixelData = obj.pixelData;
//		obj.pixelData = nullptr;
//		obj.width = 0;
//		obj.height = 0;
//	}
//	Image& operator =(Image&& obj) {
//		
//		if (this != &obj) {
//
//			for (int i = 0; i < height; i++)
//				delete[] pixelData[i];
//			delete[] pixelData;
//
//			width = obj.width;
//			height = obj.height;
//			pixelData = obj.pixelData;
//			obj.pixelData = nullptr;
//			obj.width = 0;
//			obj.height = 0;
//		}
//		return *this;
//	}
//	void displayInfo() {
//		cout << "Width: " << width << " Height: " << height << endl;
//		for (int i = 0; i < height; i++) {
//			for (int j = 0; j < width; j++) {
//				cout << "." << " ";
//			}
//			cout << endl;
//		}
//	}
//	~Image() {
//		if (pixelData != nullptr) {
//			for (int i = 0; i < height; i++) {
//				delete[] pixelData[i];
//			}
//			delete[] pixelData;
//		}
//	}
//};
//int main()
//{
//	Image I1(5, 4);
//	I1.displayInfo();
//	Image I2;
//	I2 = move(I1);
//	I1.displayInfo();
//	I2.displayInfo();
//}
