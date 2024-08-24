#ifndef CLOCK_H
#define CLOCK_H

// Author: Christine Gitumbi

class Clock {
private:
    int hour;
    int minute;
    int second;
    bool is24HourFormat;
public:
    Clock(int h = 0, int m = 0, int s = 0, bool format = true);
    void addHour();
    void addMinute();
    void addSecond();
    void displayTime() const;
    void toggleFormat();
};

#endif

