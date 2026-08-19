#include <iostream>

class Player {
    public:
    std :: string name; //data member
    void roar () {
        std :: cout << name << " Shouts!" << std :: endl;
    }
};

int main () {
    //direct object access (DOT Operator)
    Player p1;
    p1.name = "Thor";
    p1.roar();

    // object pointer access (Arrow operator)
    Player* p2 = &p1;
    p2-> name = "Odin";
    p2-> roar();
}