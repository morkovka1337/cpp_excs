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

struct dictItem
{
    string word;
    string meaning;
    string displayAs;

    dictItem(const string& wordVal, const string& meaningVal)
    {
        word = wordVal;
        meaning = meaningVal;
        displayAs = wordVal + ": " + meaningVal;
    }
    bool operator == (const dictItem& itemToCompare) const
    {
        return (itemToCompare.word == this->word);
    }

    bool operator < (const dictItem& itemToCompare) const
    {
        return (this->word < itemToCompare.word);
    }

    operator const char* () const
    {
        return displayAs.c_str();
    }
};

int main()
{
    set<dictItem> dict;
    dict.insert(dictItem("Apple", "Fruit"));
    dict.insert(dictItem("Tomato", "Vegetable"));
    dict.insert(dictItem("Car", "Type of vehicle"));
    dict.insert(dictItem("Phone", "Device to communicate with people"));
    dict.insert(dictItem("House", "Building"));
    displayContents(dict);
    getchar();
}