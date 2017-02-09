/***************************************************************
 * File: assign04.cpp
 * Author: Anderson Erichsen Fagundes
 * Purpose: Contains the main function to test the Product class.
 ***************************************************************/
#include <iostream>
#include <string>
using namespace std;

#include "product.h"

int main()
{
   // Declare your Product object here
   Product product;

   // Call your prompt function here
   product.promptData();
   product.getSalesTax();
   product.getShippingCost();
   product.getTotalPrice();
   
   // print in the screen the options for the user
   cout << endl;
   cout << "Choose from the following options:\n";
   cout << "1 - Advertising profile\n";
   cout << "2 - Inventory line item\n";
   cout << "3 - Receipt\n";
   cout << endl;
   cout << "Enter the option that you would like displayed: ";

   int choice;
   cin >> choice;
   
   cout << endl;
   
   if (choice == 1)
   {
      // Call my display advertising profile function
      product.advertisingDisplay();
   }
   else if (choice == 2)
   {
      // Call my display inventory line item function
      product.inventoryLineItem();
   }
   else
   {
      // Call my display receipt function
      product.receipt();
   }
     
   return 0;
}
