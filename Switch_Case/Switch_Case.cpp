#include <iostream>
using namespace std;
int main()
{
    char button;
    cout << "Input the Button" << endl;
    cin >> button;

    switch (button)
    {
    case 'a':
        cout << "Namaste" << endl;
        break;
    case 'b':
        cout << "Hello" << endl;
        break;
    case 'c':
        cout << "Salut" << endl;
        break;
    case 'd':
        cout << "Hola" << endl;
        break;
    case 'e':
        cout << "Ciao" << endl;
        break;

    default:
    cout<<"I am still learning more"<<endl;
        break;
    }
    return 0;
}
