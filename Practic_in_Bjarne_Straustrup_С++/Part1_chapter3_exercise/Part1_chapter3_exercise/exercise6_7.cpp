//”пражнение 6

#include "std_lib_facilities.h"

int main()
{
    std::string a;
    std::string b;
    std::string c;
    cout << "vvedi 3 slova\n";
    cin >> a >> b >> c;
    if (a > b && b > c)
        cout << c << ',' << b << ',' << a;
    if (a > b && a > c && b < c)
        cout << b << ',' << c << ',' << a;
    if (b > a && a > c)
        cout << c << ',' << a << ',' << b;
    if (b > c && a < c)
        cout << a << ',' << c << ',' << b;
    if (c > a && a > b)
        cout << b << ',' << a << ',' << c;
    if (c > b && a < b)
        cout << a << ',' << b << ',' << c;
    if (a == b && b > c)
        cout << c << ',' << b << ',' << a;
    if (a == c && c > b)
        cout << b << ',' << a << ',' << c;
    if (a == b && b == c)
        cout << c << ',' << b << ',' << a;
    if (a == b && b < c)
        cout << a << ',' << b << ',' << c;
    if (a == c && c < b)
        cout << a << ',' << c << ',' << b;
    if (b == c && c < a)
        cout << c << ',' << b << ',' << a;
    if (b == c && c > a)
        cout << a << ',' << b << ',' << c;
}
