//
//  main.cpp
//  Book Exercise 2.10
//
//  Created by ax on 8/29/16.
//  Copyright © 2016 COMP130. All rights reserved.
//
//  Calculate energy
//

#include <iostream>
using namespace std;

int main() {
    
    // insert code here...
    cout << "Calculate Energy Needed to Heat Water \n";
    
    // D
    double water_kg = 0.0;
    double init_temp = 0.0;
    double final_temp = 0.0;
    double energy_needed = 0.0;
    
    // I
    cout << "Enter the amount of water in kilograms: ";
    cin >> water_kg;
    cout << "Enter the initial temperature: ";
    cin >> init_temp;
    cout << "Enter the final temperature: ";
    cin >> final_temp;
    
    // P
    energy_needed = water_kg * (final_temp - init_temp) * 4184;
    
    // O
    cout << "The energy needed is " << energy_needed << endl;
    
    return 0;
}
