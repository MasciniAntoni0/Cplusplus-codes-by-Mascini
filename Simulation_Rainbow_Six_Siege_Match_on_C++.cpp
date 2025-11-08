#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <ctime>

int main(){
    srand(time(0));

    std::string AttackTeam;
    std::string DefenseTeam;
    const int NumberPlayers = 5;
    std::vector<std::string> attacks;
    std::vector<std::string> defenses;

    std::cout << "Match on Rainbow Six Siege" << std::endl;

    std::cout << "The attack team is: : ";
    std::getline(std::cin, AttackTeam);

    std::cout << "The defense team is: ";
    std::getline(std::cin, DefenseTeam);
    
    std::cout << "Insert the 5 attack's operators name: " << std::endl;
    for(int i = 0; i < NumberPlayers; i++){
        std::string name;
        std::cout << "Attacker " << i+ 1 << ": ";
        std::getline(std::cin, name);
        attacks.push_back(name);
    }

    std::cout << "Insert the 5 defense's operators name: " << std::endl;
    for(int i = 0; i < NumberPlayers; i++){
        std::string name;
        std::cout << "Defensor " << i+ 1 << ": ";
        std::getline(std::cin, name);
        defenses.push_back(name);
    }

    int round;
    std::cout << "How many rounds has to be simulate: ";
    std::cin >> round;
    std::cin.ignore();

    int AttacksPoints = 0;
    int DefensePoints = 0;

    std::cout << "Start of the match!" << std::endl;

    for(int i = 0; i < round; i++){
        int winner = rand() % 2;
        std::cout << "Winner " << i << ": " << std::endl;
        if(winner == 0){
            std::cout << "Win " << AttackTeam << "!" << std::endl;
            AttacksPoints++;
        }
        else{
            std::cout << "Win " << DefenseTeam << "!" << std::endl;
            DefensePoints++;
        }
    } 

    std::cout << "The final results." << std::endl;
    std::cout << AttackTeam << ": " << AttacksPoints << "Round won." << std::endl;
    std::cout << DefenseTeam << ": " << DefensePoints << "Round won." << std::endl;

    if(AttacksPoints > DefensePoints){
        std::cout << "The attack team has winned the match!" << std::endl;
    }
    else{
        std::cout << "The defense team has winned the match!" << std::endl;
    }

    return 0;
}