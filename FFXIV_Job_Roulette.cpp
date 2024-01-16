#include <iostream>
#include <vector>
#include "job_arrays.hpp"

int roll(std::vector<std::string> type);

void roll_all();
void roll_tanks();
void roll_healers();
void roll_dps();
void roll_melee();
void roll_ranged();
void roll_magic();

int main() {
    //setup input for role choice
    std::string role;

    std::cout << "What role do you want to play? (any, tank, healer, dps, melee, ranged, magic) ";
    std::cin >> role;

    //make role inut all lowercase for easier use in if-block
    for (int i = 0; i < role.size(); i++) {
        role[i] = tolower(role[i]);
    }
    
    //choose roll function based on input, want to refactor if possible
    if (role == "any") {
        roll_all();
    } else if (role == "tank") {
        roll_tanks();
    } else if (role == "healer") {
        roll_healers();
    } else if (role == "dps") {
        roll_dps();
    } else if (role == "melee") {
        roll_melee();
    } else if (role == "ranged") {
        roll_ranged();
    } else if (role == "magic") {
        roll_magic();
    } else {
        std::cout << "Invalid input.\n";
    }

    

    return 0;
}

//all roll functions, again, want to refactor if possible
void roll_all() {
    char reroll;

    //get a pseudo-random number based on length of chosen array, then print out the pseudo-randomly selected job by index
    int random_index = roll(all_jobs);
    std::cout << all_jobs[random_index] << "\n";

    //prompt user for reroll, re-run roll function until satisfied, any other character than y will exit the loop and go to the end of the program and return 0
    std::cout << "Reroll? (y/n) ";
    std::cin >> reroll;

    if (reroll == 'y' || reroll == 'Y') {
        roll_all();
    } else {
        return;
    }
}

void roll_tanks() {
    char reroll;

    int random_index = roll(tanks);
    std::cout << tanks[random_index] << "\n";

    std::cout << "Reroll? (y/n) ";
    std::cin >> reroll;

    if (reroll == 'y' || reroll == 'Y') {
        roll_tanks();
    } else {
        return;
    }
}

void roll_healers() {
    char reroll;

    int random_index = roll(tanks);
    std::cout << healers[random_index] << "\n";
    
    std::cout << "Reroll? (y/n) ";
    std::cin >> reroll;

    if (reroll == 'y' || reroll =='Y') {
        roll_healers();
    } else {
        return;
    }
}

void roll_dps() {
    char reroll;
    
    int random_index = roll(all_dps);
    std::cout << all_dps[random_index] << "\n";

    std::cout << "Reroll? (y/n) ";
    std::cin >> reroll;

    if (reroll == 'y' || reroll == 'Y') {
        roll_dps();
    } else {
        return;
    }
}

void roll_melee() {
    char reroll;

    int random_index = roll(melee);
    std::cout << melee[random_index] << "\n";

    std::cout << "Reroll? (y/n) ";
    std::cin >> reroll;

    if (reroll == 'y' || reroll == 'Y') {
        roll_melee();
    } else {
        return;
    }
}

void roll_ranged() {
    char reroll;

    int random_index = roll(ranged);
    std::cout << ranged[random_index] << "\n";

    std::cout << "Reroll? (y/n) ";
    std::cin >> reroll;

    if (reroll == 'y' || reroll == 'Y') {
        roll(ranged);
    } else {
        return;
    }
}

void roll_magic() {
    char reroll;

    int random_index = roll(magic);
    std::cout << magic[random_index] << "\n";

    std::cout << "Reroll (y/n) ";
    std::cin >> reroll;

    if (reroll == 'y' || reroll == 'Y') {
        roll_magic();
    } else {
        return;
    }
}

int roll(std::vector<std::string> type) {
    srand(time(NULL));

    int random = rand() % type.size();//all_jobs.size();
    std::cout << random << "\n";

    return random;
}

/*void reroll(void rollfunc) { attempt at a reroll function
    std::cout << "Reroll? (y/n) ";
    std::cin >> reroll;
    if (reroll == 'y') {
        rollfunc;
    } else {
        return;
    }
}/

void exit() {
    char exit;
    std::cout << "Enter any character to exit: ";
    std::cin >> exit;
    return;
}*/
