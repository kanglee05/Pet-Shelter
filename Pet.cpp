#include "Pet.h"

Pet::Pet(string name, int id, int age, string fur_color, int days_in_shelter) {
    this->name = name;
    this->id = id;
    this->age = age;
    this->fur_color = fur_color;
    this->days_in_shelter = days_in_shelter;
}

string Pet::get_name() const {
    return this->name;
}

int Pet::get_id() const {
    return this->id;
}

int Pet::get_age() const {
    return this->age;
}

string Pet::get_fur_color() const {
    return this->fur_color;
}

int Pet::get_days_in_shelter() const {
    return this->days_in_shelter;
}

void Pet::set_days_in_shelter(int days_in_shelter) {
    this->days_in_shelter = days_in_shelter;
}

void Pet::count_days_in_shelter() {
    this->days_in_shelter++;
}