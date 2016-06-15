#include <vector>
#include "Page.h"
#include "Author.h"

class Realbook {
public: 
	Realbook()
		:number_of_pages(0), book_title(""), pages(std::vector<Page *>()), author(NULL) {}


	int get_number_of_pages() {
		return number_of_pages;
	}

	string get_title() {
		return book_title;
	}

	Author *get_author() {
		return author; 
	}

	std::vector<Page *> get_pages() {
		return pages; 
	}

	Realbook(int number_of_pages_in, string book_title_in, std::vector<Page *> pages_in, Author *author_in) 
		:number_of_pages(number_of_pages_in), book_title(book_title_in), 
		pages(pages_in), author(author_in) {}

	friend ostream &operator<<(ostream &output, Realbook &book) {
		output << "This is " << book.book_title << " and it was written by " << book.author->get_name() << ".\n"; 
		output << "The book is a fun read and has " << book.number_of_pages << " pages total!"; 
		return output; 
	}

private:
	int number_of_pages; 
	string book_title; 
	std::vector<Page *> pages; 
	Author *author; 
};