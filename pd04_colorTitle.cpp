#include <iostream>
#include <windows.h>  // For Windows-specific console color functions

using namespace std;

// Function to set console text color
void setColor(int color) {
    // Get handle to the console output
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

int main() {
    // Colors (Windows console color codes)
    const int RED = 12;
    const int GREEN = 10;
    const int YELLOW = 14;
    const int BLUE = 9;
    const int DEFAULT = 7;  // Default console color (usually white text)

    // First line
    setColor(RED);
    cout << "*     *    ";

    setColor(GREEN);
    cout << "   ***    ";

    setColor(YELLOW);
    cout << "   *     *    ";

    setColor(BLUE);
    cout << "  *****   " << endl;

    // Second line
    setColor(RED);
    cout << "*     *    ";

    setColor(GREEN);
    cout << "  *   *   ";

    setColor(YELLOW);
    cout << "   **   **    ";

    setColor(BLUE);
    cout << " *     *  " << endl;

    // Third line
    setColor(RED);
    cout << "*     *    ";

    setColor(GREEN);
    cout << " *     *  ";

    setColor(YELLOW);
    cout << "   * * * *    ";

    setColor(BLUE);
    cout << " *        " << endl;

    // Fourth line
    setColor(RED);
    cout << "*     *    ";

    setColor(GREEN);
    cout << " *******  ";

    setColor(YELLOW);
    cout << "   *  *  *    ";

    setColor(BLUE);
    cout << "  *****   " << endl;

    // Fifth line
    setColor(RED);
    cout << "*     *    ";

    setColor(GREEN);
    cout << " *     *  ";

    setColor(YELLOW);
    cout << "   *     *    ";

    setColor(BLUE);
    cout << "       *  " << endl;

    // Sixth line
    setColor(RED);
    cout << "*     *    ";

    setColor(GREEN);
    cout << " *     *  ";

    setColor(YELLOW);
    cout << "   *     *    ";

    setColor(BLUE);
    cout << " *     *  " << endl;

    // Last line
    setColor(RED);
    cout << " *****     ";

    setColor(GREEN);
    cout << " *     *  ";

    setColor(YELLOW);
    cout << "   *     *    ";

    setColor(BLUE);
    cout << "  *****   " << endl;

    // Reset color to default
    setColor(DEFAULT);

    return 0;
}
