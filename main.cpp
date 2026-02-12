#include <iostream>
using namespace std;

const char* RESET = "\033[0m";
const char* TITLE = "\033[1;36m";
const char* MENU = "\033[36m";
const char* INPUT = "\033[33m";
const char* OK = "\033[32m";
const char* ERR = "\033[31m";

int showMainMenu() {
    int choice;
    cout << "\n" << TITLE << "=== UNIT CONVERTER ===" << RESET << "\n";
    cout << "1) Temperature\n";
    cout << "2) Length\n";
    cout << "3) Weight\n";
    cout << "4) Exit\n";
    cout << INPUT << "Choose (1-4): " << RESET;
    cin >> choice;
    return choice;
}

int showTemperatureMenu() {
    int choice;
    cout << "\n" << MENU << "--- Temperature ---" << RESET << "\n";
    cout << "1) C -> F\n";
    cout << "2) F -> C\n";
    cout << "3) C -> K\n";
    cout << "4) K -> C\n";
    cout << "5) Back\n";
    cout << INPUT << "Choose (1-5): " << RESET;
    cin >> choice;
    return choice;
}

int showLengthMenu() {
    int choice;
    cout << "\n" << MENU << "--- Length ---" << RESET << "\n";
    cout << "1) cm -> m\n";
    cout << "2) m -> cm\n";
    cout << "3) m -> km\n";
    cout << "4) km -> m\n";
    cout << "5) Back\n";
    cout << INPUT << "Choose (1-5): " << RESET;
    cin >> choice;
    return choice;
}

int showWeightMenu() {
    int choice;
    cout << "\n" << MENU << "--- Weight ---" << RESET << "\n";
    cout << "1) kg -> lb\n";
    cout << "2) lb -> kg\n";
    cout << "3) g -> kg\n";
    cout << "4) kg -> g\n";
    cout << "5) Back\n";
    cout << INPUT << "Choose (1-5): " << RESET;
    cin >> choice;
    return choice;
}

void runTemperature() {
    int choice;
    double val, result;

    do {
        choice = showTemperatureMenu();

        if (choice >= 1 && choice <= 4) {
            cout << INPUT << "Enter value: " << RESET;
            cin >> val;
        }

        if (choice == 1) {
            result = (val * 9.0 / 5.0) + 32;
            cout << OK << "Result: " << RESET << result << " F\n";
        } else if (choice == 2) {
            result = (val - 32) * 5.0 / 9.0;
            cout << OK << "Result: " << RESET << result << " C\n";
        } else if (choice == 3) {
            result = val + 273.15;
            cout << OK << "Result: " << RESET << result << " K\n";
        } else if (choice == 4) {
            result = val - 273.15;
            cout << OK << "Result: " << RESET << result << " C\n";
        } else if (choice != 5) {
            cout << ERR << "Invalid choice." << RESET << "\n";
        }
    } while (choice != 5);
}

void runLength() {
    int choice;
    double val, result;

    do {
        choice = showLengthMenu();

        if (choice >= 1 && choice <= 4) {
            cout << INPUT << "Enter value: " << RESET;
            cin >> val;
        }

        if (choice == 1) {
            result = val / 100;
            cout << OK << "Result: " << RESET << result << " m\n";
        } else if (choice == 2) {
            result = val * 100;
            cout << OK << "Result: " << RESET << result << " cm\n";
        } else if (choice == 3) {
            result = val / 1000;
            cout << OK << "Result: " << RESET << result << " km\n";
        } else if (choice == 4) {
            result = val * 1000;
            cout << OK << "Result: " << RESET << result << " m\n";
        } else if (choice != 5) {
            cout << ERR << "Invalid choice." << RESET << "\n";
        }
    } while (choice != 5);
}

void runWeight() {
    int choice;
    double val, result;

    do {
        choice = showWeightMenu();
 
        if (choice >= 1 && choice <= 4) {
            cout << INPUT << "Enter value: " << RESET;
            cin >> val;
        }

        if (choice == 1) {
            result = val * 2.20462;
            cout << OK << "Result: " << RESET << result << " lb\n";
        } else if (choice == 2) {
            result = val / 2.20462;
            cout << OK << "Result: " << RESET << result << " kg\n";
        } else if (choice == 3) {
            result = val / 1000;
            cout << OK << "Result: " << RESET << result << " kg\n";
        } else if (choice == 4) {
            result = val * 1000;
            cout << OK << "Result: " << RESET << result << " g\n";
        } else if (choice != 5) {
            cout << ERR << "Invalid choice." << RESET << "\n";
        }
    } while (choice != 5);
}

int main() {
    int mainChoice;

    do {
        mainChoice = showMainMenu();

        if (mainChoice == 1) {
            runTemperature();
        } else if (mainChoice == 2) {
            runLength();
        } else if (mainChoice == 3) {
            runWeight();
        } else if (mainChoice != 4) {
            cout << ERR << "Invalid choice." << RESET << "\n";
        }

    } while (mainChoice != 4);

    cout << MENU << "Exiting..." << RESET << "\n";
    return 0;
}
