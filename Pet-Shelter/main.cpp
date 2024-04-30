#include "Pet.h"
#include "Helper.h"

int main() {
    Pet* pets[MAX_PETS];
    int pets_num = 0;

    cout << "Hello! Welcome to the Community Pet Shelter, we can help manage a maximum capacity of 50 pets."
         << endl;
    cout << "Would you like to use the program (Y/N)? " << endl;
    char user_answer;
    cin >> user_answer;

    if (user_answer == 'N') {
        cout << "Okay, have a nice day!" << endl;
        return 0;
    }

    if (user_answer == 'Y') {
        cout << "Is there current inventory (Y/N)? " << endl;
        char current_inventory;
        cin >> current_inventory;

        if (current_inventory == 'Y') {
            cout << "Enter text file name: ";
            string file_name;
            cin >> file_name;

            // Reads in pet inventory from file
            load_inventory_from_file(pets, pets_num, file_name);
        }
    }

    char choice;
    do {
        cout << "Pet Inventory Menu: " << endl;
        cout << "1. Add a new pet" << endl;
        cout << "2. Print out longest resident" << endl;
        cout << "3. Save to file" << endl;
        cout << "4. Exit program" << endl;
        cin >> choice;

        switch (choice) {
            case '1':
                add_pets(pets, pets_num);
                break;
            case '2':
                print_longest_stay(pets, pets_num);
                break;
            case '3':
                add_days_in_shelter(pets, pets_num);
                write_inventory_to_file(pets, pets_num);
                break;
            case '4':
                cout << "Exited Program." << endl;
                break;
            default:
                cout << "Please enter a valid choice." << endl;
        }
    } while (choice != '4');

    // Deletes dynamically allocated memory
    for (int i = 0; i < pets_num; i++) {
        delete pets[i];
    }

    return 0;
}
