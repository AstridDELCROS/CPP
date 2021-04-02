#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

class Zombie
{
    public:
    Zombie(std::string name="random", std::string type="killer");
    ~Zombie();
    void announce(void);
    void init(std::string name, std::string type);

    private:
    std::string _name;
    std::string _type;
};

#endif