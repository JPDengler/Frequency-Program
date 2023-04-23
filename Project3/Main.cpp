#include "Header.h"

// Main function
int main() {
    // Create an ItemFrequency object and initialize it with data from the input file
    ItemFrequency* itemFrequency = new ItemFrequency("CS210_Project_Three_Input_File.txt");

    int choice;
    do {
        // Display the menu options to the user
        cout << "\n            Menu\n";
        cout << "-----------------------------\n";
        cout << "1. Get item frequency\n";
        cout << "2. Print frequency list\n";
        cout << "3. Print frequency histogram\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cout << endl;

        // Validate user input for choice
        while (cin.fail() || choice < 1 || choice > 4) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nInvalid choice.\nValid options are [1 - 4]\n";
            cout << "Enter your choice: ";
            cin >> choice;
        }

        string item;
        switch (choice) {
        case 1:
            // If user selects option 1, prompt for an item and display its frequency
            cout << "Enter the item: ";
            cin >> item;
            cout << "Frequency: " << itemFrequency->getItemFrequency(item) << endl;
            break;
        case 2:
            // If user selects option 2, print the frequency list of all items
            itemFrequency->printFrequencyList();
            break;
        case 3:
            // If user selects option 3, print a histogram of the frequency of all items
            itemFrequency->printFrequencyHistogram();
            break;
        case 4:
            // If user selects option 4, exit the program
            cout << "Exiting...\n";
            break;
        }
    } while (choice != 4);

    // Saves frequency data to file BEFORE deallocating memory used by the ItemFrequency object
    itemFrequency->saveDataToFile("frequency.dat");
    delete itemFrequency;

    return 0;
}