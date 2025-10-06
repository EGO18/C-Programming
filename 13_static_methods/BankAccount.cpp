#include <iostream>


class BankAccount
{
 public:
    BankAccount(int acc_num) : account_number(acc_num)
    {
        total_account++;
    }
    // Destructor
    ~BankAccount()
    {
        total_account--;
    }

    static int getTotalAccount()
    {
        return total_account;
    }

    private:
    static int  total_account;
    int account_number;
};

// Initialize static member
int BankAccount::total_account = 0;

int main()
{
  std::cout << BankAccount::getTotalAccount() << std::endl;
  for (int i = 0; i < 10; i++)
  {
    BankAccount ba(123);
    std::cout << BankAccount::getTotalAccount() << std::endl;
  }
    std::cout << BankAccount::getTotalAccount() << std::endl;

  return 0;
}