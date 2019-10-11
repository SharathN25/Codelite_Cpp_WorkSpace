/* Copy constructors -  */
#include <iostream>
#include <string>
using namespace std;

class Player
{
  
    private:
    //Attributes
    string name;
    int health;
    int xp;

    public:
    string get_name(){return name;}
    int get_health(){return health;}
    int get_xp(){return xp;}
    Player(string name_val="none",int health_val=0, int xap_val =0);
    
    //Copy constructors
    Player(const Player &source);

    //Destructor
    ~Player()
    {
        cout << "Destructor is called for :" <<name << endl;
    }
};

Player::Player(string name_val,int health_val,int xp_val)
      : name{name_val}, health{health_val}, xp{xp_val}
      {
        cout << "3 arg constructor for " + name << endl;
      }

Player::Player(const Player &source)
      :name{source.name},health{source.health},xp{source.health}
      {
          cout << "Copy constructore - made copy of :"<< source.name << endl;
      }

void display_player(Player p)
{
    cout  << "Name:" <<p.get_name() <<endl;
    cout  << "Health:" <<p.get_health() <<endl;
    cout  << "Xp:" <<p.get_xp() <<endl;
} 

int main()
{
    Player empty{"Sharath",100,200};
    display_player(empty); // Copy constructor will be called
    Player sharath{empty}; // Copy constructor will be called

    Player frank{"Frank"}; // 3 arg cons will be called
    Player hero{"hero",100};// 3 arg cons will be calledclTabCtrl
    Player villain {"Villain",100,55};// 3 arg cons will be called
    return 0;

}