/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:18:02 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/10/09 15:29:13 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <deque>

template< typename T, class Container = std::deque< T > >
class MutantStack : public std::stack< T, Container >
{

private:

public:
    MutantStack( void ) {};
    ~MutantStack( void ) {};

    MutantStack( const MutantStack& src )
    {
        *this = src;
    }
    MutantStack&    operator=( const MutantStack& rhs )
    {
        if ( this != &rhs )
        {
            std::stack< T, Container >::operator=( rhs );
        }
        return *this;
    }
    typedef typename Container::iterator    iterator;

    iterator    begin( void )
    {
        return this->c.begin();
    }
    iterator    end( void )
    {
        return this->c.end();
    }
};

#endif