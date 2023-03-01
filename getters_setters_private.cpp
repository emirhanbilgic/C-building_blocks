#include <iostream>
using namespace std;

class Countries{
    private:
        string continent;
    public:
        string name;
        int gdp;
    
    Countries(string aName, int aGdp, string aContinent){
        name = aName;
        gdp = aGdp;
        continentSetter(aContinent);
        cout << "gdp of " << name << " is: " << gdp << endl;
    } 
    
    void continentSetter(string aContinent){
        if(aContinent == "EU" || aContinent == "AS" || aContinent == "NA" || aContinent == "SA" || aContinent ==  "AF" || aContinent == "AN" || aContinent == "AU"){
            continent = aContinent;
        }
        else{
            continent = "NonValid";
        }
    }
    
    string continentGetter(){
        return continent;
    }
};

int main() {
    Countries country1("Turkey", 100, "AS");
    Countries country2("France", 300, "EU");
    cout << country1.gdp << endl;
    // cout << country2.continent;
    cout << country2.continentGetter() << endl;
    country2.continentSetter("AA");
    cout << country2.continentGetter();
    return 0;
}

/* 
output:
gdp of Turkey is: 100
gdp of France is: 300
100
EU
NonValid
*/
