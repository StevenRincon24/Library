//
// Created by Steven on 22/11/2020.
//

#ifndef LIBRERIA_AUTHOR_H
#define LIBRERIA_AUTHOR_H


#include <string>
#include <vector>
#include <ostream>
#include "Book.h"

class Author {
public:
    Author();
    Author(const std::string &idAuthor, const std::string &name, const std::string &nationality);

    const std::string &getIdAuthor() const;

    void setIdAuthor(const std::string &idAuthor);

    const std::string &getName() const;

    void setName(const std::string &name);

    const std::string &getNationality() const;

    void setNationality(const std::string &nationality);

    Book* findBook(std::string);

    void addBook(Book*);

    friend std::ostream &operator<<(std::ostream &os, const Author &author);

    const std::vector<Book *> &getBooks() const;

    void setBooks(const std::vector<Book *> &books);

    virtual ~Author();

private:
    std::string idAuthor;
    std::string name;
    std::string nationality;
    std::vector<Book*> books;

};
#endif //LIBRERIA_AUTHOR_H
