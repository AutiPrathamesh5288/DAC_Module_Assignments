#include <iostream>
#include <string>
using namespace std;

// Define an enum for traffic light colors
enum TrafficLight {
    Red,    // internally 0
    Yellow, // internally 1
    Green   // internally 2
};

int main() {
    string userInput;
    
    // Ask the user for the traffic light color
    cout << "Enter the traffic light color (Red, Yellow, Green): ";
    cin >> userInput;

    TrafficLight currentLight;

    // Convert user input to the corresponding enum value
    if (userInput == "Red" || userInput == "red") {
        currentLight = Red;
    } else if (userInput == "Yellow" || userInput == "yellow") {
        currentLight = Yellow;
    } else if (userInput == "Green" || userInput == "green") {
        currentLight = Green;
    } else {
        cout << "Invalid input!" << endl;
        return 1;  // Exit the program if the input is invalid
    }

    // Use a switch statement to print the message based on the traffic light state
    switch (currentLight) {
        case Red:
            cout << "Stop! The light is Red." << endl;
            break;
        case Yellow:
            cout << "Caution! The light is Yellow." << endl;
            break;
        case Green:
            cout << "Go! The light is Green." << endl;
            break;
    }

    return 0;
}
