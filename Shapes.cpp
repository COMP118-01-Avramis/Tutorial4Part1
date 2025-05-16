/* File Shapes.cpp
* \brief Implementation file for shapes drawing functions.
 * \author Avramis kontou
 * \date 14/5/2025
 * This file contains the implementation of functions for drawing various shapes
 * such as lines, squares, and rectangles using characters.
 */
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include"Shapes.h"
using namespace std;

/**
* Draws a horizontal line.
* @param length The number of characters to display.
* @param ch The character to use for drawing.
*/
void drawHorizontalLine(int length, char ch) {
    assert(length > 0); // Pre condition 
    for (int i = 0; i < length; i++)
        cout << ch;
    cout << endl;
}

/**
* Draws a vertical line.
* @param height The number of lines to display .
* @param ch The character to use for drawing.
*/
void drawVerticalLine(int height, char ch) {
    assert(height > 0); // Pre condition
    for (int i = 0; i < height; i++)
        cout << ch << endl;
}

/**
* Draws an square.
* @param size The width and height of the square.
* @param ch The character to use for drawing.
*/
void drawSquare(int size, char ch) {
    assert(size > 0); // Pre condition
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++)
            cout << ch;
        cout << endl;
    }
}

/**
* Draws a filled square.
* @param size The width and height of the square.
* @param ch The character to use for drawing.
*/
void drawSquareFilled(int size, char ch) {
    drawSquare(size, ch);
}

/**
* Draws an rectangle.
* @param height The number of rows.
* @param length The number of columns.
* @param ch The character to use for drawing.
*/
void drawRectangle(int height, int length, char ch) {
    assert(height > 0 && length > 0); // Pre condition
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < length; j++)
            cout << ch;
        cout << endl;
    }
}

/**
* Draws a filled rectangle.
* @param height The number of rows.
* @param length The number of columns.
* @param ch The character to use for drawing.
*/
void drawRectangleFilled(int height, int length, char ch) {
    drawRectangle(height, length, ch);
}

/**
* Generates and draws a given number of random shapes.
* @param numShapes The number of shapes to generate.
*/
void drawShapes(int numShapes) {
    const int MAX_SHAPES = 10;
    assert(numShapes > 0); //Pre condition
    numShapes = (numShapes > MAX_SHAPES) ? MAX_SHAPES : numShapes;

    for (int i = 0; i < numShapes; i++) {
        int shapeType = rand() % 6 + 1;
        int shapeSize = rand() % 16 + 5; // Size between 5 and 20
        char shapeChar = rand() % (126 - 33 + 1) + 33; // ASCII printable chars 33-126

        cout << "\nGenerating shape " << (i + 1) << "..." << endl;

        switch (shapeType) {
        case 1:
            drawHorizontalLine(shapeSize, shapeChar);
            break;
        case 2:
            drawVerticalLine(shapeSize, shapeChar);
            break;
        case 3:
            drawSquare(shapeSize, shapeChar);
            break;
        case 4:
            drawSquareFilled(shapeSize, shapeChar);
            break;
        case 5:
            drawRectangle(shapeSize, shapeSize * 2, shapeChar);
            break;
        case 6:
            drawRectangleFilled(shapeSize, shapeSize * 2, shapeChar);
            break;
        }
    }
}