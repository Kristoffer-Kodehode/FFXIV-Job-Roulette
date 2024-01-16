#include <iostream>
#include <vector>
#include "job_arrays.hpp"

int roll(std::vector<std::string> type);

int main() {



    int random_index = roll(all_jobs);

    //std::string random_job = all_jobs[random_index];

    std::cout << all_jobs[random_index] << "\n";//random_job;

    char exit;
    std::cout << "Enter any character to exit: ";
    std::cin >> exit;

    return 0;
}

/*std::string roll_all() {

}*/

int roll(std::vector<std::string> type) {
    srand(time(NULL));

    int random = rand() % type.size();//all_jobs.size();
    std::cout << random << "\n";

    return random;
}