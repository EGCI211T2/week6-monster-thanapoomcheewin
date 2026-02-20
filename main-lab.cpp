#include <iostream>
#include <cstdlib>   
using namespace std;

#include "monster.h"

int main(int argc, char* argv[]) {

    
    if (argc < 4) {
        cout << "Not enough arguments.\n";
        return 0;
    }

    
    monster YOU(argv[1], atoi(argv[2]), atoi(argv[3]));

    
    int i;
    for (i = 4; i < argc; i += 3) {

        if (i + 2 >= argc) break;   

        monster *p = new monster(argv[i],
                                 atoi(argv[i+1]),
                                 atoi(argv[i+2]));

       
        YOU.Attack(*p);
        p->Attack(YOU);

        delete p;     
        YOU.heal();   
    }

    return 0;
}