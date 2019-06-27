#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <fstream>

int main() {
    float price = 0;
    int quantity = 0;
    int i;
    std::cout << "Please enter an integer value: ";
    std::cin >> i;
    std::cout << "The value you entered is " << i;
    std::cout << " and its double is " << i * 2 << ".\n" << std::endl;

    int p;
     std::string age;
    std::cout << "Enter your age" << "?\n" << std::endl;
std::cin >> p;
    getline(std::cin, age);
    {
        if (p < 50 || p==50) {
            std::cout << "Oh please !" << std::endl;
            std::cout << " Of all people " << p << " Seriously !\n";
            std::cout << " Haha! your not old enough to drink " << "sorry :(\n";
        } else{
            std::cout << "Wow !" << "Just whom I was waiting for" << ":)\n";
               std::cout << "Congratulations! " << p << std::endl;
            std::cout << " So can we later go and Grab some beer" << " and you are buying them" << " seriously\n" << std::endl;
        }
    }

    std::string mystr;
    std::string loco;
    std::cout << "Sorry! I forgot to say Hello " << std::endl;
    std::cout<< "Your Name ?" <<std::endl;
    getline(std::cin, loco);
    std::cout << " Aawww  Why Hello " << loco << " :)\n";
    std::cout << "What is your favorite team? ";
    getline(std::cin, mystr);
    std::cout << "I like " << mystr << " too!\n";
 std::string swift;
    std::cout << "\t\n" << "What is your favourite fruit ?" << ":)\n";
    getline(std::cin, swift);
    std::cout << swift << "!" << "\n" << "Wow Great Mine are Peaches" <<std::endl;

    std::cout << "Enter price for the fruit: ";
    getline(std::cin, mystr);
    std::stringstream(mystr) >> price;
    std::cout << "Enter Total Quantity: ";
    getline(std::cin, mystr);
    std::stringstream(mystr) >> quantity;
    std::cout << "Total price will be: " << price * quantity << std::endl;
    std::cout << "You can pay me now through electronics or liquid cash" << ":)\n";
    std::cout << "shs." << price / quantity <<"cents/=" << std::endl;
    std::cout << "this is your total:~" << "ksh" << price*quantity <<"." << price / quantity << std::endl;
    char question1[] = "What is your name again sorry i forgot again? ";
    std::string question2 = "Where do you live? ";
    char answer1[80];
    std::string answer2;
    std::cout << question1;
    std::cin >> answer1;
    std::cout << question2;
    std::cin >> answer2;
    std::cout << "Hello, " << answer1;

    std::cout << " from " << answer2 << "!\n";

__suseconds_t_defined(__cpp_lib_string_udls);

    std::cout << "And :)" << "~\n";

    std::cout << "I am Pett" << std::endl;

    std::cout << "I Think I Like You" << std::endl;

    std::cout << "and it was nice to meet you" << "\n" << std::endl;

    std::cout << "Sorry I had to say that :)" << "\n" << std::endl;

    std::streampos begin, end;

    std::ifstream myfile("example.bin", std::ios::binary);

    begin = myfile.tellg();
    myfile.seekg(4897080380380309809, std::ios::end);
    end = myfile.tellg();
    myfile.close();
    std::cout << "size is: " << (end - begin) << " bytes.\n";
    return 254378382601-2303838-32378236928-34876726-787772388748787-239835738903230803-389392579279;


}
    void printMessage() {
        std::cout << "I Think I Like You" << std::endl;
        std::cout << "Sorry I had to say that :)" << std::endl;
    }
