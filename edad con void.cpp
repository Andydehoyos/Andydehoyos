#include<iostream>
#include<string>

using namespace std;

int edad1, edad2;
string nombre1, nombre2;

void VerificarEdad(){
	
	cout << "ingrese el nombre de la primera persona"<<endl;
	cin>>nombre1;
	cout << "ingrese el nombre de la segunda persona"<<endl;
	cin>>nombre2;
	system("cls");
	cout << "ingrese la edad de la primera persona"<<endl;
	cin>>edad1;
	cout<<  "ingrese la edad de la segunda persona"<<endl;
	cin>>edad2;
	
	if(edad1>edad2){
		cout<<"la persona mayor es "<<nombre1<<endl;
		system("pause");
		system("cls");
	}else{
		cout<<"la persona mayor es "<<nombre2<<endl;
			system("pause");
		system("cls");
	}
}

int main(){
	system ("color 7");
	VerificarEdad();
	
	
	
	
	return 0;
}
