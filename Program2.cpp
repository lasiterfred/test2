//-----------------------------------------------------------------
//
// Name:    William Schwanke
//
// Course:  CS 143, <4>,  Fall 2019
//
// Purpose: This program reads in 2 integers aka "Star Numbers" 
//          and a list of integers.
//
// Input : 2 integers aka "Star Numbers" and a list of integers.
//
// Output : valid or invalid date
//
//-----------------------------------------------------------------

#include <iostream>
#include <string>
using namespace std;

const int STAR_LOWER_LIMIT = 2;
const int STAR_UPPER_LIMIT = 200;
const int INT_LOWER_LIMIT = 2;
const int INT_UPPER_LIMIT = 2000;
const int ZERO = 0;
const int SINGULAR = 1;

int main()
{

   int starNum1 = 0, starNum2 = 0, factStarCount1 = 0;
   int multStarCount1 = 0, multStarCount2 = 0, numFromList = 0;
   int factStarCount2 = 0;

   cout << "Enter the first Star Number: " << endl;
   cin >> starNum1;
   cout << "Enter the second Star Number: " << endl;
   cin >> starNum2;
   cin >> numFromList;


   while (numFromList >= ZERO)
   {
      int factStar1 = 0, factStar2 = 0, multStar1 = 0;
      int multStar2 = 0;

      if (numFromList >= INT_LOWER_LIMIT && numFromList 
         <= INT_UPPER_LIMIT && starNum1 >= STAR_LOWER_LIMIT 
         && starNum1 <= STAR_UPPER_LIMIT)
      {
         factStar1 = starNum1 % numFromList;
         multStar1 = numFromList % starNum1;
         if (factStar1 == ZERO)
         {
            factStarCount1++;
         }
         if (multStar1 == ZERO)
         {
            multStarCount1++;
         }
      }
      if (numFromList >= INT_LOWER_LIMIT && numFromList 
         <= INT_UPPER_LIMIT && starNum2 >= STAR_LOWER_LIMIT 
         && starNum2 <= STAR_UPPER_LIMIT)
      {
         factStar2 = starNum2 % numFromList;
         multStar2 = numFromList % starNum2;
         if (factStar2 == ZERO)
         {
            factStarCount2++;
         }
         if (multStar2 == ZERO)
         {
            multStarCount2++;
         }
      }
      cin >> numFromList;
   }

   if (starNum1 < STAR_LOWER_LIMIT 
      || starNum1 > STAR_UPPER_LIMIT)
   {
      cout << "The First Star Number " << starNum1;
      cout << " is invalid" << endl;
   }
   if (factStarCount1 == SINGULAR)
   {
      cout << "The First Star Number " << starNum1 << " has ";
      cout << factStarCount1 << " factor and ";
   }
   else
   {
      cout << "The First Star Number " << starNum1 << " has ";
      cout << factStarCount1 << " factors and ";
   }
   if (multStarCount1 == SINGULAR)
   {
      cout << multStarCount1;
      cout << " multiple in the list" << endl;
   }
   else if (starNum1 >= STAR_LOWER_LIMIT && starNum1 
            <= STAR_UPPER_LIMIT)
   {
      cout << multStarCount1;
      cout << " multiples in the list" << endl;
   }

   if (starNum2 < STAR_LOWER_LIMIT 
      || starNum2 > STAR_UPPER_LIMIT)
   {
      cout << "The Second Star Number " << starNum2;
      cout << " is invalid" << endl;
   }
   else if (factStarCount2 == SINGULAR)
   {
      cout << "The Second Star Number " << starNum2 << " has ";
      cout << factStarCount2 << " factor and ";
   }
   else
   {
      cout << "The Second Star Number " << starNum2 << " has ";
      cout << factStarCount2 << " factors and ";
   }
   if (multStarCount2 == SINGULAR)
   {
      cout << multStarCount2;
      cout << " multiple in the list" << endl;
   }
   else if (starNum2 >= STAR_LOWER_LIMIT && starNum2 
            <= STAR_UPPER_LIMIT)
   {
      cout << multStarCount2;
      cout << " multiples in the list" << endl;
   }



   return 0;
}
