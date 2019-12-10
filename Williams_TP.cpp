//Program Name: Swish or Miss
//Purpose: This program is to have the player shoot 1 of 3 shots and determine if they made missed or airballed the shot they took. 
//Author: Dajja Williams
//Date Last Modified: 12/09/19

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
    //declare the variables used in the program
    int shoot, arc, jump;
    char userChoice;

    do 
    {
     //Provide a game menu so the user can choose what they want to shoot
        cout << "Welcome to Swish or Miss" <<endl;
        cout << "Game Menu " <<endl;
        cout << "------------------------------" <<endl;
        cout << "1. freeThrows " << endl;
        cout << "2. midRange " << endl;
        cout << "3. threePointers "<< endl; 
        cout << "------------------------------" <<endl;

        cout << "Please enter what you would like to shoot from the game menu (1-5):" << endl; 
        cin >> shoot; 

        cout << "Enter the arc: " << endl;
        cin >> arc;

        cout << "Enter the jump: " << endl;
        cin >> jump;

        switch (shoot)
        {
            case 1:
                if ((jump == 0) || (arc > 45 & arc < 48))
                {
                    cout << "Swish!!" << endl;
                }
                else if(( jump > 0 & jump < 6) || (arc < 45 & arc > 48))
                {
                    cout << "Brick!!" <<endl;
                }
                else
                {
                    cout << "Airball!!" <<endl;
                }
                break;

            case 2:
                if ((jump == 6) || (arc > 45 & arc < 48))
                {
                    cout << "Swish!!" <<endl;
                }
                else if (( jump > 0) || (arc < 45 &  arc > 48))
                {
                    cout << "Brick!!" <<endl;
                }
                else
                {
                    cout << "Airball!!" <<endl;
                }
                break;

            case 3:
                if ((jump < 9 & jump > 6) || (arc > 45 & arc < 48))
                {
                    cout << "Swish!!" <<endl;
                }
                else if (( jump > 5) || (arc < 45 & arc > 48))
                {
                    cout << "Brick!!" <<endl;
                }
                else 
                {
                    cout << "Airball!!" <<endl;
                }
                break;
        }
        
        cout << "Would you like to continue? y for yes or n for no." << endl;
        cin >> userChoice;


    } while(userChoice == 'y' || userChoice == 'Y');

    return 0;
}
