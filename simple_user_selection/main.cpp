#include <iostream>
#include <iomanip>
using namespace std;

void show_menu() {
    string options[3] = {"1. Search", "2. View", "3. Quit"};
    
    for (int i = 0; i < 3; ++i) {
        cout << options[i] << endl;
    }
}

int user_selection() {
    cout << "Enter selection: " << endl;
    
    int input;
    cin >> input;

    return input;
}

void process_selection(int option) {
    switch (option) {
        case 1: 
            cout << "Searching..." << endl;
            break;
        case 2: 
            cout << "Viewing..." << endl;
            break;
        case 3: 
            cout << "Exiting..." << endl;
            break;
        default: 
            cout << "Please select from menu." << endl;
    }
}

int main(){
    show_menu();
    int option = user_selection();
    process_selection(option);
    
    return 0;
}