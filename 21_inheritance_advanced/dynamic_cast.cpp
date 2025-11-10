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
    int max_mag = 20;
    void use() override
    {
        while (magazine--> 0)
        {
            std::cout << "BANG!";
        }

        
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
    public:
        Knife(bool stainless=false) : is_stainless(stainless) {}
        void use() override
        {
            std::cout << "SLASH!" << std::endl;
        }
        bool get_isStainless() const
        {
            return is_stainless;
        }

    
    private:
        bool is_stainless;
};

class Player
{
    public:
        void use_weapon(Weapon& weapon)
        {
            //Dynamic casting
            Knife *knife = dynamic_cast<Knife*>(&weapon); // casting of a parent address to a child pointer
            if (knife != NULL)
            {
                if (knife->get_isStainless())
                {
                    std::cout << "Stainless knife. Can use it" << std::endl;
                }
                else
                {
                    std::cout << "Cannot use not stainless knife." << std::endl;
                }
            }
            else
            {
                std::cout << "Not a knife." << std::endl;
                weapon.use();
            }
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
    mg.use();
    // Create a reference to a base class
    //Gun& weapon = mg;
    //weapon.use();
    //weapon.reload();

    std::cout << "---------------------\n";
    Player player;
    player.use_weapon(knife);
    return 0;
}