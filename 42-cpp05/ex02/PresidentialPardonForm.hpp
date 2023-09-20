/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:51:50 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/09/20 18:16:15 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"
# include <iostream>

class PresidentialPardonForm : public AForm
{
    public:
        PresidentialPardonForm( std::string const target );
        PresidentialPardonForm( PresidentialPardonForm const & src );
        ~PresidentialPardonForm();

        std::string           getTarget( void ) const;

        virtual void           execute( Bureaucrat const &bureaucrat ) const;
        PresidentialPardonForm &operator=( const PresidentialPardonForm & rhs );

    private:
        const std::string   _target;
};

std::ostream    &operator<<( std::ostream &o, PresidentialPardonForm & i );

#endif