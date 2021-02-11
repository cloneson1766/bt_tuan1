#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float a,b,c;
	cout << "Nhap canh a: "; cin >> a;
	cout << "Nhap canh b: "; cin >>b;
	cout << "Nhap canh c: "; cin>>c;
	float s,area;
	s=(a+b+c)/2;
	area= sqrt(s*(s-a)*(s-b)*(s-c));
	cout << "Dien tich tam giac la: " << area;
}
