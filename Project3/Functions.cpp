#include "Header.h"

// loadDataFromFile function definition
// Reads the input file and populates the items and frequencies arrays
void ItemFrequency::loadDataFromFile(const string& filename) {
    ifstream inputFile(filename);
    string item;

    while (inputFile >> item && count < MAX_ITEMS) {
        bool found = false;
        for (int i = 0; i < count; i++) {
            if (items[i] == item) {
                frequencies[i]++;
                found = true;
                break;
            }
        }
        if (!found) {
            items[count] = item;
            frequencies[count] = 1;
            count++;
        }
    }
    inputFile.close();
}

// ItemFrequency constructor definition
ItemFrequency::ItemFrequency(const string& filename) {
    loadDataFromFile(filename);
}

// getItemFrequency function definition
// Returns the frequency of a specific item
int ItemFrequency::getItemFrequency(const string& item) {
    for (int i = 0; i < count; i++) {
        if (items[i] == item) {
            return frequencies[i];
        }
    }
    return 0;
}

// printFrequencyList function definition
// Prints a list of all items and their frequencies
void ItemFrequency::printFrequencyList() {
    for (int i = 0; i < count; i++) {
        cout << items[i] << " " << frequencies[i] << endl;
    }
}

// printFrequencyHistogram function definition
// Prints a histogram of the item frequencies
void ItemFrequency::printFrequencyHistogram() {
    for (int i = 0; i < count; i++) {
        cout << items[i] << " ";
        for (int j = 0; j < frequencies[i]; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// saveDataToFile function definition
// Saves the item frequencies to a file
void ItemFrequency::saveDataToFile(const string& filename) {
    ofstream outputFile(filename);
    for (int i = 0; i < count; i++) {
        outputFile << items[i] << " " << frequencies[i] << endl;
    }
    outputFile.close();
}