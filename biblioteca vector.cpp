
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

 vector<int> v1(6); 

	cout<<" el  vector es "<< v1.size();
	//cout<<" el  vector es "<< v1.length();
	v1.push_back(2);
    for (int i=0;i<v1.size();i++){

        cout<<"\t"<< v1[i] ;
    }
	

    return 0;   

}
