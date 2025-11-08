#include <iostream>

int main(){
    int selected;

    std::cout << "Welcome in this languages menu.\n";
    std::cout << "1. English(United States)\n";
    std::cout << "2. English(United Kingdom)\n";
    std::cout << "3. French(Canada)\n";
    std::cout << "4. French(France)\n";
    std::cout << "5. Spanish(Latin America)\n";
    std::cout << "6. Spanish(Spain)\n";
    std::cout << "7. Portuguese(Brazil)\n";
    std::cout << "8. Portuguese(Portugal)\n";
    std::cout << "9. Italian(Italy)\n";
    std::cout << "10. Russian(Russia)\n";
    std::cout << "Select a language (1-10): ";
    std::cin >> selected;

    switch(selected){
        case 1:
        std::cout << "You have selected English(United States)" << std::endl;
        break;
        case 2:
        std::cout << "You have selected English(United Kingdom)" << std::endl;
        break;
        case 3:
        std::cout << "You have selected French(Canada)" << std::endl;
        break;
        case 4:
        std::cout << "You have selected French(France)" << std::endl;
        break;
        case 5:
        std::cout << "You have selected Spanish(Latin America)" << std::endl;
        break;
        case 6:
        std::cout << "You have selected Spanish(Spain)" << std::endl;
        break;
        case 7:
        std::cout << "You have selected Portuguese(Brazil)" << std::endl;
        break;
        case 8:
        std::cout << "You have selected Portuguese(Portugal)" << std::endl;
        break;
        case 9:
        std::cout << "You have selected Italian(Italy)" << std::endl;
        break;
        case 10:
        std::cout << "You have selected Russian(Russia)" << std::endl;
        break;
        default:
        std::cout << "You have selected another language" << std::endl;
        break;
    }

    return 0;
}