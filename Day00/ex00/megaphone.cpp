/*day 00 ex00*/
#include <iostream>
#include <cctype>

int main(int argc, char**argv) {
    
    int i;
    int j;

    i = 1;
    j = 0;
    if(argc<2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    else
    {
        while(i<argc)
        {
            while(argv[i][j]!=0)
            {
                argv[i][j] = toupper(argv[i][j]);
                std::cout << argv[i][j];
                j++;
            }
            j=0;
            i++;
        }
    }
    std::cout << std::endl;
 
}