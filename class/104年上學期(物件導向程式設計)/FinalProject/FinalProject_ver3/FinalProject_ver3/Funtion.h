using namespace std;
bool IntergerCheck(string);
bool DateChecker(int ,int ,int );
void CreateAuthCode(string &);
string DateCovert(int);
void BookSort(vector <Book> &);
void ReadBookData(vector <Book> &,string );
void WriteBookData(vector <Book> &,string );
void ReadMemberData(vector <Member> &,string );
void WriteMemberData(vector <Member> &,string );
void ReadAdministatorData(vector <Administator> &,string );
int userlogin(vector <Member> &);
int adminlogin(vector <Administator> &);
int accountcheck(vector <Member> &,string);
int accountcheck(vector <Administator> &,string);
int IDcheck(vector <Member> &,string);
int IDcheck(vector <Book> &,string);
void BorrowFuntion(vector <Book> &,Member &);
void SearchFuntion(vector <Book> &,string);
void RenewFuntion(vector <Book> &,vector <Member> &,vector <Administator> &);
void AddDeleteFuntion(vector <Book> &,vector <Member> &,string);
void RenewBooksData(vector <Book> &,string);
void RenewMembersData(Member &);
ostream &operator<<(ostream &,Book );
ostream &operator<<(ostream &,Member );