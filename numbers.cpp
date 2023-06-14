#include <iostream>




int cleaner() {
    std::cout << "\033[H\033[2J";
    return 0;
}

int multiplyNumbers(int first_number, int second_number){
    return first_number * second_number;
}


int Braced_initialization() {
    // Braced initialization
    int elephand_count;
    std::cout << "Elephand count?: ";
    std::cin >> elephand_count;
    int tiger_count{}; // is 0
    int dog_count {15};
    int cat_count {10};
    int domesticated_animals { dog_count + cat_count + tiger_count};
    std::cout << "Elephand count: " << elephand_count << std::endl;
    std::cout << "Domesticated animals: " << domesticated_animals;
    return 0;
}



int functional_initialization(){
    int num1(20);
    int num2(30);
    int num3(6.9); // drop 9 like python
    std::cout << "Num3: " << num3 << std::endl;
    std::cout << "Sum of num1 and num2 is: " << num1 + num2;
    return 0;
}

void assiggnment_initialization(){
    int num1 = 20;
    int num2 = 30.1; // drop 1 like python
    std::cout << "Sum is: " << num1 + num2;
}

int main(){
    cleaner();
    assiggnment_initialization();
}