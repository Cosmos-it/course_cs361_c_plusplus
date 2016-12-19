//  Rectangle class
//
//  Created by Taban Cosmos on 11/21/16.
//  Copyright © 2016 Taban Cosmos. All rights reserved.
//

#ifndef Rectangle_h
#define Rectangle_h

#include <stdio.h>
#include <stdlib.h>     /* abs */
#include <math.h>
#include <array>
#include <iostream>
#include <iomanip>
#include <exception>
#include <vector>
#include "Point.h"

using namespace std;


//RT template type (Generic for both integer and double
template <typename RT>
class Rectangle {
private:
    RT const cordsH = -100.00, cordsV = 100.00;
    Point<RT> left1A;
    Point<RT> left2A;
    Point<RT> right1A;
    Point<RT> right2A;
    Point<RT> left1B;
    Point<RT> left2B;
    Point<RT> right1B;
    Point<RT> right2B;
    Point<RT> right1C;
    Point<RT> right2C;
    RT scale {2};
    RT widthX {0}; //width of rect
    RT heightY {0}; //width of rect
    RT widthX2 {0}; //width of rect
    RT heightY2 {0}; //width of rect
    RT diagonalLength {0}; //diagonal length
    RT overlapping {0}; //store overlap
    RT intersection {0}; //store intersection
    
    
public:
    /*-------------------------------------*
     First part.
     Three overloaded functions
     */
    
    //empty constructor
    Rectangle(){ }
    
    //getters
    void setHeightAndWith(RT height, RT width){
        this->heightY = height;
        this->widthX = width;
    }
    RT getHeight1() { return heightY; }
    RT getWidth1() { return widthX; }
    RT getHeight2() { return heightY2; }
    RT getWidth2() { return widthX2; }
    
    RT getDiagonalLength() { return diagonalLength; }
    //set lower cords
    void setLef1tcord(Point<RT> point) {
        if ( point.x  >= -100 && point.x <= 100){
            left1A = point;
            left1B = point;
        } else {
            throw std::invalid_argument( "X | Y [-100,100]");
        }
    }
    
    //get lower left cords
    RT getLeft1cordx() { return left1A.x; }
    RT getLeft1cordy() { return left1A.y; }
    
    //set set lower right
    void setRight1tcord(Point<RT> point) {
        if ( point.x  >= -100 && point.x <= 100){
            right1A = point;
            right1B = point;
        } else {
            throw std::invalid_argument( "X | Y [-100,100]");
        }
    }
    
    //get lower right
    RT getRight1cordx() { return right1A.x; }
    RT getRight1cordy() {return right1A.y; }
    
    //set upper right
    void setRightcord(Point<RT> point) {
        if (point.x >= -100 && point.y <= 100){
            right1C = point;
            right2C = point;
        } else {
            throw std::invalid_argument( "X | Y [-100,100]");
        }
    }
    
    //get upper cords
    RT getLeft2cordx() { return left2A.x; }
    RT getLeft2cordy() { return left2A.y; }
    
    
    //perimeter of one rectangle
    RT perimeterOfRectangle(){
        return 2*(getHeight1()) + 2*(getWidth1());
    }
    
    //perimeter of two rectangle intersection
    //Work on this.
    RT perimeterOfRectangle(RT intersectionA, RT intersectionB){
        return 0;
    }
    
    //perimeter of two non-overlapping rectangle
    //Work on this.
    RT perimeterOfRectangle(RT nonOverlapping){
        return 0;
    }
    
    /*-----------------------------------------------------*
     Second part
     Three overloaded funcitons
     */
    
    //area of a rectangle
    RT areaOfRectangle(){
        return this->heightY * widthX;
    }
    
    //area of intersection for two rectangle
    //Work on this.
    void areaOfRectangle(Point<RT> rectangleWIthIntersection){
        // Area of two rectanlge that intersect
        
    }
    
    //area of total shape when two rectangles intersect
    //Work on this.
    void areaOfRectangle(RT totalShape) {
        /*
         Find the area of two rectangle with intersection
         area of first rect + sec rect - intersect rect.
         */
        RT rectOne = this->areaOfRectangle();
        RT rectTwo = getHeight2() * getWidth2();
        rectOne + rectTwo;
    }
    
    //find length of the diagonal of a rectangle
    void lengthOfDiagonalRectangle(){
        cout << sqrt(getHeight1()*getHeight1() + getWidth1()*getWidth1());
    }
    
    //find length of the diagonal of the intersection of two rectangles
    //Work on this.
    void lengthOfDiagonalRectangle(Point<RT> left1, Point<RT> right1, Point<RT> left2, Point<RT> right2){
        //add the diagonal for both
        
        if (isOverlap(left1, right1, left2, right2)){
            this->newCords();
            lengthOfDiagonalRectangle();
        }
        
    }
    
    /*--------------------------------------------------------------*
     Third part
     */
    
    //determine whether a rectangle is contained in another rectangle
    //Overlap
    //Find overlap between two rectangles
    RT isOverlap(Point<RT> left1, Point<RT> right1, Point<RT> left2, Point<RT> right2)
    {
        // If rectangle is on left side of other
        if (left1.x > right2.x || left2.x > right1.x)
            return false;
        
        // If rectangle is above another
        if (left1.y < right2.y || left2.y < right1.y)
            return false;
        return true;
    }
    
    //intersection
    // Work on this.
    RT intersect(Point<RT> const &first, Rectangle const &second) {
        return !isOverlap(first, second);
    }
    
    //calculate area of enclosing minus enlosed rectanlges.
    //Work on this.
    RT areaOfEnclosingMinusEnclosing(Point<RT> left, Point<RT> right){
        return 0;
    }
    
    //recursively grow a rectangle inside another.
    void expandRectangle(Point<RT> left, Point<RT> right, RT &count){
        count++;
        left.x++;
        left.y++;
        right.x++;
        right.y++;
        if (count <= getHeight1() || count <= getWidth1()){
            expandRectangle(left,right, count);
        }
    }
    
public:
    
    void  newCords(Point<RT> left, Point<RT> right){
        left1A.y = left.y + this->getHeight1();
        left1A.x = left.x + this->getWidth1();
        right1A.y = right.y + this->getHeight1();
        right1A.x = right.x + this->getWidth1();
    }
    
    
};


#endif /* Rectangle_h */
