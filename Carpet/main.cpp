//  main.cpp
//  Carpet
//  Created by Bryan Brinkman on 2/6/17.
//  Copyright © 2017 Bryan Brinkman. All rights reserved.

#include <iostream>

using namespace std;

int main()
{
    double length, width, price, area, cost;
    
    // Print Enter length of room
    cout << "Enter length of the room: ";
    
    // Read Length
    cin >> length;
    
    // Print Enter width of room
    cout << "Enter the width of the room: ";
    
    // Read width
    cin >> width;
    
    // Print Enter the price
    cout << "Enter the price: ";
    
    // Read Price
    cin >> price;
    
    // Calculate Area = Width * Length
    area = width * length;
    
    // Cost = Area * Price
    cost = area * price;
    
    // Print Price
    cout << "The price of the carpet is: " << cost << endl;
    
    return 0;
    
}
