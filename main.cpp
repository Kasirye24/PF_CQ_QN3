#include <iostream>

using namespace std;

void sum_from_to(int first, int last) {
    int sum = 0;
    for (int i = first; i <= last; i++)
    {
       sum = sum + i;
    }
    cout << "The total Sum is: " << sum << endl;
}

int main() {
    int first = 5;
    int last = 15;
    sum_from_to(first, last);
    return 0;
}
