#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// ItemFrequency class declaration
class ItemFrequency {
private:
    // Constants and member variables
    static const int MAX_ITEMS = 1000;
    string items[MAX_ITEMS];
    int frequencies[MAX_ITEMS] = { 0 };
    int count = 0;

    // Private member functions
    void loadDataFromFile(const string& filename);

public:
    // Public member functions
    ItemFrequency(const string& filename);
    int getItemFrequency(const string& item);
    void printFrequencyList();
    void printFrequencyHistogram();
    void saveDataToFile(const string& filename);
};