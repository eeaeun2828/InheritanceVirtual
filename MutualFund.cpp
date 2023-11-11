// Copyright A.T. Chamillard. All Rights Reserved.

#include "MutualFund.h"

#include <string>

/**
  * Constructor
  * @param Deposit initial deposit
 */

// provide constructor implementation here
MutualFund::MutualFund(float Deposit) : InvestmentAccount(Deposit){}
/**
 * Adds money to the account, deducting a
 * service charge
 * @param Amount amount to add
*/
void MutualFund::AddMoney(float Amount)
{
	// Add the amount and deduct a service charge 
	float serviceCharge = 0.01f * Amount; 
	SetBalance(GetBalance() - serviceCharge);
}

/**
 * Updates the balance by adding 6%
*/
void MutualFund::UpdateBalance()
{
	// Update the balance by adding 6%
	SetBalance(GetBalance() * 1.06);
}

/**
 * Provides balance with account type caption
 * @return balance with caption
*/
std::string MutualFund::GetString()
{
	return std::string{ "Mutual Fund Balance: " } +
		std::to_string(GetBalance());
}

