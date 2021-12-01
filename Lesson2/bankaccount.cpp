#include <iostream>
#include <string>
using std::string;

class BankAccount
{
    private:
      // TODO: declare member variables
      int accountNumber;
      float fund;
      string ownerName;

    public:
      // TODO: declare setters
      void setAccountNumber(int accountNumber);
      void setFund(float fund);
      void setOwnerName(string name);
      // TODO: declare getters
      int getAccountNumber() const;
      float getFund() const;
      string getOwnerName() const;
};

// TODO: implement setters
void BankAccount::setAccountNumber(int accountNumber) {
    BankAccount::accountNumber = accountNumber;
}

void BankAccount::setFund(float fund) {
    BankAccount::fund = fund;
}

void BankAccount::setOwnerName(string name) {
    BankAccount::ownerName = name;
}
// TODO: implement getters
int BankAccount::getAccountNumber() const {
    return BankAccount::accountNumber;
}

float BankAccount::getFund() const {
    return BankAccount::fund;
}

string BankAccount::getOwnerName() const {
    return BankAccount::ownerName;
}

int main(){
    // TODO: instantiate and output a bank account
    BankAccount account1;
    account1.setAccountNumber(1234567890);
    account1.setFund(500.0);
    account1.setOwnerName("Weiyang Li");

    int n = account1.getAccountNumber();
    float salary = account1.getFund();
    string name = account1.getOwnerName();
    std::cout << "Account Number: " << n << "\n";
    std::cout << "Monthly Salary: " << salary << "\n";
    std::cout << "Owner's Name: " << name << "\n";
}