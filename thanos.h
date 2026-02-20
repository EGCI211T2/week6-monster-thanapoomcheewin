#ifndef THANOS_H
#define THANOS_H

#include "monster.h"
#include <iostream>
using namespace std;

class Thanos {
private:
    int stones;
    int hp;

public:
    // Constructor
    Thanos(int s = 0, int h = 1000) {
        stones = s;
        hp = h;
    }

    // Destructor
    ~Thanos() {
        cout << "Thanos disappears...\n";
    }

    // Increase stones
    void operator++() {
        if (stones < 6)
            stones++;
        cout << "Stones: " << stones << endl;
    }

    // Snap finger
    void snap_finger(monster m[], int n) {

        cout << "Thanos snaps his finger...\n";

        if (stones == 6) {

            int kill = n / 2;

            for (int i = 0; i < kill; i++) {
                // Make hp = 0
                m[i].Attack(m[i]);  
                // Self attack trick assuming Attack reduces hp
            }

            cout << kill << " monsters vanished.\n";
        }
        else {
            cout << "Not enough stones!\n";
        }
    }
};

#endif