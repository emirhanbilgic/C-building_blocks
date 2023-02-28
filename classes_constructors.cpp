#include <iostream>
using namespace std;

class ChessPlayers {
    public: 
        string name;
        int elo;
        bool GrandMaster;
        
        ChessPlayers(string aName, int aElo, bool aGrandMaster){ //a stands for argument and this is a constructor! 
            name = aName;
            elo = aElo;
            GrandMaster = aGrandMaster;
            cout << "Chess player " << name << " has been created in easy way. ";
            cout << name << " has " << elo << " elo points." << endl;
        } 
};

int main() 
{
    /*
    ChessPlayers  player1;
    player1.name = "Magnus Carlsen";
    player1.elo = 2866;
    player1.GrandMaster = true; // this is the way of creating an object in hard way.
    */
    
    ChessPlayers  player2("Mustafa Yilmaz", 2629, true);
    ChessPlayers  player3("Emirhan Bilgic", 1428, false);
    
    return 0;
}
