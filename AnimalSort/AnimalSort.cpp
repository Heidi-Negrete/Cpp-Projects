#include <iostream>
#include <vector>
#include <fstream>


class Animal 
{
	std::string	m_type		= { "Zebra" };
	std::string m_name		= { "Fido" };
	int			m_birthYear = { 2023 };

public:
	Animal() {};

	Animal(const std::string& type, const std::string& name, const int birthYear)
		: m_type (type)
		, m_name (name)
		, m_birthYear (birthYear)
	{
	}

	void print() const
	{
		std::cout << m_type << " " << m_name << " " << m_birthYear << "\n";
	}
};

class Zoo 
{
	std::string			m_name		= { "Zoo" };
	int					m_zooId		= { 0 };
	std::vector<Animal> m_animals;

public:
	Zoo() {};

	Zoo(const std::string& name, const int zooId)
		: m_name (name)
		, m_zooId (zooId)
	{
	};

	void addAnimal(const Animal& a)
	{
		m_animals.push_back(a);
	}

	const std::vector<Animal>& getAnimals() const
	{
		return m_animals;
	}

	void print() const
	{
		for (auto& a : m_animals)
		{
			a.print();
		}
	}

	void loadFromFile(const std::string& filename)
	{
		std::ifstream fin(filename);
		std::string type, name;
		int birthyear;

		while (fin >> type)
		{
			fin >> name >> birthyear;
			addAnimal(Animal(type, name, birthyear));
		}
	}
};

int main()
{
	Zoo bethanyZoo("Bethany", 120);
	bethanyZoo.loadFromFile("animals.txt");
	bethanyZoo.print();

	return 0;
}