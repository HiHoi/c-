/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 19:48:03 by hoslim            #+#    #+#             */
/*   Updated: 2023/01/27 21:08:57 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <iostream>
#include <string>

class	Account
{
	private :
		static int	_nbAccounts;
		static int	_totalAmount;
		static int	_totalNbDeposits;
		static int	_totalNbWithdrawals;

		static void	_displayTimestamp( void );

		int			_accountIndex;
		int			_amount;
		int			_nbDeposits;
		int			_nbWithdrawals;

		Account( void );
	public :
		typedef Account		t;

		static int			getNbAccounts( void );
		static int			getTotalAmount( void );
		static int			getNbDeposits( void );
		static int			getNbWithdrawals( void );
		static int			displayAccountsInfos( void );

		Account( int initial_deposit );
		~Account( void );

		void				makeDeposit( int deposit );
		bool				makeWithdrawal( int withdrawal );
		int					checkAmount( void ) const;
		void				displayStatus( void ) const;
};

#endif