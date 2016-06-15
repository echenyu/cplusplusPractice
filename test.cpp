#include "diamondProblem.h"
#include "diamondSolved.h"
#include "Realbook.h"

void diamondProblem(); 
void diamondSolved(); 
void compositionExample(); 

int main () {
	// This function shows when there is an issue from a class inheriting multiple classes -
	// creating 2 base class subojects, and not knowing which base class subobject to choose. 
	// Subobject = an instance of the base class object inside of the derived class
	diamondProblem(); 	

	// This next part of the code will avoid the diamond problem as seen above. 
	diamondSolved(); 

	// Composition example now
	compositionExample(); 
}

void diamondProblem() {
	// Showing an example of the diamond problem here! 
	cout << "This is the inheritance chain. We can see this as the diamond problem! Text is created twice." << endl;
	cout << "------------------------------" << endl;
	Dictionary newDictionary; 
	cout << "------------------------------" << endl;

	// See comment below. 
	Text *book = static_cast<Book *> (&newDictionary);
	Text *learningResource = static_cast<LearningResource *> (&newDictionary); 

	// If we want to call a method from the base class (ambiguous), need to explicitly
	// determine from which Text subobject we are referring to. 
	newDictionary.LearningResource::length();
	newDictionary.Book::length(); 
	static_cast<Book>(newDictionary).length(); 
	static_cast<LearningResource>(newDictionary).length();

	cout << "\n\n"; 
}

void diamondSolved() {
	cout << "This is the inheritance chain after making each of the derived classes from Text virtual." << endl;
	cout << "------------------------------" << endl;
	DictionaryDiamond newDictionary; 
	cout << "------------------------------" << endl;

	cout << "Now, we don't have to determine the base class subobject at compile time!" << endl;
	cout << "Remember that once a base class has declared a function as virtual, all derived classes will";
	cout << " also have that function as virtual" << endl;
	newDictionary.length(); 
	TextDiamond *tDiamond = &newDictionary; 

	cout << "\n\n"; 	
}

void compositionExample() {
	string bookTitle = "Harry Potter and the Half-Blood Prince."; 
	const int bookLength = 607; 
	vector<Page *> pages; 
	Author *newAuthor = new Author("J.K. Rowling", 50, 7); 
	for(int i = 0; i < bookLength; i++) {
		Page *newPage = new Page; 
		pages.push_back(newPage); 
	}
	Realbook harry_potter(bookLength, bookTitle, pages, newAuthor); 

	cout << "This is just showing how my Realbook class is composed of Author and Pages." << endl;
	cout << "------------------------------" << endl;
	
	cout << harry_potter << endl; 
	cout << *harry_potter.get_author() << endl;
	cout << "Page 1: " << harry_potter.get_pages()[0]->get_text() << endl;
}