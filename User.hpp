#include <iostream>


class User
{
    private:
        int fd;
        time_t last_connexion;
        std :: string hostname;
        std :: string nickname;
        std :: username;
        std :: realname;
        std :: sring mode;   
    public:
        User(int fd, srd :: string hostname);
        ~User();
};