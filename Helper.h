#ifndef PET_SHELTER_HELPER_H
#define PET_SHELTER_HELPER_H
#include "Pet.h"
#include <fstream>
#include <sstream>

/**
 * Helper functions for the Pet Program.
 */

/**
 * Loads pet inventory from file entered by user.
 * @param pets array of Pet pointers.
 * @param pets_num count of pets.
 * @param file_name name of file entered by user.
 */
void load_inventory_from_file(Pet* pets[], int& pets_num, string file_name);

/**
 * Adds pets to the pet inventory.
 * @param pets array of Pet pointers.
 * @param pets_num count of pets.
 */
void add_pets(Pet* pets[], int& pets_num);

/**
 * Prints the current pet inventory.
 * @param pets array of Pet pointers.
 * @param pets_num count of pets.
 */
void print_inventory(Pet* pets[], int& pets_num);

/**
 * Finds and prints the pet with the longest stay in the pet inventory.
 * @param pets array of Pet pointers.
 * @param pets_num count of pets.
 */
void print_longest_stay(Pet* pets[], int& pets_num);

/**
 * Writes the pet inventory to a file location entered by the user.
 * @param pets array of Pet pointers.
 * @param pets_num count of pets.
 */
void write_inventory_to_file(Pet* pets[], int& pets_num);

/**
 * Increments the days in shelter count for all pets in current pet inventory.
 * @param pets array of Pet pointers.
 * @param pets_num count of pets.
 */
void add_days_in_shelter(Pet* pets[], int& pets_num);

#endif //PET_SHELTER_HELPER_H
