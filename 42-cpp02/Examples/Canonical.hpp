/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Canonical.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 10:37:47 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/06/22 10:55:21 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE
#define SAMPLE

#include <iostream>

class Sample {

public:

    Sample( void );
    Sample( int const n );
    Sample( Sample const & src);
    ~Sample( void );

    Sample &    operator=(Sample const & rhs);

    int getFoo( void ) const;

private:

    int _foo;

};

std::ostream &  operator<<( std::ostream & o, Sample const & i);

#endif