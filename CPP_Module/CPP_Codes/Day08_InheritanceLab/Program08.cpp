/*
Library Catalog with Books and Journals:
Problem Statement: Build a library catalog system. Create a base class LibraryItem with properties like title and author. Then, derive classes like Book and Journal, each with their unique properties. Implement methods to check out and return items in the derived classes.

*/

#include <iostream>
#include <string>

using namespace std;

class LibraryItem {
protected:
    string title;
    string author;
public:
    LibraryItem(const string& title, const string& author)
        : title(title), author(author) {}

    virtual void checkOut() = 0;
    virtual void returnItem() = 0;
    virtual ~LibraryItem() {}
};

class Book : public LibraryItem {
public:
    Book(const string& title, const string& author)
        : LibraryItem(title, author) {}

    void checkOut() override {
        cout << "Book '" << title << "' checked out." << endl;
    }

    void returnItem() override {
        cout << "Book '" << title << "' returned." << endl;
    }
};

class Journal : public LibraryItem {
public:
    Journal(const string& title, const string& author)
        : LibraryItem(title, author) {}

    void checkOut() override {
        cout << "Journal '" << title << "' checked out." << endl;
    }

    void returnItem() override {
        cout << "Journal '" << title << "' returned." << endl;
    }
};

int main() {
    string title, author;

    cout << "Enter Book title and author: ";
    getline(cin, title);
    getline(cin, author);
    Book book(title, author);
    book.checkOut();
    book.returnItem();

    cout << "Enter Journal title and author: ";
    getline(cin, title);
    getline(cin, author);
    Journal journal(title, author);
    journal.checkOut();
    journal.returnItem();

    return 0;
}