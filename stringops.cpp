#include <iostream>
#include <cstring>
using namespace std;
int main(){

    char S[100];
    cout<<"Enter your string ";
    cin.getline(S,100);
    cout<<S<<endl;
    
    char w[100];
    cout<<"Enter your string ";
    cin.getline(w,100);
    
    
    cout<<"Your combined string is ";
    strncpy(S,w,5);
    cout<<S;



    char P[100] = "Hello world";
    cout<<strstr(P,"ll")<<endl;

    cout<<strcmp(S,w)<<endl;



    char s1[50]="x=10;y=20;z=40";
    char *token = strtok(s1,";");

    while(token!= NULL){
        cout<<token<<endl;
        token=strtok(NULL,";");
    }

    return 0;

      
}