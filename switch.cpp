#include <iostream>
using namespace std;
int main()
{
    string name;
    char grade;
    cout<<"Welcome\n" ;
    cout<<"Enter Your Name Please :";cin>>name;
    cout<<"Enter Your Grade Please :";cin>>grade;
    switch(grade)
    {
        case 'A':
        cout<<"Excellent\n";
        break;
        case 'B':
        cout<<"Very Good\n";
        break;
        case 'C':
        cout<<"Good\n";
        break;
        case 'D':
        cout<<"Next Time\n";
        break;
        defualt :
        cout<<"Invalid Grade\n";
        
    }
    cout<<"Your Name Is "<<name  ;
    
}