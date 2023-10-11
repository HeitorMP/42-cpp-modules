/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:26:08 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/10/11 11:29:27 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Na linha de código return this->c.end(); no contexto do código fornecido, a letra "c" s
e refere ao membro c da classe std::stack que é herdada pela classe MutantStack. 
A classe std::stack é uma classe de contêiner adaptador que é normalmente usada para implementar uma pilha (stack) em C++. 
O membro c de std::stack é uma referência para o contêiner subjacente que está sendo usado para armazenar os elementos na pilha.

Nesse caso, o this->c.end() está chamando o método end() do contêiner subjacente para a pilha, 
que retorna um iterador apontando para o final do contêiner. Isso permite que você itere pelos elementos da pilha usando os iteradores 
padrão do contêiner subjacente (nesse caso, um std::deque por padrão, mas você pode especificar outro contêiner ao criar uma instância de MutantStack). 
Isso é útil para acessar e 
percorrer os elementos da pilha, caso você precise fazer operações mais avançadas do que apenas empilhar e desempilhar.
*/
#include "MutantStack.hpp"
#include <list>
#include <iostream>

int main()
{
    /* mutant */
    std::cout << "*** Mutant *** " << std::endl;
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);
    std::cout << "top: " << mstack.top() << std::endl;
    
    mstack.pop();
    std::cout << "size: " << mstack.size() << std::endl;
    
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << "it value: " << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);

    /* list */

    std::cout << "\n*** List *** " << std::endl;
    std::list<int> lstack;

    lstack.push_back(5);
    lstack.push_back(17);
    std::cout << "top: " << lstack.back() << std::endl;
    
    lstack.pop_back();
    std::cout << "size: " << lstack.size() << std::endl;
    
    lstack.push_back(3);
    lstack.push_back(5);
    lstack.push_back(737);
    lstack.push_back(0);
    
    std::list<int>::iterator it1 = lstack.begin();
    std::list<int>::iterator ite2 = lstack.end();
    ++it1;
    --it1;
    while (it1 != ite2)
    {
        std::cout << "it value: " << *it1 << std::endl;
        ++it1;
    }
    std::list<int> s2(lstack);

    
    return 0;
}
