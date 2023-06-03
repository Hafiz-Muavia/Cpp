#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int spaces = 0, words = 1, sentences = 1, lines = 1, letters = 0;
    char ch;

    ifstream obj("C:/Users/Hafiz Muavia/Desktop/File Handling/ fh2.txt");
    while (obj.get(ch)) {
        if (ch == '\n' || (ch == '\r' && obj.peek() == '\n')) {
            lines++;
            sentences++;
            words++;
        } else if (ch == ' ') {
            spaces++;
            words++;
        } else {
            letters++;
        }
    }
    obj.close();

    cout << "Letters are: " << letters << endl;
    cout << "Words are: " << words << endl;
    cout << "Spaces are: " << spaces << endl;
    cout << "Sentences are: " << sentences << endl;
    cout << "Lines are: " << lines << endl;

    return 0;
}
