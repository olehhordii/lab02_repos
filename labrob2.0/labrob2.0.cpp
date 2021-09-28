using namespace std;
#include <iostream>
#include <math.h>

int main()
{
    double a;
    //double z1;
    double z2; //для гіт

    cout << "Enter a" << endl;
    cin >> a;

    //z1 = (sin(2 * a) + sin(5 * a) - sin(3 * a))/ (cos(a) + 1 - 2 * (sin(2 * a) * sin(2 * a)));

    z2 = 2 * sin(a);

    //cout << "z1= " << z1 << "\n" << endl;
    cout << "z2 = " << z2 << endl;


    cin.get();
    return 0;
}
