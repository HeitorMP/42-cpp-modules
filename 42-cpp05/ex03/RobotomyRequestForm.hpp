/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:51:50 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/09/21 14:11:02 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <cstdlib>
# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    public:
        RobotomyRequestForm( std::string const target );
        RobotomyRequestForm( RobotomyRequestForm const & src );
        ~RobotomyRequestForm();

        std::string           getTarget( void ) const;

        virtual void            execute( Bureaucrat const &bureaucrat ) const;
        RobotomyRequestForm &   operator=( const RobotomyRequestForm & rhs );

    private:
        const std::string   _target;
};

std::ostream    &operator<<( std::ostream &o, RobotomyRequestForm & i );

#endif