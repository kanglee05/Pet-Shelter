#ifndef PET_SHELTER_PET_H
#define PET_SHELTER_PET_H
#include <iostream>
using namespace std;

/**
 * Represents a pet with a name, id, age, fur color, and days stayed in shelter.
 */

const int MAX_PETS = 50;

class Pet {
private:
    string name;
    int id;
    int age;
    string fur_color;
    int days_in_shelter;
public:

    /**
     * Overloaded Pet constructor.
     * @param name of the pet.
     * @param id of the pet.
     * @param age of the pet.
     * @param fur_color of the pet.
     * @param days_in_shelter of the pet, set to 0 if it is a new pet.
     */
    Pet(string name, int id, int age, string fur_color, int days_in_shelter);

    /**
     * Getter for name.
     * @return name of the pet.
     */
    string get_name() const;

    /**
     * Getter for id.
     * @return id of the pet.
     */
    int get_id() const;

    /**
     * Getter for age.
     * @return age of the pet.
     */
    int get_age() const;

    /**
     * Getter for fur color.
     * @return fur color of the pet.
     */
    string get_fur_color() const;

    /**
     * Getter for days in shelter.
     * @return days in shelter for the pet.
     */
    int get_days_in_shelter() const;

    /**
     * Setter for days in shelter.
     * @param days_in_shelter of the pet to be set.
     */
    void set_days_in_shelter(int days_in_shelter);

    /**
     * Increments the days in shelter count by 1 every time the program is ran.
     */
    void count_days_in_shelter();
};

#endif //PET_SHELTER_PET_H
