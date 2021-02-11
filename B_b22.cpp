#include <iostream>
using namespace std;
int main()
{
	double a,b,BMI;
	cout << "Nhap chieu cao(m): ";cin >>a;
	cout << "Nhap can nang(kg): "; cin >>b;
	BMI=b/(a*a);
	cout << "BMI la: " <<BMI;
}
