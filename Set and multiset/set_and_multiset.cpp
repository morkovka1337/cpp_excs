#include <set>
#include <iostream>
#include <string>
using namespace std;

template <typename T>
void displayContents(const T& container)
{
    for (auto iElement = container.begin();
        iElement != container.end();
        iElement++)
        cout << *iElement << endl;
    cout << endl;
}

struct contactItem 
{
    string name;
    string phoneNum;
    string displayAs;
    contactItem(const string& nameInit, const string& phone)
    {
        name = nameInit;
        phoneNum = phone;
        displayAs = name + ": " + phoneNum;
    }

    bool operator == (const contactItem& itemToCompare) const
    {
        return (itemToCompare.phoneNum == this->phoneNum);
    }

    bool operator < (const contactItem& itemToCompare) const
    {
        return (this->phoneNum < itemToCompare.phoneNum);
    }

    operator const char* () const
    {
        return displayAs.c_str();
    }
};

int main()
{
    set<contactItem> setCs;
    setCs.insert(contactItem("Jack Welsch", "+1 7889 789 789"));
    setCs.insert(contactItem("Bill Gates", "+1 7889 978 123"));
    setCs.insert(contactItem("Angi Merkel", "+1 7889 234 343"));
    setCs.insert(contactItem("Dim Medvedev", "+1 7889 454 132"));
    setCs.insert(contactItem("John Travolta", "+1 7889 435 547"));
    setCs.insert(contactItem("Ben Affleck", "+1 7889 688 123"));
    displayContents(setCs);
    getchar();
}