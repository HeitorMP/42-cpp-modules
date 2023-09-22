/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:04:16 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/09/21 14:32:22 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <fstream>
// # include <sstream>
// # include <cstring>
// # include <cstdlib>
# include "AForm.hpp"

# define SUFFIX "_shrubbery"

class ShrubberyCreationForm : public AForm
{
    public:
        ShrubberyCreationForm( std::string const target );
        ShrubberyCreationForm( ShrubberyCreationForm const & src );
        ~ShrubberyCreationForm();
    
        ShrubberyCreationForm &operator=( const ShrubberyCreationForm & rhs );

        virtual void           execute( Bureaucrat const &bureaucrat ) const;

        class CannotOpenFileException : public std::exception {
		    public:
			    virtual const char *what() const throw();
	    };

    private:
        const std::string   _target;

};

const std::string   ASCIITreeGenerator( void );

#endif