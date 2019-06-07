#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include <cmath>

class FragTrap
{
public:
    FragTrap(void);
	FragTrap(std::string name);
    ~FragTrap(void);
    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
	
protected:
    int hit_pts;
    int mx_pts;
    int energy;
    int max_energy;
    int lvl;
    std::string name;
    int melee;
    int ranged;
    int armor_red;
    
};

#endif