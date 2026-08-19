#include <iostream>
using namespace std ;

class Player {
    private :
    int health;
    int score;

    public :
    Player(int h, int s) {
        health = h;
        score = s;
    }
    void dis() const {
        cout << "Health: " << health << ", Score: " << score << '\n';
    }
    void takeDamage(int damage) {
        health =damage;
    }
};

int main () {
    const Player warrior(100, 50);

    warrior.dis();

    return 0 ;
}