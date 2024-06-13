class Account {

protected:
    int ID;
    char address[20];
    char password[10];
    char username[20];


public:
    Account();
    Account(int newID, const char add[20], const char pass[10], const char usname[10]);
    void createaccount();
    void loginAccount();
    void storedetails();
    ~Account();

};
