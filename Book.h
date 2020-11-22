//
// Created by Steven on 22/11/2020.
//

#ifndef LIBRERIA_BOOK_H
#define LIBRERIA_BOOK_H


#include <string>
#include <ostream>

class Book {
public:
    Book();
    Book(const std::string &idBook, const std::string &title, short pages);

    const std::string &getIdBook() const;

    void setIdBook(const std::string &idBook);

    const std::string &getTitle() const;

    void setTitle(const std::string &title);

    short getPages() const;

    void setPages(short pages);

    friend std::ostream &operator<<(std::ostream &os, const Book &book);

    virtual ~Book();

private:
    std::string idBook;
    std::string title;
    short int pages;

};

#endif //LIBRERIA_BOOK_H
