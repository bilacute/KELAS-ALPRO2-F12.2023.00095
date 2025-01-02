#include <iostream>

using namespace std;

int main()
{
    int list[] = {4,3,4,60};
    int jumlah = sizeof(list) / sizeof (list[0]);
    int sum = 0;

    cout << "List 1 =";
    for (int i = 0; i < jumlah; i++) {
        cout << "[" << list[i] << "]";
    if (i < jumlah - 1){
        cout << "<=>";
    }
    sum += list[i];
    }

    cout << endl << "SUM =" <<sum <<endl;
return 0;
}
