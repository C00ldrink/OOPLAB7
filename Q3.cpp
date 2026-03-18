#include <iostream>
using namespace std;
class Vehicle {
	string model, brand;
	const int vehicleID;
public:
	Vehicle(string model = "XXXX", string brand = "None", int vehicleID =0) : model(model), brand(brand), vehicleID(vehicleID) {}
	void displayVehicle() {
		cout << "Model: " << model << endl << "Brand: " << brand << endl << "Vehicle ID: " << vehicleID << endl;
	}


};
int main() {
	Vehicle V1("L23WXE", "Koenigsegg", 23354);
	Vehicle V2("M53GBY", "Hennessey", 897723);
	V1.displayVehicle();
	V2.displayVehicle();

}