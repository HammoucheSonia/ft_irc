#include <iostream>

int main(int argc, char **argv)
{
    if(argc != 3)
    {
        std :: cout << "./ircserv <port> <passeword>\n";
        return (1);
    }
    
    return (0);
}