#include "Squad.hpp"
#include <cstdlib>

Squad::Squad()
{
	array = new ISpaceMarine*[32];
	size = 32;
	count = 0;
}

Squad::Squad(const Squad &squad)
{
	array = NULL;
	size = 0;
	count = 0;
	operator=(squad);
}

Squad::~Squad()
{
	for(int i = 0;i < count;i++)
		delete array[i];
	delete[] array;
}

Squad &Squad::operator=(const Squad &squad)
{
	if (this == &squad)
		return *this;
	
	if (array != NULL)
	{
		for(int i = 0;i < count;i++)
			delete array[i];
		delete[] array;
	}
	array = new ISpaceMarine*[squad.size];
	size = squad.size;
	count = squad.count;
	for(int i = 0;i < squad.count;i++)
		array[i] = squad.array[i]->clone();
	return *this;
}

int Squad::getCount() const
{
	return count;
}

ISpaceMarine* Squad::getUnit(int index) const
{
	if (index < 0 || count <= index)
		return NULL;
	return array[index];
}

int Squad::push(ISpaceMarine* value)
{
	if (count >= size)
	{
		size *= 2;
		ISpaceMarine** temp = new ISpaceMarine*[size];	
		for(int i = 0;i < count;i++)
			temp[i] = array[i];
		delete[] array;
		array = temp;
	}
	array[count++] = value;
	return count;
}
