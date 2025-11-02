#include <iostream>
#include <string>
#include <iomanip>   //  Added for better output formatting
#include <limits>    //  Added to use numeric_limits for safe input handling
using namespace std;

class Publisher {
    static int id;   //  Changed from global 'id' to static class member
                     //  Reason: keeps data encapsulated inside the class and shared among all objects

    int Bookno;
    string Title;    //  Changed from char Title[20]
    string Author;   //  Changed from char Author[10]
                     //  Reason: 'string' safely handles spaces and variable-length text

    float Price;
    float Totamt;

    //  Function kept private since only class methods use it
    float calculate(int copies) { 
        return copies * Price; 
    }

public:
    //  Static setter to allow user to define custom starting ID
    static void setStartingID(int start) { 
        id = start;  
    }  
    //  Reason: makes ID system flexible — user can start from 1234, 5000, etc.

    //  Constructor initializes values and auto-assigns unique Bookno
    Publisher() : Bookno(id++), Price(0), Totamt(0) {}

    void Readdata() {
        int nocopies;

        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        //  Added to safely clear leftover newline from previous input
        //  Reason: prevents getline() from reading an empty string

        cout << "\nEnter the Title name: ";
        getline(cin, Title);   //  Replaced 'cin >> Title;' with getline()
                               //  Reason: allows input with spaces (e.g., "C++ for Beginners")

        cout << "Enter the Author name: ";
        getline(cin, Author);  //  Same reason as above

        cout << "Enter the Price: ";
        cin >> Price;

        cout << "Enter the Number of copies: ";
        cin >> nocopies;

        Totamt = calculate(nocopies); //  Calculates total cost internally
    }

    void Displaydata() const {
        cout << "\n\t\tABC PUBLISHERS\n";
        cout << "\t\t~~~~~~~~~~~~~~\n";
        cout << "\t\t   INVOICE\n";
        cout << "\t\t   ~~~~~~~\n";
        cout << "==============================================\n";

        //  Using setw() and left/right alignment for cleaner, aligned display
        cout << left << setw(20) << "Book Number:"   << right << Bookno << endl;
        cout << left << setw(20) << "Title:"         << right << Title << endl;
        cout << left << setw(20) << "Author Name:"   << right << Author << endl;
        cout << left << setw(20) << "Price/Book:"    << right << fixed << setprecision(2) << Price << endl;
        cout << left << setw(20) << "Total Amount:"  << right << fixed << setprecision(2) << Totamt << endl;

        cout << "==============================================\n";
    }
};

//  Replaces global 'id' variable and gives it an initial default
int Publisher::id = 1001;

int main() {
    int n, start;

    cout << "Enter starting Book ID (e.g., 1234): ";
    cin >> start;

    Publisher::setStartingID(start);  
    //  Added: user chooses starting ID for Book numbers

    cout << "Enter the number of books (1-10): ";
    cin >> n;

    //  Input validation to prevent out-of-bounds access
    if (n < 1 || n > 10) {
        cout << "Invalid number! Enter between 1 and 10.\n";
        return 0;
    }

    Publisher p[10]; //  Array size matches allowed limit (1–10)
                     //  Reason: avoids memory overflow and keeps things simple

    //  Input for each book
    for (int i = 0; i < n; i++) {
        cout << "\n--- Enter details for book " << (i + 1) << " ---\n";
        p[i].Readdata();
    }

    //  Display formatted output for all books
    cout << "\n\n========== INVOICE SUMMARY ==========\n";
    for (int i = 0; i < n; i++) {
        p[i].Displaydata();
    }

    return 0;
}
