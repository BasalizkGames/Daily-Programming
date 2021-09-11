// Daily Challenge 399 - Letter Value Sum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

    #include <iostream> //Needed for cin and cout
    #include <algorithm> //Needed for transform function
    
    using namespace std;
    
    string word; //store the users word
    int totalValue; //the running total of the value of the word
    bool keepRunning = true; //used to keep the program running
    
    int main()
    {
        while (keepRunning) {
            cout << "Please enter a word" << endl;
            cin >> word;
            std::transform(word.begin(), word.end(), word.begin(), ::toupper); //Transforms all letters to uppercase
            
            for (int i = 0; i < word.length(); i++) {
                totalValue += word[i] - 64;
            }
    
            cout << "The value of " << word << " is: " << totalValue << endl;
    
            totalValue = 0;
            /*cout << "Would you like to try another word? Y/N     ";
            cin >> word;
            if (word == "n" || word == "N") {
                keepRunning = false;
            }*/
        }
    }



/*
 Challenge

Assign every lowercase letter a value, from 1 for a to 26 for z. Given a string of lowercase letters, find the sum of the values of the letters in the string.

lettersum("") => 0
lettersum("a") => 1
lettersum("z") => 26
lettersum("cab") => 6
lettersum("excellent") => 100
lettersum("microspectrophotometries") => 317
*/