#include <iostream>
#include <ctime>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{

}

int Account::getNbAccounts( void )
{
    return _nbAccounts;
}

int Account::getTotalAmount( void )
{
    return _totalAmount;
}

int Account::getNbDeposits( void )
{
    return _totalNbDeposits;
}

int Account::getNbWithdrawals( void )
{
    return _totalNbWithdrawals;
}


void Account::displayAccountsInfos( void )
{
    std::cout << _nbAccounts << std::endl;
    std::cout << _totalAmount << std::endl;
    std::cout << _totalNbDeposits << std::endl;
    std::cout << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{

}

bool	Account::makeWithdrawal( int withdrawal )
{

}

int		Account::checkAmount( void ) const
{
    return _amount;
}

void	Account::displayStatus( void ) const
{
    
}

void	Account::_displayTimestamp(void)
{
    char times[18];
    time_t now;
    struct tm tm;

    time(&now);
    localtime_r(&now, &tm);
    strftime(ts, sizeof(ts), "[%Y%m%d_%H%M%S]", &tm);
    cout << ts << " ";
}