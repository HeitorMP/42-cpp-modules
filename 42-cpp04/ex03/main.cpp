
#include "Character.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{

    ICharacter *heitor = new Character("heitor");
    AMateria *ice1 = new Ice();
    AMateria *ice2 = new Ice();
    AMateria *cure1 = new Cure();
    AMateria *cure2 = new Cure();


    heitor->equip(ice1);
    heitor->equip(cure1);
    heitor->equip(ice2);
    heitor->equip(cure2);

    heitor->use(0, *heitor);
    /* IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
    return 0; */
}