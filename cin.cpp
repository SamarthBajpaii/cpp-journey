#include <iostream>
#include <string>
using namespace std;
int main(){

    int a,b,c;
    cout<<"Enter 2 numbers";
    cin>>a>>b;
    c=a*b;
    cout<<"Your product is "<<c<<"    ";
    cin.ignore();
    string t;
    cout<<"May i know your name?? ";
    getline(cin,t);
    cout<< "Your name is  "<< t;  



    return 0;
      
}