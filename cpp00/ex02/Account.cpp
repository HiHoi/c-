/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 19:48:05 by hoslim            #+#    #+#             */
/*   Updated: 2023/01/27 21:14:52 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Account.hpp"

static int	Account::getNbAccounts(void)
{}

static int	Account::getTotalAmount(void)
{}

static int	Account::getNbDeposits(void)
{}

static int	Account::getNbWithdrawals(void)
{}

static void	Account::displayAccountsInfos(void)
{}

void	Account::makeDeposit(int deposit)
{}

bool	Account::makeWithdrawal(int withdrawal)
{}

int	Account::checkAmount(void) const
{}

static void	_displayTimestamp(void)
{
	std::cout << "[20220127_101042] ";
}

void	Account::t::displayStatus(void) const
{
	int	i = 0;

	while (i < 7)
	{
		this->_displayTimestamp();
		std::cout << "index:" + std::to_string(this->_accountIndex) << ";";
		std::cout << "amount:" + std::to_string(this->_amount) << ";";
		i++;
	}
}
