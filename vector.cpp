#include <iostream>
#include <string>
#include<windows.h>
using namespace std;

int main(){
	system("color 3");
	int vector[] ={5,6,7,8,9,10}; 
    cout<<"+++++++++++++++++++++++++++++++++++++++"<<endl;
	cout<<"bienvenido al vector"<<endl;
	cout<<"+++++++++++++++++++++++++++++++++++++++"<<endl;
	
	
	
	for (int i=0; i<6;i++){
		cout<<vector[i]<<"\t";
	}
	
	
	int vector1[15];
	int op=0,n=0;
	
	do{
		
	cout<<"� deseas llenar otro vector ? +++++++++++++++++++++++++++++<<"<<endl;
	cout<<"(1=si 0=no)"<<endl;
	cin>>op;
	if (op==1 &&n<15){
		vector1[n];
		n++;
	}
	}while(op!=0);
	system("cls");
	cout<<"+++++++++++++++++++++++++++++++++++++++"<<endl;
	cout<<"el vector 1 es "<<endl;
	for (int i=0; i<n;i++){
		cout<<vector1[i]<<"\t";
	}
	cout<<"+++++++++++++++++++++++++++++++++++++++"<<endl;
	cout<<"ingrese el tama�o del vector 2: "<<endl;
	cin>>n;
	cout<<"ingrese los elementos del vector"<<endl;
	cout<<"+++++++++++++++++++++++++++++++++++++++"<<endl;
	int vector2[n];
	for(int i=0; i<n; i++){
		cin>>vector2[i];
	}
	system("cls");
    Beep(750,2000);
	cout<<"+++++++++++++++++++++++++++++++++++++++"<<endl;
	cout<<"\t elementos del vector 2"<<endl;
	cout<<"+++++++++++++++++++++++++++++++++++++++"<<endl;
	
	for(int i=0; i<n; i++){
		cout<<vector2[i]<<"\t";
	}
	
	return 0;
}
