#include <fstream>
#include <iostream>
#include <string>

using namespace std;
string morsed(string line);
main() {
    string line;
    cout << "Enter text: ";
    getline(cin, line); 

    string output = morsed(line); 
    cout << "Morse Code: " << output << endl;

}
string morsed(string line) {
    string result = "";
    for (char c : line) {
        if (c == 'A' || c == 'a') {
            result += ".-";
        }
        if (c == 'B' || c == 'b') {
            result += "-...";
        }
        if (c == 'C' || c == 'c') {
            result += "-.-.";
        }
        if (c == 'D' || c == 'd') {
            result += "-..";
        }
        if (c == 'E' || c == 'e') {
            result += ".";
        }
        if (c == 'F' || c == 'f') {
            result += "..-.";
        }
        if (c == 'G' || c == 'g') {
            result += "--.";
        }
        if (c == 'H' || c == 'h') {
            result += "....";
        }
        if (c == 'I' || c == 'i') {
            result += "..";
        }
        if (c == 'J' || c == 'j') {
            result += ".---";
        }
        if (c == 'K' || c == 'k') {
            result += "-.-";
        }
        if (c == 'L' || c == 'l') {
            result += ".-..";
        }
        if (c == 'M' || c == 'm') {
            result += "--";
        }
        if (c == 'N' || c == 'n') {
            result += "-.";
        }
        if (c == 'O' || c == 'o') {
            result += "---";
        }
        if (c == 'P' || c == 'p') {
            result += ".--.";
        }
        if (c == 'Q' || c == 'q') {
            result += "--.-";
        }
        if (c == 'R' || c == 'r') {
            result += ".-.";
        }
        if (c == 'S' || c == 's') {
            result += "...";
        }
        if (c == 'T' || c == 't') {
            result += "-";
        }
        if (c == 'U' || c == 'u') {
            result += "..-";
        }
        if (c == 'V' || c == 'v') {
            result += "...-";
        }
        if (c == 'W' || c == 'w') {
            result += ".--";
        }
        if (c == 'X' || c == 'x') {
            result += "-..-";
        }
        if (c == 'Y' || c == 'y') {
            result += "-.--";
        }
        if (c == 'Z' || c == 'z') {
            result += "--..";
        }
        if (c == ' ') {
            result += "-.-.-.-";
        }
    }
    return result;
}


