#include <iostream>
using namespace std;

int main(){

    int n,fact=1;
    cout<<"Enter your number";
    cin>>n;
    for(int i=1;i<=n;i++){

        fact =fact*i;
    }
    cout<<fact/n;


    for(int i=1;i<=n;i++){
       if(n%i==0){
           cout<<i<< "is a divisor of ur number";
       }
   }



    int sum=0;
    
    for(int i=1;i<=n;i++){
       if(n%i==0){
          sum+=i;
       }
   }
   if(sum==n){
       cout<<"perfect number";
       
   }
   else{
       cout<<"not perfect number";
   }



   int sum=0;
    int m=n;
    int digit;
     while(n>0){
        digit = n%10;
        n=n/10;
        
        sum = sum + digit*digit*digit;
     }
     if(sum==m)
        cout<<"armstrong";
    else
        cout<<"not armstrong";

     int rev=0;
    int digit;
    int m=n;
    
    while(n>0){
        digit = n%10;
        n=n/10;
        rev = rev*10 + digit;
        
     }
     if(rev==m){
         cout<<"palindrome";
    
     }
     else{
         cout<<"not a palindrome";
     }
    return 0;
}