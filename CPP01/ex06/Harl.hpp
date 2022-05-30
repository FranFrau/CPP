#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
class Harl;
typedef	void	(Harl::*jump)(void);

class	Harl
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		jump	arr[4];
	public:
		void	complain(std::string level);

		Harl();
		~Harl();
};
#endif