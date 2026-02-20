#include <iostream>
#include <cstdlib>   // for atoi
using namespace std;

#include "monster.h"

int main(int argc, char* argv[]) {

    // Check argument count
    if (argc < 4) {
        cout << "Not enough arguments.\n";
        return 0;
    }

    // 1️⃣ Your monster
    monster YOU(argv[1], atoi(argv[2]), atoi(argv[3]));

    // 2️⃣ Other monsters
    int i;
    for (i = 4; i < argc; i += 3) {

        if (i + 2 >= argc) break;   // safety check

        monster *p = new monster(argv[i],
                                 atoi(argv[i+1]),
                                 atoi(argv[i+2]));

        // 🥊 Fight each other
        YOU.Attack(*p);
        p->Attack(YOU);

        delete p;     // free memory
        YOU.heal();   // YOU heals after each fight
    }

    return 0;
}