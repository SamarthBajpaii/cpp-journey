#include <iostream>
using namespace std;

int main(){

    int r,A[1000];
    int sum=0,n;
    cout<<"Enter the size of array";
    cin>>n;
    cout<<"enter your numbers in the array";
    for(int i=0;i<n;i++){
        cin>>A[i];  
    }

    for(int i=0;i<n;i++){
        sum+=A[i];
    }
    double avg = sum/n;
    cout<<avg;
    
    cout<<"Enter your number";
    cin>>r;

    for(int i=0; i<4; i++){
        if(r==A[i]){
            cout<<"Your number is at this position - "<< i;

        }
        else{
            cout<<"Number not found";
        }

    }

    cout<<endl;
    for (int i=0;i<5;i++){

        for(int j=0; j<5;j++){

            if(i<j){
                cout<<"* ";
            }

        }
        cout<<endl;
    }


    for (int i=0;i<5;i++){

        for(int j=0; j<5;j++){

            if(i+j>5-1){
                cout<<"* ";
            }
            else
                cout<<" ";

        }
        cout<<endl;
    }




    return 0;   
}