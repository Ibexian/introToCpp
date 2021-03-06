#include "headers/account.h"

using namespace std;

account::account():balance(0){

}

vector<string> account::report() const {
  vector<string> report;
  report.push_back("Balance is " + to_string(balance));
  report.push_back("Transactions: ");
  for (auto t:log){
    report.push_back(t.report());
  }
  report.push_back("-----------------");

  return report;
}

bool account::deposit(int amt) {
  if (amt >= 0) {
    balance += amt;
    log.push_back(transaction(amt, "Deposit"));
    return true;
  } else {
    return false;
  }
}

bool account::withdraw(int amt) {
  if ((amt >= 0) && (balance >= amt)) {
    balance -= amt;
    log.push_back(transaction(amt, "Withdraw"));
    return true;
  } else {
    return false;
  }
}
