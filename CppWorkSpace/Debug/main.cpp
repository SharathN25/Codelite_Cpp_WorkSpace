#include <iostream>
#include <string>
using namespace std;

class Player
{
public:
    string name;
    int health;
    int xp;
    
    Player()
    {
        name = "none";
        health = 100;
        xp = 10;
    }
    ~Player();
    
};

int main(void)
{
    Player Sharath();
    return 0;
}