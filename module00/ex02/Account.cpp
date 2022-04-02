#include <iostream>
#include <ctime>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
    _displayTimestamp();
    _totalAmount += initial_deposit;
    _accountIndex = _nbAccounts++;
    _amount = initial_deposit;
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << initial_deposit << ";";
    std::cout << "created" << std::endl;
}

Account::~Account( void )
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "closed" << std::endl;
}

int Account::getNbAccounts( void )
{
    return (_nbAccounts);
}

int Account::getTotalAmount( void )
{
    return (_totalAmount);
}

int Account::getNbDeposits( void )
{
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals( void )
{
    return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";";
    std::cout << "total:" << _totalAmount << ";";
    std::cout << "deposits:" << _totalNbDeposits << ";";
    std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    std::cout << "deposit:" << deposit << ";";
    std::cout << "amount:" << _amount + deposit << ";";
    std::cout << "nb_deposits:" << ++_nbDeposits << std::endl;
    _amount += deposit;
    _totalAmount += deposit;
    _totalNbDeposits += _nbDeposits;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    std::cout << "index:" <<  _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    if (_amount < withdrawal)
    {
        std::cout << "withdrawal:" << "refused" << std::endl;
        return (false);
    }
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    _totalNbWithdrawals++;
    _nbWithdrawals++;
    std::cout << "withdrawal:" << withdrawal << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout  <<  "nb_withdrawals:" << _nbWithdrawals << std::endl;
    return (true);
}

int		Account::checkAmount( void ) const
{
    return (_amount);
}

void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "deposits:" << _nbDeposits << ";";
    std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void)
{
    char times[18];
    time_t now;
    struct tm tm;

    time(&now);
    localtime_r(&now, &tm);
    strftime(times, sizeof(times), "[%Y%m%d_%H%M%S]", &tm);
    std::cout << times << " ";
}
