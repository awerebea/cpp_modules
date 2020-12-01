/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 15:41:05 by awerebea          #+#    #+#             */
/*   Updated: 2020/12/01 13:53:33 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

std::string ShrubberyCreationForm::_name = "shrubbery creation";

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) :
	Form(ShrubberyCreationForm::_name, 145, 137), _target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &a) :
	Form(a), _target(a._target) {}

ShrubberyCreationForm &
				ShrubberyCreationForm::operator=(ShrubberyCreationForm const &a)
{
	if (this != &a)
		_target = a._target;
	return(*this);
}

std::string				ShrubberyCreationForm::getTarget() const
{
	return (_target);
}

char const *		ShrubberyCreationForm::TargetFileOpenWriteException::what()
																const throw()
{
	return ("target file open/write error.\n");
}

void		ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	std::string const	trees[4] = {
		"    _\\/_\n"						\
		"     /\\\n"						\
		"     /\\\n"						\
		"    /  \\\n"						\
		"    /~~\\o\\\n"					\
		"   /o   \\\n"						\
		"  /~~*~~~\\\n"						\
		" o/    o \\\n"						\
		" /~~~~~~~~\\~`\n"					\
		"/__*_______\\\n"					\
		"     ||\n"							\
		"   \\====/\n"						\
		"    \\__/\n",
		"         *\n"						\
		"        /|\\\n"					\
		"       /*|O\\\n"					\
		"      /*/|\\*\\\n"					\
		"     /X/O|*\\X\\\n"				\
		"    /*/X/|\\X\\*\\\n"				\
		"   /O/*/X|*\\O\\X\\\n"				\
		"  /*/O/X/|\\X\\O\\*\\\n"			\
		" /X/O/*/X|O\\X\\*\\O\\\n"			\
		"/O/X/*/O/|\\X\\*\\O\\X\\\n"		\
		"        |X|\n"						\
		"        |X|\n",
		"   *    *  ()   *   *\n"			\
		"*        * /\\         *\n"		\
		"      *   /i\\\\    *  *\n"		\
		"    *     o/\\\\  *      *\n"		\
		" *       ///\\i\\    *\n"			\
		"     *   /*/o\\\\  *    *\n"		\
		"   *    /i//\\*\\      *\n"		\
		"        /o/*\\\\i\\   *\n"			\
		"  *    //i//o\\\\\\\\     *\n"		\
		"    * /*////\\\\\\\\i\\*\n"		\
		" *    //o//i\\\\*\\\\\\   *\n"		\
		"   * /i///*/\\\\\\\\\\o\\   *\n"	\
		"  *    *   ||     *\n",
		"         v\n"						\
		"        >X<\n"						\
		"         A\n"						\
		"        d$b\n"						\
		"      .d\\$$b.\n"					\
		"    .d$i$$\\$$b.\n"				\
		"       d$$@b\n"					\
		"      d\\$$$ib\n"					\
		"    .d$$$\\$$$b\n"					\
		"  .d$$@$$$$\\$$ib.\n"				\
		"      d$$i$$b\n"					\
		"     d\\$$$$@$b\n"					\
		"  .d$@$$\\$$$$$@b.\n"				\
		".d$$$$i$$$\\$$$$$$b.\n"			\
		"        ###\n"						\
		"        ###\n"						\
		"        ###\n"
	};
	std::ofstream	targetFile(_target + "_shrubbery");
	if (!targetFile.is_open())
		throw (TargetFileOpenWriteException());
	for (int i = rand() % 4 + 2; i; --i)
	{
		targetFile << trees[(rand() / 5 + 1) % 4] << std::endl;
		if (targetFile.bad())
		{
			targetFile.close();
			throw (TargetFileOpenWriteException());
		}
	}
	targetFile.close();
}

std::string const &	ShrubberyCreationForm::getName()
{
	return (_name);
}
