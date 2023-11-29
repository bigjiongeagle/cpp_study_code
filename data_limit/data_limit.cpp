#include <iostream>
#include <limits>

using namespace std;

int main()
{
    cout << "Int Min " << numeric_limits<int>::min() << endl;
    cout << "Int Max " << numeric_limits<int>::max() << endl;
    cout << "Unsigned Int Min " << numeric_limits<unsigned int>::min() << endl;
    cout << "Unsigned Int Max " << numeric_limits<unsigned int>::max() << endl;
    cout << "Long Int Min " << numeric_limits<long int>::min() << endl;
    cout << "Long Int Max " << numeric_limits<long int>::max() << endl;
    cout << "Unsigned Long Int Min " << numeric_limits<unsigned long int>::min() << endl;
    cout << "Unsigned Long Int Max " << numeric_limits<unsigned long int>::max() << endl;
    
    return 0;
}