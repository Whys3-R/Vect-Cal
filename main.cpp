#include <iostream>
#include <vector>

// Function prototypes
void menu();
void decider(std::vector<int> &list);
void print_list(std::vector<int> list);
void add_to_list(std::vector<int> &list);
void mean(std::vector<int> list);
void smallest(std::vector<int> list);
void largest(std::vector<int> list);

int main(){
    std:: vector<int> list;
    decider(list);
    return 0;
}
// Prints the choices a user can make
void menu(){
    std::cout<< "Please select one of the following:"
    << "\n1 : Display the list"
    << "\n2 : Add a number to the list"
    << "\n3 : Display the mean of the numbers in the list"
    << "\n4 : Display the smallest number in the list"
    << "\n5 : Display the largest number in the list"
    << "\n6 : Quit the program"
    << "\n\nYour selection: ";
}

/* This function takes the users input and uses a switch to call the intended
   function. */
void decider(std::vector<int> &list){
    bool cont = true;
    while (cont == true) {
        menu();
        int user_in = 0;
        std:: cin >> user_in;
        switch (user_in)
        {
        case 1:
            print_list(list);
            break;
        case 2:
            add_to_list(list);
            break;
        case 3:
            mean(list);
            break;
        case 4:
            smallest(list);
            break;
        case 5:
            largest(list);
            break;
        case 6:
            cont = false;
            break;
        default:
            std::cout<< "You did not enter a valid input." << std::endl;
            break;
        } 
        std::cout << std::endl;
    }
}

// Prints the list of the numbers
void print_list(std::vector<int> list){
    size_t size= list.size();
    if (size == 0){
        std::cout << "The list is empty." << std::endl;
    }
    else {
        std:: cout << "Current List:\n\t";2
        for (int i = 0; i < size; i++)
            std:: cout << list[i] << " ";
        std::cout << std::endl;
    }
}

// Lets the user add to a list
void add_to_list(std::vector<int> &list){
    std::cout << "Enter a number: " ;
    int new_num = 0;
    std::cin >> new_num;
    list.push_back(new_num);
}

// Prints the mean the list
void mean(std::vector<int> list){
    size_t size= list.size();
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += list[i];
    }
    double avg = sum / size;
    std::cout << "The mean is: " << avg << std::endl;
}

// Prints the smallest integer in the list
void smallest(std::vector<int> list){
    size_t size= list.size();
    int small = list[0];
    for (int i = 1; i < size; i++){
        if (list[i] < small)
            small = list[i];
    }
    std::cout << "The smallest number is: " << small;
}

// Prints the largest integer in the list
void largest(std::vector<int> list){
    size_t size= list.size();
    int large = list[0];
    for (int i = 1; i < size; i++){
        if (list[i] < large)
            large = list[i];
    }
    std::cout << "The largest number is: " << large;
}
