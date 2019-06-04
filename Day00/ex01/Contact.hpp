#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>
# include <iostream>

class Contact{
  
  public:
    Contact(void);
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
    void addContact();
};

#endif