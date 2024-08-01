/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 13:34:03 by avolcy            #+#    #+#             */
/*   Updated: 2024/07/02 13:34:09 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ************************************************************************** //
//                                                                            //
//                Account.hpp for GlobalBanksters United                //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //


#pragma once
#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

// ************************************************************************** //
//                               Account Class                                //
// ************************************************************************** //

#include <ctime>
#include <iostream>

class Account {

    public:

      typedef Account t;

	    Account( int initial_deposit );
	    ~Account( void );

	    static int  getNbAccounts( void );
	    static int  getNbDeposits( void );
	    static int  getTotalAmount( void );
	    static int  getNbWithdrawals( void );
	    static void displayAccountsInfos( void );

	    int   checkAmount( void ) const;
	    void  makeDeposit( int deposit );
	    void  displayStatus( void ) const;
	    bool  makeWithdrawal( int withdrawal );

    private:

	    Account( void );
      
	    int       _amount;
	    int       _nbDeposits;
	    int       _accountIndex;
	    int       _nbWithdrawals;

      static int  _nbAccounts;
    	static int  _totalAmount;
	    static int  _totalNbDeposits;
	    static int  _totalNbWithdrawals;


      static void _displayTimestamp( void );


};



// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //


#endif /* __ACCOUNT_H__ */
