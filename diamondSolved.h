#include <iostream>

using namespace std; 



class TextDiamond {
public:
	TextDiamond() 
		:years(1), time(0) {
		cout << "Text created." << endl;
	}
	virtual void length() {
		cout << "The book was 200 words long." << endl;
	}

	friend ostream &operator<<(ostream &output, const TextDiamond &texts) {
		output << "Years: " << texts.years << " and time: " << texts.time;
		return output; 
	}
private:
	int years; 
	int time; 
};



class BookDiamond : public virtual TextDiamond {
public:
	BookDiamond() {
		cout << "Book created." << endl;
	}
	virtual void length() {
		cout << "The book was 800 pages." << endl;
	}
	void author() {
		cout << "The author is JK Rowling" << endl;
	}
};

class LearningResourceDiamond : public virtual TextDiamond {
public:
	LearningResourceDiamond() {
		cout << "LearningResource created." << endl;
	}
	virtual void length() {
		cout << "The book was 800 pages." << endl;
	}
	virtual void resourceFocus() {
		cout << "This resource is focused on multiple inheritance." << endl; 
	}
};

class DictionaryDiamond : public LearningResourceDiamond, public BookDiamond {
public:
	DictionaryDiamond() {
		cout << "Dictionary made." << endl;
	}
	virtual void length() {
		cout << "300 pages." << endl;
	}
	virtual void resourceFocus() {
		cout << "haha"; 
	}
};