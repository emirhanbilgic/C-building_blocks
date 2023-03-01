#include <iostream>

using namespace std;

class ChessPlayers{
    public:
        string name;
        int elo;
        bool GrandMaster;
    
    ChessPlayers(string aName, int aElo, bool aGrandMaster){
        name = aName;
        elo = aElo;
        GrandMaster = aGrandMaster;
        cout << "New player " << name << " has been created." << endl;
        cout << name <<  grand() << endl;
    }
    
    string grand(){
        if (GrandMaster == true){
            return " is a Grand Master.";
        }
        else if (GrandMaster == false){
            return " is not a Grand Master.";
        }
    }
    
};

int main() {
    ChessPlayers player1("Mustafa Yilmaz", 2629, true);
    ChessPlayers player2("Emirhan Bilgic", 1408, false);
    ChessPlayers player3("Magnus Carlsen", 2863, true);
    return 0;
}
