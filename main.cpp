#include <iostream>
#include "lib.h"

using namespace std;
int main () {
    char l='a';
    cin >> l;
    if ( verifica (l)) {
        cout << l;
    } else  {
     cout << "errore" << endl;
     }
    return 0;
}

