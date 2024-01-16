#include <iostream>
#include <vector>
#include "job_arrays.hpp"

int roll(std::vector<std::string> type);
void roll_all();
void roll_tanks();

int main() {
    //setup input for role choice
    std::string role;

    std::cout << "What role do you want to play? (any, tank, healer, dps, melee, ranged, magic) ";
    std::cin >> role;

    //make inut all lowercase for easier use in if-block
    for (int i = 0; i < role.size(); i++) {
        role[i] = tolower(role[i]);
    }
    

    if (role == "any") {
        /*int random_index = roll(all_jobs);
        std::cout << all_jobs[random_index] << "\n";//random_job;*/
        roll_all();
    } else if (role == "tank") {
        roll_tanks();
    } else {
        std::cout << "Invalid input.\n";
    }

    //std::string random_job = all_jobs[random_index];

    char exit;
    std::cout << "Enter any character to exit: ";
    std::cin >> exit;

    return 0;
}

void roll_all() {
    int random_index = roll(all_jobs);
    std::cout << all_jobs[random_index] << "\n";
}

void roll_tanks() {
    int random_index = roll(tanks);
    std::cout << tanks[random_index] << "\n";
}

int roll(std::vector<std::string> type) {
    srand(time(NULL));

    int random = rand() % type.size();//all_jobs.size();
    std::cout << random << "\n";

    return random;
}