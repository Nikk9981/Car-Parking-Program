#include<iostream>
using namespace std;

int main() {
    int user_input;
    int amount = 0;
    int total_count = 0;
    int auto_count = 0, car_count = 0, bus_count = 0;
    int max_slots = 10; // Limit for parking slots

    while (true) { // Loop for multiple operations
        cout << "\n";
        cout << "=====================================\n";
        cout << "  VEHICLE PARKING MANAGEMENT SYSTEM  \n";
        cout << "=====================================\n";
        cout << "1. Park AutoRickshaw (₹100)\n";
        cout << "2. Park Car (₹200)\n";
        cout << "3. Park Bus (₹300)\n";
        cout << "4. Show Records\n";
        cout << "5. Delete One Specific Record\n";
        cout << "6. Delete All Records\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> user_input;

        if (user_input == 1) {
            if (total_count < max_slots) {
                total_count++;
                auto_count++;
                amount += 100;
                cout << "AutoRickshaw parked successfully!\n";
            } else {
                cout << "Parking Full! No more slots available.\n";
            }
        } else if (user_input == 2) {
            if (total_count < max_slots) {
                total_count++;
                car_count++;
                amount += 200;
                cout << "Car parked successfully!\n";
            } else {
                cout << "Parking Full! No more slots available.\n";
            }
        } else if (user_input == 3) {
            if (total_count < max_slots) {
                total_count++;
                bus_count++;
                amount += 300;
                cout << "Bus parked successfully!\n";
            } else {
                cout << "Parking Full! No more slots available.\n";
            }
        } else if (user_input == 4) {
            cout << "\n===========================\n";
            cout << "Total Vehicles Parked: " << total_count << "\n";
            cout << "AutoRickshaws: " << auto_count << " | Cars: " << car_count << " | Buses: " << bus_count << "\n";
            cout << "Total Amount Collected: ₹" << amount << "\n";
            cout << "===========================\n";
        } else if (user_input == 5) {
            int del_choice;
            cout << "Delete which vehicle? (1: AutoRickshaw, 2: Car, 3: Bus): ";
            cin >> del_choice;
            if (del_choice == 1 && auto_count > 0) {
                auto_count--;
                total_count--;
                amount -= 100;
                cout << "One AutoRickshaw removed!\n";
            } else if (del_choice == 2 && car_count > 0) {
                car_count--;
                total_count--;
                amount -= 200;
                cout << "One Car removed!\n";
            } else if (del_choice == 3 && bus_count > 0) {
                bus_count--;
                total_count--;
                amount -= 300;
                cout << "One Bus removed!\n";
            } else {
                cout << "Invalid choice or no vehicles of this type to remove!\n";
            }
        } else if (user_input == 6) {
            amount = 0;
            total_count = auto_count = car_count = bus_count = 0;
            cout << "All records deleted!\n";
        } else if (user_input == 7) {
            cout << "Exiting Program. Thank You!\n";
            break;
        } else {
            cout << "Invalid Input! Please try again.\n";
        }
    }
    return 0;
}
