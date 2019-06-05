#include <iostream>
#include <cctype>
# include <string>
class Pony{
  
  public:
    Pony(std::string lore);//constructor to intialize
	~Pony(void);//destructor method to delete object
	std::string	Asgard();
	private:
	std::string		_lore;

};


Pony::Pony(std::string lore) : _lore(lore){

	std::cout <<lore<<"\n";//print in green
	return;
}

Pony::~Pony(void){
	std::cout << this->Asgard()<<" D E S T R O Y E D\n";//Print in red
	return;
}


std::string		Pony::Asgard(){
	return this->_lore;
}


static void ponyHeap()
{
	std::string horses[4] = {"Your horse is Sleipnir an eight-legged horse ridden by Odin and now you. He is the child of Loki and Svaðilfari,he is the best of all horses. He has ridden to Hel and back, many times",
	"Svaðilfari also known as the unlucky traveler is a stallion that fathered the eight-legged horse Sleipnir with Loki. Svaðilfari was owned by the disguised and unnamed hrimthurs who built the walls of Asgard...you are his new owner",
	"You are to own Árvakr the early awake and Alsviðr the very quick, You must pull the sun across the sky each day with your horses to avoid Sköll and Hati",
	"Your horse is Helhest, a three-legged horse of Hel.You shall bring death and illness in your wake with your steed."};
	std::cout << "Enter in a number between 0 and 3";
	int n;
	std::cin >> n;
	Pony* horse = new Pony(horses[n]);
	delete horse;
	return;

}

static void ponyStack()
{
	std::string horses[4] = {"Your horse is Sleipnir an eight-legged horse ridden by Odin and now you. He is the child of Loki and Svaðilfari,he is the best of all horses. He has ridden to Hel and back, many times",
	"Svaðilfari also known as the unlucky traveler is a stallion that fathered the eight-legged horse Sleipnir with Loki. Svaðilfari was owned by the disguised and unnamed hrimthurs who built the walls of Asgard...you are his new owner",
	"You are to own Árvakr the early awake and Alsviðr the very quick, You must pull the sun across the sky each day with your horses to avoid Sköll and Hati",
	"Your horse is Helhest, a three-legged horse of Hel.You shall bring death and illness in your wake with your steed."};
	std::cout << "Enter in a number between 0 and 3";
	int  n;
	std::cin >> n;
	Pony MyPonyStack = Pony(horses[n]);
	return;

}
int main()
{

	
	std::cout << "\x1b[36;1m            .'' \x1b[0m\n";
	std::cout << "\x1b[36;1m  ._.-.___.' (`\\\x1b[0m";
	std::cout << "\x1b[36;1m\t   T H E\x1b[0m\n";
	std::cout << "\x1b[36;1m //(        ( `'\x1b[0m";
	std::cout << "\x1b[36;1m\tH O R S E S\x1b[0m\n";
	std::cout << "\x1b[36;1m'/ )\\ ).__. ) \x1b[0m";
	std::cout << "\x1b[36;1m\t\t    O F\x1b[0m\n";
	std::cout << "\x1b[36;1m' <' `\\ ._/'\\\x1b[0m";
	std::cout << "\x1b[36;1m\t\tA S G A R D\x1b[0m\n";
	std::cout << "\x1b[36;1m   `   \\     \\\x1b[0m\n";
	std::cout << "Enter in a number between 0 and 3";
	ponyHeap();
	ponyStack();	
	return 0;
}
    