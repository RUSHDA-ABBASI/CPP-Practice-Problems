#include<iostream>
using namespace std;
/*
Write a program to help a bank create its withdrawal system. Your program should allow
the user to input their account type. Account types are: savings, current. Following business
rules apply when withdrawing from a certain account:
 Savings:
User must provide the savings account number and code ‘S’ (for savings). When
withdrawing from a savings account, users need to pay a set 2% of the money that
they withdraw. If the amount of money withdrawn is over 50,000, then a 5% tax will
be deducted. The money deducted shall be from the remaining money in the
account.
 Current:
User must provide the current account number and code „C‟ (for current). When
withdrawing from a current account, users need to pay a withdrawal fee of 100. If
the amount of money withdrawn is over 50,000, then a 5% tax will be deducted. The
money deducted shall be from the remaining money in the account.
Assume all users have the 200,000 in their accounts, and cannot withdraw more than
100,000 at a time.
*/

int main(){

    char accountType;
    int accountNumber;
    double withdrawAmount;
    double balance = 200000;  
    double deduction = 0;

    cout << "Enter account type (S for Savings, C for Current): ";
    cin >> accountType;

    cout << "Enter account number: ";
    cin >> accountNumber;

    cout << "Enter withdrawal amount: ";
    cin >> withdrawAmount;

    if (withdrawAmount > 100000) {
        cout << "Error: You cannot withdraw more than 100,000 at a time.\n";
        return 0;
    }

    if (accountType == 'S' || accountType == 's') {
    
        deduction = withdrawAmount * 0.02; // 2% fee
        balance = balance - withdrawAmount - deduction;

        if (withdrawAmount > 50000) {
            balance = balance - (balance * 0.05); 
        }

        cout << "Savings Account Withdrawal Successful\n";
    }
    else if (accountType == 'C' || accountType == 'c') {
        
        deduction = 100;  
        balance = balance - withdrawAmount - deduction;

        if (withdrawAmount > 50000) {
            balance = balance - (balance * 0.05); 
        }

        cout << "Current Account Withdrawal Successful\n";
    }
    else {
        cout << "Invalid account type!\n";
        return 0;
    }

    cout << "Remaining balance: " << balance << endl;

    return 0;
}

