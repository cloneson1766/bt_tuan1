#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout << "nhap lan luot 3 so: ";
    cin >> a >>b >>c;
    if(a==b&&b==c&&a==c){
        cout << "true";
    }else{
        cout << "false";
    }
}
