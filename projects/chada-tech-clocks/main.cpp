#include <iostream>
#include "Clock.h"

// Function to display both clocks side-by-side
void displayClocks(const Clock& clock12, const Clock& clock24) {
    std::cout << "12-Hour Clock: ";
    clock12.displayTime();
    std::cout << "   24-Hour Clock: ";
    clock24.displayTime();
    std::cout << std::endl;
}

// Function to display the user menu
void showMenu() {
    std::cout << "\nMenu Options:\n"
        << "1. Add One Hour\n"
        << "2. Add One Minute\n"
        << "3. Add One Second\n"
        << "4. Exit\n"
        << "Enter your choice: ";
}

// Function to handle user input and update the clocks
void handleUserInput(Clock& clock12, Clock& clock24) {
    int choice;
    std::cin >> choice;

    switch (choice) {
    case 1:
        clock12.addHour();
        clock24.addHour();
        break;
    case 2:
        clock12.addMinute();
        clock24.addMinute();
        break;
    case 3:
        clock12.addSecond();
        clock24.addSecond();
        break;
    case 4:
        std::exit(0);
    default:
        std::cout << "Invalid choice, please try again.\n";
    }
}

// Function to get user input for the initial time
void getInitialTime(int& hour, int& minute, int& second) {
    std::cout << "Enter initial time (hour minute second): ";
    std::cin >> hour >> minute >> second;
}

int main() {
    // Variables to hold initial time
    int hour, minute, second;
    getInitialTime(hour, minute, second);

    // Initialize both clocks with the given initial time
    Clock clock12(hour % 12, minute, second, false);
    Clock clock24(hour, minute, second, true);

    // Loop to continuously display clocks and handle user input
    while (true) {
        displayClocks(clock12, clock24);
        showMenu();
        handleUserInput(clock12, clock24);
    }

    return 0;
}
