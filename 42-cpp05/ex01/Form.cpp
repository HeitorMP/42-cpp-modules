/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:00:14 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/09/15 14:03:01 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("default"), _gradeToSign(150), _gradeToExecute(150) {
    this->_isSigned = false;
}

Form::Form( std::string name, int signGrade, int executeGrade) : _name("default"), _gradeToSign(signGrade), _gradeToExecute(executeGrade) {
    this->_isSigned = false;
}

Form::Form( Form const & src ) {
    *this = src;
}

Form::~Form() {
    return ;
}
