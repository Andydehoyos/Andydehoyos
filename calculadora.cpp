#include <iostream>
#include<windows.h>
#include <locale.h>
#include <math.h>//agregamos la libreria math para operaciones matematicas
using namespace std;
int main (){
  setlocale(LC_CTYPE,"Spanish");
  

int op,num1,num2,suma,resta,mult,div;
int  base, exp, potencia;
double num, raiz;
system("color 5");
//}
do{
   cout<<"-------------------"<<endl;
   cout<<"1. hallar una potencia"<<endl;
   cout<<"2. hallar una raiz cuadrada"<<endl;
   cout<<"3. hallar una raiz cubica"<<endl;
   cout<<"4. hallar la suma de numeros"<<endl;
   cout<<"5. hallar la resta de dos numeros"<<endl;
   cout<<"6. multiplicar dos numeros"<<endl;
   cout<<"7. halla la division de dos numeros"<<endl;
   cout<<"0. salir"<<endl;
   cin>>op;
   //AHORA USAMOS EL COMANDO SWITCh
  switch(op){ 
    case 1:
    cout<<"----------------------"<<endl;
    cout<<"ingresa la base "<<endl;
    cin>>base;
    cout<<"ingresa el exponente "<<endl;
    cin>>exp;
     potencia = pow(base,exp); //pow es potencia
     cout <<"el resultado es: "<<potencia<<endl;
         break;
    case 2:
      cout<<"va a realizar una radicación"<<endl;
      cout<<"ingrese el numero"<<endl;
      cin>>num;
      raiz = sqrt(num);
      cout<<"el resultado es "<<raiz<<endl;
      break;
    case 3:
        cout<<"ingresa el numero"<<endl;
         cin>>num;
         raiz= cbrt(num);
         cout<<"el resultado es "<<raiz<<endl;
        break;
    case 4:
      cout<<"ingresa el primer numero"<<endl;
      cin>>num1;
      cout<<"ingrese el segundo numero"<<endl;
      cin>>num2;
      suma=(num1+num2);
      cout<<"la suma es "<<suma<<endl;
      break;
      case 5:
        cout<<"ingresa el primer numero"<<endl;
        cin>>num1;
        cout<<"ingresa el segundo numero"<<endl;
        cin>>num2;
        resta=(num1-num2);
        cout<<"el resultado es "<<resta<<endl;
        break;
      case 6:
          cout<<"ingresa el primer numero"<<endl;
          cin>>num1;
          cout<<"ingresa el segundo numero"<<endl;
          cin>>num2;
          mult=(num1*num2);
          cout<<"el producto es "<<mult<<endl;
          break;
      case 7:
         cout<<"ingresa el dividendo"<<endl;
         cin>>num1;
         cout<<"ingresa el divisor"<<endl;
         cin>>num2;
         div= (num1/num2);
         cout<<"el cociente es "<<div<<endl;
        break;
    case 0:
        system("cls");//limpiar pantalla
        
        cout<<"saliendo...";
        for (int i=0; i<6; i++){
            cout<<" . ";
            Sleep(100);
        }
        break;

   default:
        cout<<"no se encontro la opcion";
        break;
}
   
   //cout<<"**************"<<endl;
   //cout<<"estoy en el do while kkkk"<<endl;
   //cout<<"ingresa un valor: ";
   //cin>>valor;
}while (op!=0);



} 























