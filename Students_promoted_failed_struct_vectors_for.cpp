#include <iostream>
#include <string>
#include <vector>

struct student {
    std::string name;
    std::string surname;
    int age;
    int vote1;
    int vote2;
    int vote3;
};

int main(){
    int studentsNumber;
    std::cout << "How many students you want insert: ";
    std::cin >> studentsNumber;
    std::cin.ignore();

    std::vector<student> StudentsVector(studentsNumber);

    for(int i = 0; i < studentsNumber; i++){
        std::cout << "The students: " << i << std::endl;

        std::cout << "The student name: ";
        std::getline(std::cin, StudentsVector[i].name);

        std::cout << "The student surname: ";
        std::getline(std::cin, StudentsVector[i].surname);

        std::cout << "The student age: ";
        std::cin >> StudentsVector[i].age;
        std::cin.ignore();

        std::cout << "The first vote: ";
        std::cin >> StudentsVector[i].vote1;
        std::cin.ignore();

        std::cout << "The second vote: ";
        std::cin >> StudentsVector[i].vote2;
        std::cin.ignore();

        std::cout << "The third vote: ";
        std::cin >> StudentsVector[i].vote3;
        std::cin.ignore();
    }

    for(int i = 0; i < studentsNumber; i++){
        int Sum = StudentsVector[i].vote1 + StudentsVector[i].vote2 + StudentsVector[i].vote3;
        double average = static_cast<double>(Sum) / 3;

        std::cout << "The student data\n";
        std::cout << "Name: " << StudentsVector[i].name << std::endl;
        std::cout << "Surname: " << StudentsVector[i].surname << std::endl;
        std::cout << "age: " << StudentsVector[i].age << std::endl;
        std::cout << "First vote: " << StudentsVector[i].vote1 << std::endl;
        std::cout << "Second vote: " << StudentsVector[i].vote2 << std::endl;
        std::cout << "Third vote: " << StudentsVector[i].vote3 << std::endl;
        std::cout << "Votes average: " << average << std::endl;

        if(average >= 6){
            std::cout << "The student has been promoted" << std::endl;
        }
        else{
            std::cout << "The student has been failed" << std::endl;
        }
    }

    return 0;
}