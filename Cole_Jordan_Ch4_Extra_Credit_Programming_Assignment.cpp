//Jordan Cole
//CO SCI_802_26188FA19V
//Chap 4. Extra Credit Programming Assignment
//A program that displays the number of reward points earned given the number of books purchased (in a month).

#include <iostream>
using namespace std;

int main()
{
    //Create variables for all known data as well as user input
    const int reward0 = 0, reward1 = 5, reward2 = 15, reward3 = 30, reward4 = 50; 
    int books;


    //Get the user input (total books being purchased)
    cout << "How many books did you purchase through the book club this month? ";
    cin >> books;


    //Calculate and display the total points earned
    if(books == 0)
    cout << "You earned " << reward0 << " points this month." << endl;
    
    else if (books == 1)
    cout << "You earned " << reward1 << " points this month." << endl;
    
    else if (books == 2)
    cout << "You earned " << reward2 << " points this month." << endl;
    
    else if (books == 3)
    cout << "You earned " << reward3 << " points this month." << endl;
    
    else if (books >= 4)
    cout << "You earned " << reward4 << " points this month." << endl;
    
    else
    cout << "Books purchased must be greater than zero." << endl;


    system("pause");
    return 0;
}
