#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,a[n+1];
	cout << "Nhap so phan tu: "; cin >>n;
	int i;
	for(i=0;i<n;i++){
		cout << "Nhap a["<<i<<"]: ";
		cin >> a[i];
	}
	int tong=0,Mean,Max,Min;
	for(i=0;i<n;i++){
		tong=tong+a[i];
	}
	Mean=tong/n;
	cout << "Mean: "<<Mean<<endl;
	Max=a[0];
	for(i=1;i<n;i++){
		if(Max<a[i]){
			Max=a[i];
		}
	}
	cout << "Max: "<< Max <<endl;
	Min=a[0];
	for(i=1;i<n;i++){
		if(Min>a[i]){
			Min=a[i];
		}
	}
	cout << "Min: "<<Min;
}
