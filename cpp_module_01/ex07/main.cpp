#include <iostream>
#include <fstream>
#include <cerrno>

void readfile(std::ifstream& istream, std::string& input)
{
	std::string line;
	while (std::getline(istream, line))
	{
		input.append(line);
		if (!istream.eof())
			input.append("\n");
	}
}

int replace(std::string file, std::string s1, std::string s2)
{
	if (file.empty() || s1.empty() || s2.empty())
	{
		std::cerr << "arguments are empty!" << std::endl;
		return 1;
	}

	std::ifstream istream;
	std::string input;

	istream.open(file);
	if (errno) return errno;

	readfile(istream, input);

	

	return 0;
}

int main(int argc, char** argv)
{
	if (argc != 4)
	{
		std::cerr << "too many or less arguments!" << std::endl;
		return 1;
	}
	return replace(argv[1], argv[2], argv[3]);
}