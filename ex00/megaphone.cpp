#include <iostream>

int main(int ac, char **av)
{
    int i = 1;
    int j = 0;
    char tmp;

    while(av[i] && i < ac)
    {
        j = 0;
        while(av[i][j] && j != -1)
        {
            if(av[i][j] >= 'a' && av[i][j] <= 'z' && av[i][j]) 
            {
                tmp = av[i][j] - ' ';
                std::cout << tmp;
            }
            else if(av[i][j] == ' ' && av[i][j])
            {
                  while(av[i][j] == ' ')
                       j++;
                       j--;
                    if(av[i][j])
                      std::cout<< " "; 
            }
            else
                std::cout << av[i][j];
            j++;
        }
        i++;
    }

    if(!av[i])
         std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
}