#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <time.h>



using namespace std;



int main() {




    int amin = 1, amax = 5;
    int bmin = -7, bmax = 7;
    int cmin = -10, cmax = 10;
    int a, b, c;
    int array_a[3];
    int array_b[3];
    int array_c[3];



    srand(time(NULL));
    for (int i = 0; i < 3; i++) {
        a = amin + rand() % amax;
        b = bmin + rand() % (bmax - bmin + 1);
        c = cmin + rand() % (cmax - cmin + 1);




        array_a[i] = a;
        array_b[i] = b;
        array_c[i] = c;
    }
    cout << "\n \n WYLOSOWANE LICZBY \n \n";
    for (int i = 0; i < 3; i++) {
        cout << "a" << i << " ";
        cout << array_a[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 3; i++) {
        cout << "b" << i << " ";
        cout << array_b[i] << " ";
    }
    cout << endl;



    for (int i = 0; i < 3; i++) {
        cout << "c" << i << " ";
        cout << array_c[i] << " ";
    }
    cout << endl;



    cout << "---------------------- \n" << endl;
    for (int x = -10; x <= 10; x++) {



        for (int i = 0; i < 3; i++) {
            cout << x * array_a[i] << " ";
        }
        cout << endl;



        for (int i = 0; i < 3; i++) {
            cout << x * array_b[i] << " ";
        }
        cout << endl;



        for (int i = 0; i < 3; i++) {
            cout << x * array_c[i] << " ";
        }
        cout << endl << endl;
        cout << endl << endl;
    }

    return 0;



}