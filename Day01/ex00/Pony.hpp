#ifndef PONY_HPP
# define PONY_HPP
# include <string>

class Pony{
  
  public:
    Pony(void);//constructor to intialize
	~Pony(void);//destructor method to delete object
	std::string _horses[4] = {"Your horse is Sleipnir an eight-legged horse ridden by Odin and now you. He is the child of Loki and Svaðilfari,he is the best of all horses. He has ridden to Hel and back, many times",
	"Svaðilfari also known as the unlucky traveler is a stallion that fathered the eight-legged horse Sleipnir with Loki. Svaðilfari was owned by the disguised and unnamed hrimthurs who built the walls of Asgard...you are his new owner",
	"You are to own Árvakr the early awake and Alsviðr the very quick, You must pull the sun across the sky each day with your horses to avoid Sköll and Hati",
	"Your horse is Helhest, a three-legged horse of Hel.You shall bring death and illness in your wake with your steed."};
};

#endif