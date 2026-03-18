#include<iostream>
using namespace std;
class Rational {
	int num, den;
public:
	Rational() {}
    Rational(int num,int den):num(num),den(den) {
		Reduce();
	}

	void Reduce() {
		
		for (int i = 2; i <=num && i <= den; i++) {
			if (num % i == 0 && den % i == 0) {
				while (num % i == 0 && den % i == 0) {
					num /= i;
					den /= i;
					
				}
			}
		}
		if (den != 1) {
			cout << "Reduced fraction: " << num << "/" << den << endl;
		}
		else {
			cout << "Reduced fraction: " << num << endl;
		}
	}
	Rational operator +(Rational& obj) {
		Rational temp;
		temp.num = num * obj.den + obj.num * den;
		temp.den = obj.den * den;
		cout << num << "/" << den << "+" << obj.num << "/" << obj.den << " = " << temp.num << "/" << temp.den << endl;

		temp.Reduce();
		return temp;
	}
	Rational operator -(Rational& obj) {
		Rational temp;
		temp.num = num * obj.den - obj.num * den;
		temp.den = obj.den * den;
		cout << num << "/" << den << "-" << obj.num << "/" << obj.den << " = " << temp.num << "/" << temp.den << endl;

		temp.Reduce();

		return temp;
	}
	Rational operator *(Rational& obj) {
		Rational temp;
		temp.num = num*obj.num;
		temp.den = obj.den * den;
		cout << num << "/" << den << "*" << obj.num << "/" << obj.den << " = " << temp.num << "/" << temp.den << endl;
		temp.Reduce();
		return temp;
	}
	Rational operator /(Rational& obj) {
		Rational temp;
		temp.num = num * obj.den;
		temp.den = den *obj.num;
		cout << num << "/" << den << "/" << obj.num << "/" << obj.den << " = " << temp.num << "/" << temp.den << endl;
		temp.Reduce();
		return temp;
	}
	friend ostream& operator << (ostream& output, Rational& obj);
	friend istream& operator >> (istream& input, Rational& obj);
	bool operator == (Rational& obj) {
		if (num == obj.num && den == obj.den)
			return true;
		return false;
	}
	bool operator != (Rational& obj) {
		if (num != obj.num || den == obj.den)
			return true;
		return false;
	}
	bool operator < (Rational& obj) {
		if ((float)num / den < (float)obj.num/obj.den )
			return true;
		return false;
	}
	bool operator > (Rational& obj) {
		if ((float)num / den > (float)obj.num / obj.den)
			return true;
		return false;
	}
	bool operator <= (Rational& obj) {
		if ((float)num / den <= (float)obj.num / obj.den)
			return true;
		return false;
	}
	bool operator >= (Rational& obj) {
		if ((float)num / den >= (float)obj.num / obj.den)
			return true;
		return false;
	}
	void operator ++() {
		++num;
	}
	void operator ++(int) {
		num++;
	}
	void operator --() {
		--num;
	}
	void operator --(int) {
		num--;
	}
};
void getInput(int& x, int& y) {
	cout << "Enter numerator: ";
	cin >> x;
	cout << "Enter denominator: ";
	cin >> y;
	while (y == 0) {
		cout << "Invalid denominator! Enter again";
		cin >> y;
	}
}
ostream &operator << (ostream& output,Rational& obj) {
	output << "Fraction: " << obj.num << "/" << obj.den << endl;
	return output;
}
istream& operator >> (istream& input, Rational& obj) {
	getInput(obj.num, obj.den);
	return input;
}
void Increment(Rational& f1) {
	int ans;
	cout << "For post increment press 1, for pre increment press 0: ";
	cin >> ans;
	if (ans) {
		f1++;
		cout << "After post incrementation by 1" << f1 << endl;
	}
	else {
		++f1;
		cout << "After pre incrementation by 1" << f1 << endl;
	}
	f1.Reduce();
}
int main() {
	int x, y;
	getInput(x, y);
	Rational f1(x, y);
	getInput(x, y);
	Rational f2(x, y);
	char operation;
	cout << "Which operation do you want to perform +,-,* or / : ";
	cin >> operation;
	if (operation == '+') { f1 + f2; }
	else if (operation == '-') { f1 - f2; }
	else if (operation == '*') { f1* f2; }
	else if (operation == '/') { f1 / f2; }
	else cout << "Invalid operation" << endl;
	
	Increment(f1);
	Increment(f2);
	




}