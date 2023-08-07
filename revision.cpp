/*Waxa weeye saddexda line ee ugu waa seddexda line ee application aanu la'aanti socon karin*/

#include <iostream>
using namespace std;
int main()
{
    /*cout -->waxa loo isticmaala markaa aad wax soo dabacayso
      cin  -->waxa loo isticmaala markaad adigu application wax galinayso*/
    //   cout<<"Hello World";
    /*Waxa cout la raciyaa(<<) marka hadal aad galisay aad rabto in uu kuu soo dabaco aad rabtid waxa aad ku
    dhex qoraysaa ("")*/
    /*
    Double --> waxa loo isticmaala markaad tiro decimal
    string --> waxa loo isticmaala markaad qoraal samaynayso
    var --> waxa loo isticmaala markaad xuruf samaynayso
    int --> waxa loo isticmaala markaad numbers samaynayso
    boolen --> waxa loo isticmaala markaad true iyo false samynayso
    */

    // int x = 32;
    // cout << x;

    /* if waxa loo isticmaala markaad xaalad aad hubinayso inay sax tahay in kale*/
    int age = 18;
    cout << "Enter Your Age?";
    cin >> age;
    if (age > 18)
    {
        cout << "waad codeyn kartaa";
    }
    else
    {
        cout << "sii soco ma codeyn kartide";
    }
}