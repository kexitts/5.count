
#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    string author;
    string title;
    string publisher;
    int year;
    int pages;

public:
    explicit Book(string a, string t, string p, int y, int pg)
    {
        author = a;
        title = t;
        publisher = p;
        year = y;
        pages = pg;
    }

    void Show() const
    {
        cout << "Author: " << author << endl;
        cout << "Title: " << title << endl;
        cout << "Publisher: " << publisher << endl;
        cout << "Year: " << year << endl;
        cout << "Pages: " << pages << endl;
        cout << "----------------------" << endl;
    }

    string GetAuthor() const
    {
        return author;
    }

    string GetPublisher() const
    {
        return publisher;
    }

    int GetYear() const
    {
        return year;
    }
};

int main()
{
    Book books[] =
    {
        Book("Shevchenko", "Kobzar", "Dnipro", 2010, 300),
        Book("Franko", "Zakhar Berkut", "Folio", 2015, 250),
        Book("Shevchenko", "Poems", "Folio", 2020, 180),
        Book("Lesya Ukrainka", "Forest Song", "Dnipro", 2018, 200),
        Book("Franko", "Moses", "Folio", 2022, 150)
    };

    int size = sizeof(books) / sizeof(books[0]);

    string author;
    string publisher;
    int year;

    cout << "Enter author: ";
    getline(cin, author);

    cout << "\nBooks by author:\n";
    for (int i = 0; i < size; i++)
    {
        if (books[i].GetAuthor() == author)
        {
            books[i].Show();
        }
    }

    cout << "\nEnter publisher: ";
    getline(cin, publisher);

    cout << "\nBooks by publisher:\n";
    for (int i = 0; i < size; i++)
    {
        if (books[i].GetPublisher() == publisher)
        {
            books[i].Show();
        }
    }

    cout << "\nEnter year: ";
    cin >> year;

    cout << "\nBooks published after " << year << ":\n";
    for (int i = 0; i < size; i++)
    {
        if (books[i].GetYear() > year)
        {
            books[i].Show();
        }
    }

    return 0;
}
