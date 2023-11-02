#include <iostream>
using namespace std;

int main() {
    string book = "Thus spoke zarathustra";
    string borrowerName = "";
    int returnDate = 0;
    int fine = 0;

    while (true) {
        int choice;
        cout << "\nLibrary System Menu:" << endl;
        cout << "1. Borrow a book" << endl;
        cout << "2. Return a book" << endl;
        cout << "3. Quit" << endl;
        cout << "Enter your choice (1/2/3): ";
        cin >> choice;

        switch (choice) {
        case 1:
            if (borrowerName == "") {
                cout << "Enter your name: ";
                cin >> borrowerName;
                cout << "You have borrowed the book: " << book << endl;
                cout << "Please return it within 14 days." << endl;
                returnDate = 14;
            }
            else {
                cout << "Sorry, the book is already borrowed by " << borrowerName << "." << endl;
            }
            break;

        case 2:
            if (borrowerName != "") {
                int daysLate;
                cout << "Enter the number of days late: ";
                cin >> daysLate;
                if (daysLate > 0) {
                    fine = daysLate;
                    cout << "You returned the book " << daysLate << " days late." << endl;
                    cout << "You have to owe a fine of $" << fine << "." << endl;
                }
                else {
                    cout << "Thank you for returning the book on time, " << borrowerName << "." << endl;
                }
                borrowerName = "";
            }
            else {
                cout << "No books to return for " << borrowerName << "." << endl;
            }
            break;

        case 3:
            cout << " Goodbye!" << endl;
            return 0;

        default:
            cout << "Invalid choice. Please enter a valid option (1, 2, or 3)." << endl;
        }
    }

    return 0;
}