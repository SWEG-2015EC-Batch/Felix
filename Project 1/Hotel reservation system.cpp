#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

using namespace std;

int main() {
    const int VIP_CAPACITY = 30;
    const int STANDARD_CAPACITY = 70;

    string names[100];  // Names of patrons
    int vipSeats[30];  // VIP seats
    int standardSeats[70];  // Standard seats
    int ages[100];  // Ages of patrons
    int totalVIP = 0;  // Total number of patrons in VIP section
    int totalStandard = 0;  // Total number of patrons in standard section
    int vipSeatIndex = 0;  // Index for assigning VIP seats
    int standardSeatIndex = 0;  // Index for assigning standard seats
    int choice;
    int n;

    do {
        cout << endl << setfill('=') << setw(100) << "FELIX Movie Theater Reservation Seat System" << setw(50) << "" << endl;
        cout << setfill('-') << "" << setw(40) << "" << endl;
        cout << "Menu\n1. Registration\n2. Review the current seat occupancy\n3. Search for patron\n4. ADMIN PANEL \n5. Exit from the program " << endl;
        cout << setfill('-') << "" << setw(40) << "" << endl;
        cout << "\nEnter a number from the menu: ";
        while (true) {
            
            cin >> choice; // Try to read an integer

            if (cin.fail()) {
                cout << "Invalid input.\nPlease enter a number: ";

                // Clear the error flag and discard the invalid input
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            } else {
                break;
            }
        }

        switch (choice) {
            case 1: {
                cout << setfill('-') << setw(42) << "Registration" << setw(30) << "" << endl;
                cout << setfill('-') << "" << setw(40) << "" << endl;
                cout << "Which section would you like to register?\n1. VIP SECTION\n2. STANDARD SECTION" << endl;
                cout << setfill('-') << "" << setw(40) << "" << endl;
                cout << "\nEnter 1 to register in VIP SECTION and 2 in STANDARD SECTION: ";
                int section;
                cin >> section;

                switch (section) {
                    vipfull:
                    case 1: {
                         cout<<setfill('-')<<""<<setw(41)<<"VIP SECTION"<<setw(30)<<"\n"<<endl;
                        if (totalVIP < VIP_CAPACITY) {
                            cout << "Enter the number of individuals to register in VIP SECTION: ";
                            cin >> n;

                            if (totalVIP + n <= VIP_CAPACITY) {
                                for (int i = 0; i < n; ++i) {
                                    cin.ignore();
                                    cout << "Enter name for person " << (i + 1) << ": ";
                                    getline(cin, names[totalVIP]);
                                    cout << "Enter age for person " << (i + 1) << ": ";
                                    while (true) {
                                        
                                        cin >> ages[totalVIP]; // Try to read an integer

                                        if (cin.fail()) {
                                            cout << "Invalid input.\nPlease enter a number: ";

                                            // Clear the error flag and discard the invalid input
                                            cin.clear();
                                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                        } else {
                                            break;
                                        }
                                    }
                                    vipSeats[vipSeatIndex] = vipSeatIndex + 1;  // Assign seat
                                    vipSeatIndex++;
                                    totalVIP++;
                                }
                                cout << "\nYour ticket:" << endl;
                                for (int i = totalVIP - n; i < totalVIP; ++i) {
                                    cout<<left<<setfill(' ')<<"| Name: " << setw(25) << names[i] << " | Age: " << setw(10) << ages[i] << " | Seat Number: FE-VIP- " << setw(15) << vipSeats[i] << "(VIP) |" << endl;
                                }
                            } else {
                                cout << "Not enough space in VIP SECTION." << endl;
                                cout <<"There is only space available for " << VIP_CAPACITY - totalVIP<<" People."<<endl;
                                ch2:
                                cout <<"Do you want to allocate some people in VIP and some in Standard section?(Yes/No): ";
                                string choice2;
                                cin >> choice2;
                                if (choice2 == "Yes" || choice2 == "yes"){
                                    int remainingSeats = VIP_CAPACITY - totalVIP;
                                    cout << "Enter the number of individuals to register in VIP SECTION: ";
                                    cin >> n;
                                    if (remainingSeats >= n) {
                                        for (int i = 0; i < n; i++) {
                                            cin.ignore();
                                            cout << "Enter name for person " << (i + 1) << ": ";
                                            getline(cin,names[totalVIP]);
                                            cout << "Enter age for person " << (i + 1) << ": ";
                                            while (true) {
                                        
                                                cin >> ages[totalVIP]; // Try to read an integer

                                                if (cin.fail()) {
                                                    cout << "Invalid input.\nPlease enter a number: ";

                                                    // Clear the error flag and discard the invalid input
                                                    cin.clear();
                                                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                                } else {
                                                    break;
                                                }
                                            }
                                            vipSeats[vipSeatIndex] = vipSeatIndex + 1;  // Assign seat
                                            vipSeatIndex++;
                                            totalVIP++;
                                        }
                                        for (int i = totalVIP - n; i < totalVIP; ++i) {
                                            cout << left << setfill(' ')<< setw(25) << "Name: " << names[i] << setw(10) << "Age: " << ages[i] << setw(10) << "Seat Number: FE-VIP-" << vipSeats[i] << " (VIP)" << endl;
                                        }
                                    } else {
                                        cout << "Invalid input. The remaining VIP seats are not sufficient for the specified number of individuals." << endl;
                                        cout << "Redirecting to STANDARD SECTION registration for the remaining people." << endl;
                                        section = 2;
                                    }
                                    goto standardfull;
                                } else if (choice2 == "No" || choice2 == "no") {
                                    ch3:
                                    cout <<"Do you all want to be allocated in the standard section? (yes/no): ";
                                    string choice3;
                                    cin >> choice3;
                                    if (choice3 == "Yes" || choice3 == "yes") {
                                        goto standardfull;
                                    }else if (choice3 == "No" || choice3 == "no") {
                                        cout <<"Sorry for the inconvinience. We will see you next time.";
                                        break;
                                    }else {
                                        cout <<"Invalid input."<<endl;
                                        goto ch3;
                                    }
                                } else {
                                    cout <<"Invalid input." <<endl;
                                    goto ch2;
                                }
                            }
                        } else {
                            cout << "VIP SECTION is full. Would you like to register in STANDARD SECTION? (yes/no): ";
                            string response;
                            cin >> response;
                            if (response == "yes") {
                                goto standardfull;
                            } else {
                                cout << "Thank you for using our program." << endl;
                            }
                        }
                        break;
                    }
                    standardfull: 
                    case 2: {
                        if (totalStandard < STANDARD_CAPACITY) {
                            cout<<setfill('-')<<""<<setw(46)<<"STANADRD SECTION"<<setw(30)<<"\n"<<endl;
                            cout << "Enter the number of individuals to register in STANDARD SECTION: ";
                            int n;
                            cin >> n;

                            if (totalStandard + n <= STANDARD_CAPACITY) {
                                for (int i = 0; i < n; ++i) {
                                    cin.ignore();
                                    cout << "Enter name for person " << (i + 1) << ": ";
                                    getline(cin, names[totalStandard + 30]);
                                    cout << "Enter age for person " << (i + 1) << ": ";
                                    while (true) {
                                        
                                        cin >> ages[totalStandard + 30]; // Try to read an integer

                                        if (cin.fail()) {
                                            cout << "Invalid input.\nPlease enter a number: ";

                                            // Clear the error flag and discard the invalid input
                                            cin.clear();
                                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                        } else {
                                            break;
                                        }
                                    }
                                    standardSeats[standardSeatIndex] = standardSeatIndex + 1;  // Assign seat
                                    standardSeatIndex++;
                                    totalStandard++;
                                }
                                cout << "\nYour Ticket:" << endl;
                                for (int i = totalStandard - n; i < totalStandard; ++i) {
                                    cout<<left<<setfill(' ')<<"| Name: " << setw(25) << names[i + 30] << " | Age: " << setw(10) << ages[i + 30] << " | Seat Number: FE-ST-" << setw(15) << standardSeats[i] + 30 << "(Standard) |" << endl;
                                }
                            } else {
                                cout << "Not enough space in Standard SECTION." << endl;
                                cout <<"There is only space available for " << STANDARD_CAPACITY - totalStandard<<" People."<<endl;
                                ch5:
                                cout <<"Do you want to allocate some people in VIP and some in Standard section?(Yes/No): ";
                                string choice2;
                                cin >> choice2;
                                if (choice2 == "Yes" || choice2 == "yes"){
                                    int remainingSeats = STANDARD_CAPACITY - totalStandard;
                                    cout << "Enter the number of individuals to register in VIP SECTION: ";
                                    cin >> n;
                                    if (remainingSeats >= n) {
                                        for (int i = 0; i < n; i++) {
                                            cin.ignore();
                                            cout << "Enter name for person " << (i + 1) << ": ";
                                            getline(cin,names[totalStandard + 30]);
                                            cout << "Enter age for person " << (i + 1) << ": ";
                                            while (true) {
                                        
                                                cin >> ages[totalStandard + 30]; // Try to read an integer

                                                if (cin.fail()) {
                                                    cout << "Invalid input.\nPlease enter a number: ";

                                                    // Clear the error flag and discard the invalid input
                                                    cin.clear();
                                                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                                } else {
                                                    break;
                                                }
                                            }
                                            standardSeats[standardSeatIndex] = standardSeatIndex + 1;  // Assign seat
                                            standardSeatIndex++;
                                            totalStandard++;
                                        }
                                        for (int i = totalStandard - n; i < totalStandard; ++i) {
                                            cout<<left<<setfill(' ')<<"| Name: " << setw(25) << names[i + 30] << " | Age: " << setw(10) << ages[i + 30] << " | Seat Number: FE-ST-" << setw(15) << standardSeats[i] + 30 << "(Standard) |" << endl;
                                        }
                                    } else {
                                        cout << "Invalid input. The remaining Standard seats are not sufficient for the specified number of individuals." << endl;
                                        cout << "Redirecting to VIP SECTION registration for the remaining people." << endl;
                                        section = 1;
                                    }
                                    goto vipfull;
                                } else if (choice2 == "No" || choice2 == "no") {
                                    ch4:
                                    cout <<"Do you all want to be allocated in the VIP section? (yes/no): ";
                                    string choice3;
                                    cin >> choice3;
                                    if (choice3 == "Yes" || choice3 == "yes") {
                                        goto vipfull;
                                    }else if (choice3 == "No" || choice3 == "no") {
                                        cout <<"Sorry for the inconvinience. We will see you next time.";
                                        break;
                                    }else {
                                        cout <<"Invalid input."<<endl;
                                        goto ch4;
                                    }
                                } else {
                                    cout <<"Invalid input." <<endl;
                                    goto ch5;
                                }
                            }
                        } else {
                            cout << "STANDARD SECTION is full. Would you like to register in VIP SECTION? (yes/no): ";
                            string response;
                            cin >> response;
                            if (response == "yes" || response == "Yes") {
                                goto vipfull;
                            } else {
                                cout << "Thank you for using our program." << endl;
                            }
                        }
                        break;
                    }
                    default:
                        cout << "Invalid input. Please try again." << endl;
                        cout << "\nYour Ticket:" << endl;
                        for (int i = (section == 1 ? totalVIP - n : totalStandard - n); i < (section == 1 ? totalVIP : totalStandard); ++i) {
                            cout << left << setfill(' ')<< setw(25)<< "Name: " << names[i]<< setw(10) << "Age: " << ages[i]<< setw(10) << "Seat Number: " << (section == 1 ? vipSeats[i] : standardSeats[i - VIP_CAPACITY]) << (section == 1 ? " (VIP)" : " (Standard)") << endl;
                        }
                }
                break;
            }
            case 2: {cout << setfill('-') << setw(66) << "Review of the current seat occupancy" << setw(30) << "" << endl;
                cout << "VIP Section Occupancy: " << totalVIP << "/" << VIP_CAPACITY << endl;
                cout << "Standard Section Occupancy: " << totalStandard << "/" << STANDARD_CAPACITY << endl;
                break;
            }
            case 3: {
                cout << "Enter the name of the patron to search: ";
                string searchName;
                cin >> searchName;

                bool found = false;
                for (int i = 0; i < 100; ++i) {
                    if (names[i] == searchName) {
                        cout << "Patron found. Seat Number: ";
                        if (i < VIP_CAPACITY) {
                            cout << vipSeats[i] << " (VIP)" << endl;
                        } else {
                            cout << standardSeats[i - VIP_CAPACITY] << " (Standard)" << endl;
                        }
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Patron not found." << endl;
                }
                break;
            }
            case 4:   {
           const string password = "5Ns-FelixLegends";
            string userPassword;
            cout<<"Enter password: ";
            cin>>userPassword;
            
        if(userPassword == password) {
            int choice4;
            cout<<"which section information do you want to see? "<<"\n1. VIP SECTION"<<"\n2. STANDARD SECTION"<<"\n3. BOTH SECTIONS"<<"\n\n Enter a number of your choice: ";
            cin>>choice4;
            switch(choice4){
                case 1:
                    cout<<setfill('-')<<""<<setw(35)<<"VIP SECTION"<<setw(26)<<"\n"<<endl;
                    cout<<left<<setfill(' ')<< "| " << setw(25) << "NAME" << " | " << setw(10) << "AGE" << " | " << setw(15) << "SEAT NUMBER" << " |" << endl;

                    cout<<setfill('-')<<""<<setw(61)<<""<<endl;
                    for (int i = 0; i < totalVIP; i++) {
                        cout<<left<<setfill(' ')<<"| " << setw(25) << names[i] << " | " << setw(10) << ages[i] << " | " << setw(15) << vipSeats[i] << " |" << endl;
                    }
                    break;
                case 2:   
                    cout<<setfill('-')<<""<<setw(35)<<"STANADRD SECTION"<<setw(26)<<"\n"<<endl;
                    cout<<left<<setfill(' ')<< "| " << setw(25) << "NAME" << " | " << setw(10) << "AGE" << " | " << setw(15) << "SEAT NUMBER" << " |" << endl;
                    cout<<setfill('-')<<""<<setw(61)<<""<<endl;
                    for (int i = 0; i < totalStandard; i++)
                    {
                        cout<<left<<setfill(' ')<<"| " << setw(25) << names[i + 30] << " | " << setw(10) << ages[i + 30] << " | " << setw(15) << standardSeats[i] + 30 << " |" << endl;
                    }
                    break;
                case 3:
                    cout<<setfill('-')<<""<<setw(35)<<"VIP SECTION"<<setw(26)<<"\n"<<endl;
                    cout<<left<<setfill(' ')<< "| " << setw(25) << "NAME" << " | " << setw(10) << "AGE" << " | " << setw(15) << "SEAT NUMBER" << " |" << endl;

                    cout<<setfill('-')<<""<<setw(61)<<""<<endl;
                    for (int i = 0; i < totalVIP; i++) {
                        cout<<left<<setfill(' ')<<"| " << setw(25) << names[i] << " | " << setw(10) << ages[i] << " | " << setw(15) << vipSeats[i] << " |" << endl;
                    }
                    cout<<setfill('-')<<""<<setw(35)<<"STANADRD SECTION"<<setw(26)<<"\n"<<endl;
                    cout<<left<<setfill(' ')<< "| " << setw(25) << "NAME" << " | " << setw(10) << "AGE" << " | " << setw(15) << "SEAT NUMBER" << " |" << endl;
                    cout<<setfill('-')<<""<<setw(61)<<""<<endl;
                    for (int i = 0; i < totalStandard; i++)
                    {
                        cout<<left<<setfill(' ')<<"| " << setw(25) << names[i + 30] << " | " << setw(10) << ages[i + 30] << " | " << setw(15) << standardSeats[i] + 30 << " |" << endl;
                    }
            }
        }else{
            cout<<"Incorrect password. Access denied."<<endl;
        }
           }
            break;
            case 5:
                cout << "\nThank you for using our program." << endl;
                break;
            default:
                cout << "Invalid input. Please try again." << endl;
        }

        cout << "" << setfill('=') << setw(150) << "" << endl;

    } while (choice != 5);

    return 0;
}