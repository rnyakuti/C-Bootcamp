/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnyakuti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 16:57:18 by rnyakuti          #+#    #+#             */
/*   Updated: 2019/06/03 16:57:58 by rnyakuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
  

  void addContact(){
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
};

  std::string tr_std(std::string str)
{
	int size = str.size();
	std::string space = "";

	if (size == 10) {
		return (str);
	}
	else if (size < 10) {
		for (int i = 0; i < (10 - size); i++) {
			space += " ";
		}
		return (space + str);
	}
	else {
		str = str.substr(0, 9) + ".";
		return (str);
	}
}

  
  void searchContacts(int i, Contact *new_contact)
  {
	std::string cmd;
	int j = 0;
	while(j < i)
	{
		if( i == 0)
		{
			std::cout << "\x1b[1;42m**********************************************\n";
			std::cout << "\x1b[1;42m***                                        ***\n";
			std::cout << "\x1b[1;42m***           PHONE BOOK IS EMPTY          ***\n";
			std::cout << "\x1b[1;42m***                                        ***\n";
			std::cout << "\x1b[1;42m**********************************************\n";
			return;
		}
		else
		{
			std::cout << "\x1b[1;42m         " << j << "|";
			std::cout << "\x1b[1;42m"<<tr_std(new_contact[j].first_name) << "|";
			std::cout <<"\x1b[1;42m" <<tr_std(new_contact[j].last_name) << "|";
			std::cout <<"\x1b[1;42m" <<tr_std(new_contact[j].nickname) << "|" << std::endl;

		}
		j++;
	}
	j = 0;
	std::cout << "\x1b[1;42m**********************************************\n";
	std::cout << "\x1b[1;42m***                                        ***\n";
	std::cout << "\x1b[1;42m***          ENTER IN AN INDEX             ***\n";
	std::cout << "\x1b[1;42m***                                        ***\n";
	std::cout << "\x1b[1;42m**********************************************\n";
	std::getline(std::cin, cmd);
	j = std::atoi(cmd.c_str());
	if (j >= 0 && j < i)
	{
		std::cout << "FirstNameame      : " + new_contact[j].first_name << std::endl;
		std::cout << "LastName          : " + new_contact[j].last_name + "\n" ;
		std::cout << "NickName          : " + new_contact[j].nickname + "\n";
		std::cout << "Postal Address    : " + new_contact[j].login + "\n";
	}
	return ;

  }

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

    if(cmd == "ADD")
	{
		if(i>8)
		{
			std::cout << "\x1b[1;42m**********************************************\n";
			std::cout << "\x1b[1;42m***                                        ***\n";
			std::cout << "\x1b[1;42m***            PHONE BOOK IS FULL          ***\n";
			std::cout << "\x1b[1;42m***                                        ***\n";
			std::cout << "\x1b[1;42m**********************************************\n";
		}
		else
		{
			 new_contact[i].addContact();
			 i++;
		}
     
    }
    else if(cmd == "SEARCH"){
	  std::cout << "++++++++++|++++++++++|++++++++++|++++++++++|\n";
      std::cout << "     INDEX| FirstName|  LastName|  NickName|\n";
	  std::cout << "++++++++++|++++++++++|++++++++++|++++++++++|\n";
	  searchContacts(i,new_contact);

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
