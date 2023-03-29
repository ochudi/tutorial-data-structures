#include <iostream>
#include <string>

using namespace std;

int main() {
    string color, pluralNoun, celebrity;
    
    // Get user inputs
    cout << "Enter a color: ";
    getline(cin, color);
    cout << "Enter a plural noun: ";
    getline(cin, pluralNoun);
    cout << "Enter a celebrity name: ";
    getline(cin, celebrity);
    
    // Output the Mad Libs story
    cout << "Roses are " << color << endl;
    cout << pluralNoun << " are blue" << endl;
    cout << "I love " << celebrity << endl;
    
    return 0;
}
