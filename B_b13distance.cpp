#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x,y,d;
    cout << "Nhap lan luot toa do x,y: ";
    cin >> x >> y;
    d = sqrt(x*x+y*y);
    cout << "Khoach cach la: "<< d;
}
