#include <iostream>
using namespace std;

int main(){

     int a,b,c,d;
    cout<<"Enter coefficients of x^2, x, and constant in the expression";
    cin>>a>>b>>c;
    d = b*b - 4*a*c;

    if(d==0){
    cout<< "The roots are real and equal";
    }
    else if(d>0){
        cout<< "The roots are real and unequal";

    }
    else{
        cout<< "The roots are not real";
    }

    int dno; 
    cout<<"Enter day number ";
    cin>>dno;
    
    switch(dno){
        
        case 1: cout<<"sun";
            break;
        case 2: cout<<"mon";
            break;
        case 3: cout<<"tue";
            break;
        case 4: cout<<"wed";
            break;
        case 5: cout<<"thu";
            break;
        case 6: cout<<"fri";
            break;
        case 7: cout<<"sat";
            break;
        default: cout<<"invalid day number";
        
    }
}