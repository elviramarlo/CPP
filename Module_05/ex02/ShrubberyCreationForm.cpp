/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 18:03:29 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/05 21:46:53 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &_target):
	AForm("ShrubberyCreationForm", _target, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other): AForm(other) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	checkGrades(executor);
	std::ofstream outfile (this->getTarget() + "_shrubbery");

	outfile <<	"         . . ." << std::endl <<
            	"   .        .  .     ..    ." << std::endl <<
                ".                   .         .  ." << std::endl <<
                "                  .              " << std::endl <<
                "                 .                .." << std::endl <<
               	".              .            .              ." << std::endl <<
               	".               '.,        .               . " << std::endl <<
            	".                'b      *" << std::endl <<
            	" .                '$    #.                .." << std::endl <<
               	".    .             $:   #:               ." << std::endl <<
            	" ..      .  ..     *#  @):        .   . ." << std::endl <<
             	"             .    :@,@):   ,.**:'   ." << std::endl <<
             	" .      .,        :@@*: ..**'      .   ." << std::endl <<
            	"         '#o.    .:(@'.@*'  ." << std::endl <<
               	".  .       'bq,..:,@@'   ,*      .  ." << std::endl <<
                "          ,p$q8,:@)'  .p'      ." << std::endl <<
                "  .     '  . '@@Pp@@*'    .  ." << std::endl <<
                "  .  . ..    Y7'.'     .  ." << std::endl <<
                "             :@):." << std::endl <<
                "            .:@:'." << std::endl <<
                "          .::(@:.   " << std::endl; 
	outfile.close();		
}