//
//  main.cpp
//  CartesianPlce
//
//  Created by Taban Cosmos on 11/21/16.
//  Copyright © 2016 Taban Cosmos. All rights reserved.
//

#include <iostream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Rectangle.h"
#include "Point.h"

using namespace std;

int main(int argc, const char * argv[]) {
    
    cout << "Rectangle math problem!\n";
    
    string exit = "q";
    string q;
    double left1InputA {0}, left1InputB {0},
    right2InputA {0}, right2InputB {0};
    double heightA, widthA, heightB, widthB = {0};
    
    
    Point<double> left1, right1, left2, right2;
    Rectangle<double> rectangle;
    vector<Rectangle<double>> storeRect;
    
    try {
        do {
            while (1) {
                cout << "To end the program enter (q) otherwise enter 1:";
                getline(cin, q);
                if (q == exit){
                    break;
                } else {
                    cout << "\nEnter your first set of coordinates";
                    cout <<"\nX:Coord: ";
                    cin >> left1InputA;
                    cout << "\nY:Coord: ";
                    cin >> left1InputB;
                    
                    cout << "\nEnter height";
                    cin >> heightA;
                    cout << "\nEnter Width";
                    cin >> widthA;
                    
                    
                    cout << "\nEnter your second set of coordinates";
                    cout <<"\nX:Coord: ";
                    cin >> right2InputA,
                    cout << "\nY:Coord: ";
                    cin >> right2InputB;
                    
                    cout << "\nEnter height";
                    cin >> heightB;
                    cout << "\nEnter width";
                    cin >> widthB;
                    
                    left1 = {left1InputA, left1InputB}, right1 = {right2InputA, right2InputB};
                    
                    rectangle.setLef1tcord(left1);
                    rectangle.setRight1tcord(right1);
                    rectangle.setHeightAndWith(heightA, widthA);
                    
                    double l1x = rectangle.getLeft1cordx();
                    double l1y = rectangle.getLeft1cordy();
                    double rx = rectangle.getRight1cordx();
                    double ry = rectangle.getRight1cordy();
                    double test = rectangle.getRight1cordx();
                    double area = rectangle.areaOfRectangle();
                    storeRect.push_back(rectangle);
                    
                    rectangle.setLef1tcord(left1);
                    rectangle.setRight1tcord(right1);
                    rectangle.setHeightAndWith(heightA, widthA);
    
                    storeRect.push_back(rectangle);
                    
//                    double perimeter = rectangle.perimeterOfRectangle();
//                    cout << "\nFirst coordinates: x: " << l1x << " last y: " << l1y ;
//                    cout << "\nSecond Coordinate: x: " << rx << " last y: " << ry ;
//                    cout << "\n: Height: " << rectangle.getHeight1() << " \n: Width : " << rectangle.getWidth1() ;
//                    cout << "\n: Area: " << area;
//                    cout << "\n: Perimeter: " << perimeter;
//                    cout << "\n: test: " << test;
//                    cout << "\nDiagonal of a rectangle:" << rectangle.getDiagonalLength();
                    
                    
//                    double count {0};
//                    rectangle.expandRectangle(left1, right1, count);
//                    rectangle.newCords(left1, right1);
//                    
//                    cout << "\n:New Width: " << rectangle.getWidth2();
//                    cout << "\n:New Heights: " << rectangle.getHeight2();
                    
                    for (Rectangle<double> rect : storeRect){
                        cout << rect.getWidth2();
                        
                    }
                    
                    //New coordinate for new rectangle.
                    if (rectangle.isOverlap(left1, right1, left2, right2)) {
                        
                        
                    }
                    cout << "\n";
                }
                
            }
        } while (q != exit);
        
        if (q == exit) {
            cout << "Program ended ...";
        }
        
    } catch (const std::invalid_argument& e) {
        cout << e.what();
        cout << "\n";
    }
    
    return 0;
    
    
    
    
}
