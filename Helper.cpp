#include "Helper.h"

void load_inventory_from_file(Pet* pets[], int& pets_num, string file_name) {
    ifstream input_file;
    input_file.open(file_name);

    if (input_file.fail()) {
        cout << "Failed to open file." << endl;
    }
    else {
        cout << "File opened." << endl;
    }

    // Read and discard the first line
    string header;
    getline(input_file, header);
    string line;

    while (getline(input_file, line) && pets_num < MAX_PETS) {
        string name;
        int id;
        int age;
        string fur_color;
        int days_in_shelter;
        istringstream iss(line);
        iss >> name >> id >> age >> fur_color >> days_in_shelter;
        pets[pets_num] = new Pet(name, id, age, fur_color, days_in_shelter);
        pets_num++;
    }
}

void add_pets(Pet* pets[], int& pets_num) {
    if (pets_num == MAX_PETS) {
        cout << "Maximum pet inventory is reached. Please reach out to another local shelter." << endl;
        cout << "Fremont Humane Society, 510-590-2493" << endl;
        cout << "Tri-City Animal Shelter, 510-343-2456" << endl;
        cout << "Newark Animal Rescue, 510-553-4928" << endl;
    }

    string new_name;
    int new_id;
    int new_age;
    string new_fur_color;
    cout << "Enter information for new pet: " << endl;
    cout << "Name: ";
    cin >> new_name;
    cout << "ID: ";
    cin >> new_id;
    cout << "Age: ";
    cin >> new_age;
    cout << "Fur color: ";
    cin >> new_fur_color;
    int new_days_in_shelter = 0; // set to 0 for new pets

    if (pets_num < MAX_PETS) {
        pets[pets_num] = new Pet(new_name, new_id, new_age, new_fur_color,
                                     new_days_in_shelter);
        pets_num++;
    }
    print_inventory(pets, pets_num);
}

void print_inventory(Pet* pets[], int& pets_num) {
    cout << "Current pet inventory: " << endl;
    for (int i = 0; i < pets_num; i++) {
        cout << i + 1 << ") " << "Name: " << pets[i]->get_name() << ", ID: " << pets[i]->get_id() <<
             ", Age: " << pets[i]->get_age() << ", Fur color: " <<  pets[i]->get_fur_color() << ", Days in Shelter: "
             << pets[i]->get_days_in_shelter() << endl;
    }
}

void print_longest_stay(Pet* pets[], int& pets_num) {
    Pet* max_days_in_shelter = pets[0];
    for (int i = 1; i < pets_num; i++) {
        if (pets[i]->get_days_in_shelter() > max_days_in_shelter->get_days_in_shelter()) {
            max_days_in_shelter = pets[i];
        }
    }

    cout << "Pet that has been in shelter longest: " << endl;
    cout << "Name: " << max_days_in_shelter->get_name() << ", ID: " << max_days_in_shelter->get_id() << ", Age: " <<
         max_days_in_shelter->get_age() << ", Fur color: " << max_days_in_shelter->get_fur_color() << ", Days in Shelter: " <<
         max_days_in_shelter->get_days_in_shelter() << endl;
}

void write_inventory_to_file(Pet* pets[], int& pets_num) {
    string file_name;
    cout << "Enter file name to save to: ";
    cin >> file_name;
    ofstream output_file;
    output_file.open(file_name);

    output_file << "Name, id, age, fur color, days in shelter" << endl;

    for (int i = 0; i < pets_num; i++) {
        output_file << pets[i]->get_name() << " " << pets[i]->get_id() <<
                    " " << pets[i]->get_age() << " " <<  pets[i]->get_fur_color() << " "
                    << pets[i]->get_days_in_shelter() << endl;
    }

    cout << "Successfully updated pet inventory to "  << file_name << "." << endl;
}

void add_days_in_shelter(Pet* pets[], int& pets_num) {
    for (int i = 0; i < pets_num; i++) {
        pets[i]->count_days_in_shelter();
    }
}
