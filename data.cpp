#include <iostream>
#include <ctime>
#include <iomanip>

int main() {
    int minutes, seconds;
    
    std::cout << "Enter the number of minutes: ";
    std::cin >> minutes;
    
    std::cout << "Enter number of seconds: ";
    std::cin >> seconds;
    
    std::time_t startTime = std::time(nullptr);
    std::time_t targetTime = startTime + minutes * 60 + seconds;
    
    while(std::time(nullptr) < targetTime) {
        std::time_t remainingTime = targetTime - std::time(nullptr);
        int remainingMinutes = remainingTime / 60;
        int remainingSeconds = remainingTime % 60;
        
        std::cout << "Remaining time: " << std::setfill('0') << std::setw(2) << remainingMinutes << ":" 
                  << std::setfill('0') << std::setw(2) << remainingSeconds << std::endl;
    }
    
    std::cout << "DING! DING! DING!" << std::endl;
    
    return 0;
}
