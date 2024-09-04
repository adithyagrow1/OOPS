#include <iostream>
#include <conio.h>
#include <windows.h> // For Beep and Sleep functions

using namespace std;

// Function to simulate key press
void simulateKeyPress(char key) {
    switch (key) {
        case 'a':
            Beep(100, 500);
            cout << "Key 'a' pressed" << endl;
            break;
        case 's':
            Beep(200, 500);
            cout << "Key 's' pressed" << endl;
            break;
        case 'd':
            Beep(300, 500);
            cout << "Key 'd' pressed" << endl;
            break;
        case 'f':
            Beep(400, 500);
            cout << "Key 'f' pressed" << endl;
            break;
        case 'g':
            Beep(500, 500);
            cout << "Key 'g' pressed" << endl;
            break;
        case 'h':
            Beep(600, 500);
            cout << "Key 'h' pressed" << endl;
            break;
        case 'j':
            Beep(700, 500);
            cout << "Key 'j' pressed" << endl;
            break;
        case 'k':
            Beep(800, 500);
            cout << "Key 'k' pressed" << endl;
            break;
        case 'l':
            Beep(900, 500);
            cout << "Key 'l' pressed" << endl;
            break;
        case 'z':
            Beep(1000, 500);
            cout << "Key 'z' pressed" << endl;
            break;
        case 'x':
            Beep(1100, 500);
            cout << "Key 'x' pressed" << endl;
            break;
        case 'c':
            Beep(1200, 500);
            cout << "Key 'c' pressed" << endl;
            break;
        case 'v':
            Beep(1300, 500);
            cout << "Key 'v' pressed" << endl;
            break;
        case 'b':
            Beep(1400, 500);
            cout << "Key 'b' pressed" << endl;
            break;
        case 'n':
            Beep(1500, 500);
            cout << "Key 'n' pressed" << endl;
            break;
        case 'm':
            Beep(1600, 500);
            cout << "Key 'm' pressed" << endl;
            break;
        default:
            cout << "Invalid key" << endl;
            break;
    }
}

int main() {
    char key = 0;
    cout << "Press ENTER to exit" << endl;
    cout << "a s d f g h j k l z x c v b n m" << endl;

    while (key != '\r') {  // '\r' is ASCII for ENTER key
        key = getch();
        simulateKeyPress(key);
    }

    return 0;
}
