#include <iostream>
#include "monster.h"
#include "thanos.h"

using namespace std;

int main() {

    Thanos T;   // default: 0 stones, 1000 hp

    int n;
    cout << "How many monsters? ";
    cin >> n;

    // Make sure hp not 0 at start
    monster *m = new monster[n];

    cout << "\nThe battlefield is ready...\n";
    cout << "Thanos begins collecting stones...\n\n";

    ++T;
    ++T;
    T.snap_finger(m, n);

    ++T;
    ++T;
    T.snap_finger(m, n);

    ++T;
    ++T;   // Now stones = 6
    T.snap_finger(m, n);   // Kill n/2 monsters

    cout << "\nRemaining monsters:\n";

    for(int i = 0; i < n; i++)
        m[i].display();   // Only alive ones show

    delete [] m;   // Prevent memory leak

    return 0;
}