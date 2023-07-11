
#include "Character.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

int main()
{
 
    ICharacter *heitor = new Character("heitor");
    AMateria *ice1 = new Ice();
    AMateria *ice2 = new Ice();
    AMateria *cure1 = new Cure();
    AMateria *cure2 = new Cure();

    std::cout << "Equip: " << std::endl;
    heitor->equip(ice1);
    heitor->equip(cure1);
    heitor->equip(ice2);
    heitor->equip(cure2);
    heitor->equip(ice1);

    std::cout << "-----------------------------------------------------------" << std::endl;
    std::cout << "Use: " << std::endl;
    heitor->use(0, *heitor);
    heitor->use(1, *heitor);
    heitor->use(2, *heitor);
    heitor->use(3, *heitor);
    heitor->use(4, *heitor);


    std::cout << "-----------------------------------------------------------" << std::endl;
    std::cout << "Unequip and using: " << std::endl;
    heitor->unequip(0);
    heitor->use(0, *heitor);


    std::cout << "-----------------------------------------------------------" << std::endl;
    std::cout << "Print Getters: " << std::endl;
    std::cout << heitor->getName() << std::endl;
    std::cout << ice1->getType() << std::endl;

    delete heitor;
 

    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    std::cout << "-----------------------------------------------------------" << std::endl;
    std::cout << "Equipe from original main: " << std::endl;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");

    std::cout << "-----------------------------------------------------------" << std::endl;
    std::cout << "Original output: " << std::endl;
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
    return 0;
}