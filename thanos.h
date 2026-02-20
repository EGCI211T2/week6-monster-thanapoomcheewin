#ifndef THANOS_H
#define THANOS_H

#include <iostream>
#include "monster.h"
using namespace std;

class Thanos {
private:
    int stones;
    int hp;

public:

   
    Thanos(int s=0, int h=1000){
        stones = s;
        hp = h;
    }

   
    ~Thanos(){
        cout << "Thanos has left the universe...\n";
    }

    
    void operator++(){
        if(stones < 6)
            stones++;

        cout << "Thanos now has " << stones << " stones.\n";
    }

    
    void snap_finger(monster m[], int n){

        cout << "Thanos snaps his fingers...\n";

       
        for(int i=0;i<n;i++)
            m[i].display();

        if(stones == 6){

            int half = n/2;

            for(int i=0;i<half;i++)
                m[i].kill();   

            cout << half << " monsters vanished!\n";
        }
        else{
            cout << "Nothing happens... Need 6 stones.\n";
        }
    }
};

#endif