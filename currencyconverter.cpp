#include <iostream>
#include <string>
using namespace std;

int main() {
    char choice;
    int choice_currency;
    double currency;
    string selectagain;

    do {
        cout << "\n\t\t\t\t<----- Welcome to the Amazing Currency Converter ----->\n";
        cout << "\n\t\t\t\t|----------------------------------------------------|\n";
        cout << "\t\t\t\t|*** Let's Dive into the World of Currencies! ***    |\n";
        cout << "\t\t\t\t| Explore the vast array of currencies available:    |\n";
        cout << "\t\t\t\t|                                                    |\n";
        cout << "\t\t\t\t|     ||       ||       ||       ||                  |\n";
        cout << "\t\t\t\t|     ||       ||       ||       ||                  |\n";
        cout << "\t\t\t\t|     \\/       \\/       \\/       \\/                  |\n";
        cout << "\t\t\t\t|    Dollar   Rupees   Euro    Pound                 |\n";
        cout << "\t\t\t\t|----------------------------------------------------|\n";
        cout << "\n\t\t\t\t  (a) Dollar, (b) Rupees, (c) Euro, (d) Pound\n" << endl;
        cout << "  Welcome aboard! Please choose the currency option you want to convert from.\n" << endl;
        
		// Input currency choice
        cout << "Enter your choice : ";
        cin >> choice;

        cout << endl << endl;
 		 // Display currency conversion options based on the choice
        switch (tolower(choice)) {
            case 'a':
            	cout << "You selected to convert from DOLLAR." << endl;
                cout << "1. Convert DOLLAR to RUPEES " << endl;
                cout << "2. Convert DOLLAR to EURO  " << endl;
                cout << "3. Convert DOLLAR to POUND" << endl;
                break;
            case 'b':
			 cout << "You selected to convert from RUPEES." << endl;
                cout << "1. Convert RUPEE to  DOLLAR" << endl;
                cout << "2. Convert RUPEE to EURO" << endl;
                cout << "3. Convert RUPEE to POUND" << endl;
                break;
            case 'c':
            	 cout << "You selected to convert from EURO." << endl;
                cout << "1. Convert EURO to RUPEES " << endl;
                cout << "2. Convert EURO to DOLLAR" << endl;
                cout << "3. Convert EURO to POUND" << endl;
                break;
            case 'd':
            	cout << "You selected to convert from POUND." << endl;
                cout << "1. Convert POUND to DOLLAR " << endl;
                cout << "2. Convert POUND to EURO  " << endl;
                cout << "3. Convert POUND to RUPEE" << endl;
                break;
            default:
                cout << "** Invalid option **" << endl;
                continue;//restart loop
        }
		 // Input currency conversion choice and amount
        cout << "Select any option : ";
        cin >> choice_currency;
        cout << endl;
         // Validate the currency conversion choice
         
        if (choice_currency < 1 || choice_currency > 3) {
            cout << "** Invalid choice. Please enter a valid option (1, 2, 3) **" << endl;
            continue;// Restart loop to input valid choice
        }

        cout << "Enter the Amount : ";
        cin >> currency;
         //Perform currency conversion based on the choices
        
        switch (tolower(choice)) {
            case 'a':
                if (choice_currency == 1)
                    cout << "Your converted currency is : " << currency * 279.78 << " Rupees";
                else if (choice_currency == 2)
                    cout << "Your converted currency is : " << currency * 0.92 << " Euros";
                else if (choice_currency == 3)
                    cout << "Your converted currency is : " << currency * 0.79 << " Pounds";
                break;
            case 'b':
                if (choice_currency == 1)
                    cout << "Your converted currency is : " << currency * 0.0036 << " Dollars";
                else if (choice_currency == 2)
                    cout << "Your converted currency is : " << currency * 0.0033 << " Euros";
                else if (choice_currency == 3)
                    cout << "Your converted currency is : " << currency * 0.0028 << " Pounds";
                break;
            case 'c':
                if (choice_currency == 1)
                    cout << "Your converted currency is : " << currency * 304.82 << " Rupees";
                else if (choice_currency == 2)
                    cout << "Your converted currency is : " << currency * 1.09 << " Dollars";
                else if (choice_currency == 3)
                    cout << "Your converted currency is : " << currency * 0.86 << " Pounds";
                break;
            case 'd':
                if (choice_currency == 1)
                    cout << "Your converted value is : " << currency * 1.27 << " Dollars";
                else if (choice_currency == 2)
                    cout << "Your converted value is : " << currency * 1.17 << " Euros";
                else if (choice_currency == 3)
                    cout << "Your converted currency is : " << currency * 356.19 << " Rupees";
                break;
        }
		//Prompt to perform another conversion or exit
        cout << "\nDo you want to perform another conversion? (yes/no): ";
        cin >> selectagain;
    } while (selectagain == "yes" || selectagain == "Yes" || selectagain == "YES");
 		// Exit message
    cout << "\nThank you for using the currency converter. Have a great day!" << endl;

    return 0;
}
