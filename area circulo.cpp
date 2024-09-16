#include<iostream>
#include<conio.h>
#include<math.h>
#include<windows.h>

using namespace std;
double radio;
double a_circulo (double radio){

	cout<<"ingrese el radio de el circulo"<<endl;
	cin>>radio;
	
	double area= 3.14*radio*radio;
	cout<<"area "<<area<<endl;
	return  area;
}

int main(){
	
	a_circulo(radio);

}
