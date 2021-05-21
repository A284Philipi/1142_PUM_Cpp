#include <iostream>

using namespace std;

int main()
{
    int a, cont = 0, i;
    cin >> a;
    for (i = 0; i < a; i++){
        cont++;
        cout << cont;
        cont++;
        cout << " " << cont;
        cont++;
        cout << " " << cont << " PUM" <<endl;
        cont++;
    }
    return 0;
}
