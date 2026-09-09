#include <iostream>
#include <iomanip>
#include "Clock.h"

// Constructor to initialize clock with default or given values
Clock::Clock(int h, int m, int s, bool format) : hour(h), minute(m), second(s), is24HourFormat(format) {}

// Function to add one hour to the clock
void Clock::addHour() {
    if (is24HourFormat) {
        hour = (hour + 1) % 24;
    }
    else {
        hour = (hour % 12) + 1;
    }
}

// Function to add one minute to the clock
void Clock::addMinute() {
    minute = (minute + 1) % 60;
    if (minute == 0) {
        addHour();
    }
}

// Function to add one second to the clock
void Clock::addSecond() {
    second = (second + 1) % 60;
    if (second == 0) {
        addMinute();
    }
}

// Function to display the current time in the correct format
void Clock::displayTime() const {
    if (is24HourFormat) {
        std::cout << std::setw(2) << std::setfill('0') << hour << ":"
            << std::setw(2) << std::setfill('0') << minute << ":"
            << std::setw(2) << std::setfill('0') << second;
    }
    else {
        int displayHour = hour % 12;
        if (displayHour == 0) displayHour = 12;
        std::string period = hour >= 12 ? "PM" : "AM";
        std::cout << std::setw(2) << std::setfill('0') << displayHour << ":"
            << std::setw(2) << std::setfill('0') << minute << ":"
            << std::setw(2) << std::setfill('0') << second << " " << period;
    }
}

// Function to toggle between 12-hour and 24-hour format
void Clock::toggleFormat() {
    is24HourFormat = !is24HourFormat;
}
