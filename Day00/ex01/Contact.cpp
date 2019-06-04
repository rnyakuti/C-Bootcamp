#include "Contact.hpp"

Contact::Contact(void){
}

  void Contact::addContact(){
    std::cout << "\x1b[1;42mAdding contact[+] \n";
    std::cout << "\x1b[1;42mFirst Name: ";
    std::getline(std::cin,this->first_name);
    std::cout << "\x1b[1;42mLast Name: ";
    std::getline(std::cin,this->last_name);
    std::cout << "\x1b[1;42mNickname: ";
    std::getline(std::cin,this->nickname);
    std::cout << "\x1b[1;42mLogin: ";
    std::getline(std::cin,this->login);
    std::cout << "\x1b[1;42mPostal Address: ";
    std::getline(std::cin,this->postal_address);
    std::cout << "\x1b[1;42mEmail Adress: ";
    std::getline(std::cin,this->email_address);
    std::cout << "\x1b[1;42mPhone Number: ";
    std::getline(std::cin,this->phonenumber);
    std::cout << "\x1b[1;42mBirthdate: ";
    std::getline(std::cin,this->birth_date);
    std::cout << "\x1b[1;42mFavourite meal: ";
    std::getline(std::cin,this->fave_meal);
    std::cout << "\x1b[1;42mUnderwear Color: ";
    std::getline(std::cin,this->underwear);
    std::cout << "\x1b[1;42mDarkest Secret: ";
    std::getline(std::cin,this->dark_secret);
    
    }