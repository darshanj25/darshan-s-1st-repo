#include <iostream>
using namespace std;

int main()
{
    // int a;
    // cin >> a;
    // if (a > 0)
    // {
    //     cout << "It is a positive no." << endl;
    // }
    // else
    // {
    //     cout << "It is a negative no." << endl;
    // }

    // int a = 9 ;
    // if(a==9){
    //     cout<<"Niney";
    // }
    // if(a>0){
    //     cout<<"Positive";
    // }
    // else{
    //     cout<<"Negative";
    // }

    // int a=2;
    // int b=a+1;
    // if ((a=3)==b){
    //     cout<<a;
    // }
    // else{
    //     cout<<a+1;
    // }

    // int a = 24;
    // if (a > 20)
    // {
    //     cout << "Love";
    // }
    // else if (a == 24)
    // {
    //     cout << "Lovely";
    // }
    // else
    // {
    //     cout << "Babbar";
    // }

    char a;
    cout << "Enter a character: ";
    cin >> a;
    if (a > 96 && a < 128)
    {
        cout << "This is a Lowercase character.";
    }
    else if (a > 64 && a < 91)
    {
        cout << "This is a Uppercase character.";
    }
    else if (a > 47 && a < 58)
    {
        cout << "This is a Number.";
    }
    else
    {
        cout << "This is a symbol.";
    }
}
