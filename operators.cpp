#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float base1,hei,base2, area;
    cout<<" Enter base1,base2 and height of trapezium";
    cin>>base1>>base2>>hei;
    area =(base1+base2)*hei/2;
    cout<< "Your area is  "<<area;  

    int a,b,c,root1,root2;
    cout<<"Enter coefficients of x^2, x, and constant in the expression";
    cin>>a>>b>>c;
    root1 = (-b + sqrt(b*b - 4*a*c))/(2*a);
    root2=(-b - sqrt(b*b - 4*a*c))/(2*a);
    cout<< "The roots are "<< root1<<" and "<<root2;

    return 0;
}   