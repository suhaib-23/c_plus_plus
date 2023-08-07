#include <iostream>
using namespace std;
int main(){
    string username,password;
    cout<<"Enter the Username :";
    cin>>username;
    cout<<"Enter the Password :";
    cin>>password;
     if (username=="admin" && password=="123")
    {
        cout<<"Welcome to the system";
    }
    else
    {
        cout<<"Something is wrong ";
    }
  
}