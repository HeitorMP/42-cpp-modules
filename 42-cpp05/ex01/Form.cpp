/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:00:14 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/09/13 19:41:53 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("default"), _gradeToExecute(1) {
    this->_isSigned = false;
}

Form::Form( std::string name, int grade) : _name("default"), _gradeToExecute(grade) {
    this->_isSigned = false;
}

Form::Form( Form const & src ) {
    *this = src;
}

