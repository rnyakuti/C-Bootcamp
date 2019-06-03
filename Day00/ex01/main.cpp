#include <iostream>
#include <string>

class Contact{
  public:
  std::string first_name;
  std::string last_name;
  std::string nickname;
  std::string login;
  std::string postal_address;
  std::string email_address;
  std::string phonenumber;
  std::string birth_date;
  std::string fave_meal;
  std::string underwear;
  std::string dark_secret;
  void displayContact()
  {
    std::cout << "\x1b[1;42mDisplaying \n";

  }
  void addContact(){
    std::cout << "\x1b[1;42mAdding contact[+] \n";
    std::cout << "\x1b[1;42mFirst Name: ";
    std::getline(std::cin,first_name);
    std::cout << "\x1b[1;42mLast Name: ";
    std::getline(std::cin,last_name);
    std::cout << "\x1b[1;42mNickname: ";
    std::getline(std::cin,nickname);
    std::cout << "\x1b[1;42mLogin: ";
    std::getline(std::cin,login);
    std::cout << "\x1b[1;42mPostal Address: ";
    std::getline(std::cin,postal_address);
    std::cout << "\x1b[1;42mEmail Adress: ";
    std::getline(std::cin,email_address);
    std::cout << "\x1b[1;42mPhone Number: ";
    std::getline(std::cin,phonenumber);
    std::cout << "\x1b[1;42mBirthdate: ";
    std::getline(std::cin,birth_date);
    std::cout << "\x1b[1;42mFavourite meal: ";
    std::getline(std::cin,fave_meal);
    std::cout << "\x1b[1;42mUnderwear Color: ";
    std::getline(std::cin,underwear);
    std::cout << "\x1b[1;42mDarkest Secret: ";
    std::getline(std::cin,dark_secret);

  }
};
static void command_options()
{
  std::cout << "\x1b[1;42m*********************************************\n";
  std::cout << "\x1b[1;42m***                   +                   ***\n";
  std::cout << "\x1b[1;42m***               P H O N E               ***\n";  
  std::cout << "\x1b[1;42m***                B O O K                ***\n";
  std::cout << "\x1b[1;42m***                   +                   ***\n";
  std::cout << "\x1b[1;42m***          <<COMMAND OPTIONS>>          ***\n";
  std::cout << "\x1b[1;42m***            ADD SEARCH EXIT            ***\n";
  std::cout << "\x1b[1;42m*********************************************\n";    
}

int main() {

  Contact new_contact[8];
  std::string cmd;
  command_options();
  int i = 0;
  while(1){
    std::getline(std::cin,cmd);
    if(i>8)
    {
      std::cout << "\x1b[1;42m**********************************************\n";
      std::cout << "\x1b[1;42m***                                        ***\n";
      std::cout << "\x1b[1;42m***            PHONE BOOK IS FULL          ***\n";
      std::cout << "\x1b[1;42m***                                        ***\n";
      std::cout << "\x1b[1;42m**********************************************\n";  
    }
    if(cmd == "ADD" && i<=7){
      new_contact[i].addContact();
      i++;
    }
    else if(cmd == "SEARCH"){

    }
    else if(cmd == "EXIT"){
      std::cout << "EXITING....";
      break;
    }
    else{
      std::cout << "\x1b[1;42m**********************************************\n";
      std::cout << "\x1b[1;42m*** ENTER IN ONE OF THE FOLLOWING COMMANDS ***\n";
      std::cout << "\x1b[1;42m***          <<COMMAND OPTIONS>>           ***\n";
      std::cout << "\x1b[1;42m***            ADD SERCH EXIT              ***\n";
      std::cout << "\x1b[1;42m**********************************************\n";    
     }

    }
}