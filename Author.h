#include <string>

using namespace std; 

class Author {
public:
	Author() 
		: name(""), age(0), novelsPublished(0) {}

	Author(string name_in, int age_in, int novelsPublished_in) 
		:name(name_in), age(age_in), novelsPublished(novelsPublished_in) {}

	string get_name() {
		return name; 
	}
	int get_age() {
		return age;
	}
	int get_number_of_novels_published() {
		return novelsPublished; 
	}

	friend ostream &operator<<(ostream &output, Author &author) {
		output << "Name: " << author.name << " Age: " << author.age; 
		output << " Number of novels: " << author.novelsPublished; 
		return output;  
	}

private:
	string name; 
	int age; 
	int novelsPublished; 
};