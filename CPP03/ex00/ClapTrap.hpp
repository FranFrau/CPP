#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap
{
	private:
		static const int	_maxHitPoints = 10;
		static const int	_maxEnergyPoints = 10;
		static const int	_maxAttackDamage = 0;
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
	public:
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		int			getHitPoint(void);
		int			getEnergyPoint(void);
		int			getAttackDamage(void);
		void		addEnergyPoint(int value);
		std::string	getName(void);

		ClapTrap();
		ClapTrap(ClapTrap& clapTrap);
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap& operator=(ClapTrap& equals);
};

#endif