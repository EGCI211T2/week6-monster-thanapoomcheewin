#ifndef MONSTER_H
#define MONSTER_H

#include <iostream>
#include <string>
using namespace std;

class monster{
private:
    string name;
    int hp, potion;

public:
    
    monster(string n="Goblin", int h=100, int p=1){
        name = n;
        hp = h;        
        potion = p;
    }

    void Attack(monster &m){
        m.hp -= 50;
        if(m.hp < 0)
            m.hp = 0;
    }

    void heal(){
        if(potion > 0){
            hp += 30;
            potion--;
        }
    }

    void kill(){         
        hp = 0;
    }

    int get_hp(){
        return hp;
    }

    void display(){
        if(hp > 0)
            cout << name << " HP: " << hp << endl;
    }
};

#endif