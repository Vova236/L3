#include <iostream>
#include <cmath>
#include <iomanip>
#include <fstream>
using namespace std;
float sum (int k){
	float s=sin(abs(k))/0.1+9.4*sin(3*k-2.5+5);
	return(s);
	}
	float dob (int k){
	float d=10.8*fabs(cos(k*k/1.13))*sin(k+1.4);
	return(d);
	}
int main() {
	ofstream file ("file.txt", ios::out);
	float z=0,b=1,a=0;
	int k,i=18;
	for(k=i;k<=23;k++){
		a+=sum(k);
	}
	for(k=i;k<=26;k++){
		b*=dob(k);
	}
	cout.flags(ios::fixed);
		cout.precision(5);
	cout<<"Variant:"<<i<<endl;
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	z=2*a+b;
	cout<<"z="<<z<<endl;
	file<<"Variant:"<<i<<endl;
	file<<"a="<<a<<endl;
	file<<"b="<<b<<endl;
	file<<"z="<<z<<endl;
	return 0;
}
