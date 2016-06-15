#include <iostream>

using namespace std; 

class Text {
public:
	Text() {
		cout << "Text created." << endl;
	}
	virtual void length() {
		cout << "The book was 100 words long." << endl;
	}
};

class Book : public Text {
public:
	Book() {
		cout << "Book created." << endl;
	}
	virtual void author() {
		cout << "The author is JK Rowling" << endl;
	}
	virtual void length() {
		cout << "The book was 800 pages." << endl;
	}
};

class LearningResource : public Text {
public:
	LearningResource() {
		cout << "LearningResource created." << endl;
	}
	virtual void resourceFocus() {
		cout << "This resource is focused on multiple inheritance." << endl; 
	}
};

class Dictionary : public LearningResource, public Book {
public:
	Dictionary() {
		cout << "Dictionary made" << endl;
	}
	virtual void resourceFocus() {
		cout << "haha"; 
	}
	void length() {
		cout << "This length is 1000 pages." << endl;
	}
};