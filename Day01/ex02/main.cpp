#include <iostream>
# include <string>

class Zombie
{
	public:
	Zombie(std::string name, std::string type);
	~Zombie(void);
	std::string	announce(void);
	private:
	std::string	_name;
	std::string	_type;


};

Zombie::Zombie(std::string name, std::string type): _name(name), _type(type)
{
    return ;
}
Zombie::~Zombie(void)
{
    return ;
}

std::string Zombie::announce(void)
{
	
}