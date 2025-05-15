/** \ file Source2.cpp
* \brief Main file for shapes drawing program.
* \ details This program implements a menu-driven interface for the user to draw various shapes
 * \author Avramis kontou
 * \date 14/5/2025
 * This file contains the main function that provides a menu for the user to draw various shapes
 * such as lines, squares, and rectangles using characters.
 */
#include<iostream>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include "Shapes.h"

using namespace std;

/**
* Main function giving a menu for user to draw different shapes.
* @return 0 upon successful execution.
*/
int main() {
    srand(time(NULL)); // for generated random number 
    int option;
    do {
        cout << endl;
        cout << " Menu:" << endl;
        cout << "1) Draw a horizontal line" << endl;
        cout << "2) Draw a vertical line" << endl;
        cout << "3) Draw a square" << endl;
        cout << "4) Draw a rectangle" << endl;
        cout << "5) Draw random shapes" << endl;
        cout << "6) Quit" << endl;
        cout << "Choose your option: ";
        cin >> option;

        int size, height, length;
        char ch;

        switch (option) {
        case 1:
            cout << "Enter length and character: ";
            cin >> size >> ch;
            drawHorizontalLine(size, ch);
            break;
        case 2:
            cout << "Enter height and character: ";
            cin >> height >> ch;
            drawVerticalLine(height, ch);
            break;
        case 3:
            cout << "Enter size and character: ";
            cin >> size >> ch;
            drawSquare(size, ch);
            break;
        case 4:
            cout << "Enter height, length and character: ";
            cin >> height >> length >> ch;
            drawRectangle(height, length, ch);
            break;
        case 5:
            drawShapes(5);
            break;
        case 6:
            cout << "Exiting program..." << endl;
            break;
        default:
            cout << "Invalid option. Please try again." << endl;
        }
    } while (option != 6);
    return 0;
}