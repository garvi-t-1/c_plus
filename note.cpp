#include <iostream>

void calculateNotes(int amount) {
    int notes100 = 0, notes50 = 0, notes20 = 0, notes10 = 0;

    while (amount > 0) {
        switch (true) {
            case (amount >= 100):
                notes100++;
                amount -= 100;
                break;
            case (amount >= 50):
                notes50++;
                amount -= 50;
                break;
            case (amount >= 20):
                notes20++;
                amount -= 20;
                break;
            case (amount >= 10):
                notes10++;
                amount -= 10;
                break;
            default:
                break;
        }
    }

    std::cout << "100 Rs notes: " << notes100 << std::endl;
    std::cout << "50 Rs notes: " << notes50 << std::endl;
    std::cout << "20 Rs notes: " << notes20 << std::endl;
    std::cout << "10 Rs notes: " << notes10 << std::endl;
}

int main() {
    int amount;
    std::cout << "Enter the amount: ";
    std::cin >> amount;

    if (amount <= 0) {
        std::cout << "Please enter a valid amount." << std::endl;
    } else {
        calculateNotes(amount);
    }

    return 0;
}

