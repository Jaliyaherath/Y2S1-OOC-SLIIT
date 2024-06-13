#include "Account.h"
#include <cstring>

Account::Account(){

	ID = 0;
	strcpy(address, "");
	strcpy(password, "");
	strcpy(username, "");
}
Account::Account(int newID, const char add[20], const char pass[10], const char usname[10]) {

	ID = newID;
	strcpy(address, "add[20]");
	strcpy(password, " pass[10]");
	strcpy(username, "usname[10]");
}
void Account::createaccount() {

}
void Account::loginAccount() {

}
void Account::storedetails() {

}
Account::~Account() {

}
