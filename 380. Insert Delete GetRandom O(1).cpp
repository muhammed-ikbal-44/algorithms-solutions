#include <vector>   
#include <cstdlib>
#include <ctime>
using namespace std;


class RandomizedSet {
public:
    vector<int> liste;

    RandomizedSet() {
        srand(time(0));
    }
    
    bool insert(int val) {
        int n = liste.size();
        if (n != 0) {
            for (int i = 0; i < n; i++) {
                if (liste[i] == val) return false;}
        }
        liste.push_back(val); 
        return true;
    }
    
    bool remove(int val) {
        int n = liste.size();
        if (n != 0) {
            for (int i = 0; i < n; i++) {
                if (liste[i] == val) {
                    liste.erase(liste.begin() + i); 
                    return true;
                } 
            }
        }
        return false;
    }
    
    int getRandom() {
       
        int random = rand() % liste.size();
        return liste[random];
    }
};
