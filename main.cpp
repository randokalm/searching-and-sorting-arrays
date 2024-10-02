#include <iostream>
#include <vector>

int main() {
    // Initialize the vector with the lucky numbers
    std::vector<int> luckyNumbers = {
        13579, 26791, 26792, 33445, 55555,
        62483, 77777, 79422, 85647, 93121
    };

    // Prompt the player to enter this week's winning number
    int winningNumber;
    std::cout << "Enter this week's 5-digit winning lottery number:";
    std::cin >> winningNumber;

    // Perform a linear search to check if the winning number is in the lucky numbers
    bool isWinner = false;
    for (int number : luckyNumbers) {
        if (number == winningNumber) {
            isWinner = true;
            break;
        }
    }

    // Report whether or not one of the tickets is a winner
    if (isWinner) {
        std::cout << "You have a winning ticket." << std::endl;
    } else {
        std::cout << "You did not win this week." << std::endl;
    }

    return 0;
}
