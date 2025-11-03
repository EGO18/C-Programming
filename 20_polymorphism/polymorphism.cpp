#include <iostream>

//TODO
// Reload function for weapon and for all derived classes
// Create an inventory for the player (set of weapons)


class Weapon // Abstract class
{
    public:
        virtual void use() = 0; // Pure virtual function
};


class Gun : public Weapon
{
    public:
        void use() override
        {
            std::cout << "BANG!" << std::endl;
        }
};

class MachineGun : public Gun
{
    public:
    int magazine = 20;
    void use() override
    {
        while (magazine--> 0)
        {
            std::cout << "BANG!";
        }
        std::cout << '\n';
        magazine = 20;
    } 

};

class Bazooka : public Weapon
{
    void use() override
    {
        std::cout << "BOOM!" << std::endl;
    }
};

class Knife : public Weapon
{
    void use() override
    {
        std::cout << "SLASH!" << std::endl;
    }
};

class Player
{
    public:
        void use_weapon(Weapon& weapon)
        {
            weapon.use();
        }
};


int main()
{
    Gun gun;
    MachineGun mg;
    Bazooka bazooka;
    Knife knife;
    gun.use();
   //mg.shoot();

    // Create a reference to a base class
    Gun& weapon = mg;
    weapon.use();

    std::cout << "---------------------\n";
    Player player;
    player.use_weapon(knife);
    return 0;
}