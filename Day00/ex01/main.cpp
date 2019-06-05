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

#include "Contact.hpp"

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
			std::cout << "\x1b[30;42m**********************************************\n";
			std::cout << "\x1b[30;42m***                                        ***\n";
			std::cout << "\x1b[30;42m***           PHONE BOOK IS EMPTY          ***\n";
			std::cout << "\x1b[30;42m***                                        ***\n";
			std::cout << "\x1b[30;42m**********************************************\n";
			return;
		}
		else
		{
			std::cout << "\x1b[30;42m         " << j << "|";
			std::cout << "\x1b[30;42m"<<tr_std(new_contact[j].first_name) << "|";
			std::cout <<"\x1b[30;42m" <<tr_std(new_contact[j].last_name) << "|";
			std::cout <<"\x1b[30;42m" <<tr_std(new_contact[j].nickname) << "|" << std::endl;

		}
		j++;
	}
	j = 0;
	std::cout << "\x1b[30;42m**********************************************\n";
	std::cout << "\x1b[30;42m***                                        ***\n";
	std::cout << "\x1b[30;42m***          ENTER IN AN INDEX             ***\n";
	std::cout << "\x1b[30;42m***                                        ***\n";
	std::cout << "\x1b[30;42m**********************************************\n";
	std::cin >> j;
	while(!std::cin)
	{
		std::cout << "\x1b[30;42m**********************************************\n";
		std::cout << "\x1b[30;42m***                                        ***\n";
		std::cout << "\x1b[30;46m***          ENTER IN A NUMBER             ***\n";
		std::cout << "\x1b[30;42m***                                        ***\n";
		std::cout << "\x1b[30;42m**********************************************\n";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> j;
	}
	if (j >= 0 && j < i)
	{
		std::cout << "\n\x1b[30;46m***         CONTACT FOUND       ***\n";
		std::cout << "FirstNameame      : " + new_contact[j].first_name << std::endl;
		std::cout << "LastName          : " + new_contact[j].last_name + "\n" ;
		std::cout << "NickName          : " + new_contact[j].nickname + "\n";
		std::cout << "Postal Address    : " + new_contact[j].login + "\n\n\n";
	}
	else{
			std::cout << "\x1b[3046m******* FAILED, INDEX OUT OF RANGE *********\n";
	}
	return ;

  }

static void command_options()
{
  std::cout << "\x1b[30;42m*********************************************\n";
  std::cout << "\x1b[30;42m***                   +                   ***\n";
  std::cout << "\x1b[30;42m***               P H O N E               ***\n";  
  std::cout << "\x1b[30;42m***                B O O K                ***\n";
  std::cout << "\x1b[30;42m***                   +                   ***\n";
  std::cout << "\x1b[30;42m***          <<COMMAND OPTIONS>>          ***\n";
  std::cout << "\x1b[30;42m***            ADD SEARCH EXIT            ***\n";
  std::cout << "\x1b[30;42m*********************************************\n";    
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
		if(i>7)
		{
			std::cout << "\xb[30;42m**********************************************\n";
			std::cout << "\x1b[30;42m***                                        ***\n";
			std::cout << "\x1b[30;42m***            PHONE BOOK IS FULL          ***\n";
			std::cout << "\x1b[30;42m***                                        ***\n";
			std::cout << "\x1b[30;42m**********************************************\n";
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
      std::cout << "\x1b[30;42m**********************************************\n";
      std::cout << "\x1b[30;42m*** ENTER IN ONE OF THE FOLLOWING COMMANDS ***\n";
      std::cout << "\x1b[30;42m***          <<COMMAND OPTIONS>>           ***\n";
      std::cout << "\x1b[30;42m***            ADD SERCH EXIT              ***\n";
      std::cout << "\x1b[30;42m**********************************************\n";    
     }

    }
}
