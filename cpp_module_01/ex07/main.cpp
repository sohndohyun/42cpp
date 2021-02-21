#include <iostream>
#include <fstream>
#include <cerrno>

void readFile(std::ifstream& is, std::string& input)
{
	std::string line;
	while (std::getline(is, line))
	{
		input.append(line);
		if (!is.eof())
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

	std::ifstream is;
	std::string input;
	std::string output;

	is.open(file);
	if (errno)
	{
		std::cerr << file << ": " << std::strerror(errno) << std::endl;
		return errno;
	}
	readFile(is, input);
	is.close();

	if (s1 == s2)
		output = input;
	else
	{
		size_t start = 0;
		size_t index;
		while (1)
		{
			if ((index = input.find(s1, start)) == std::string::npos)
			{
				output.append(input, start, input.length());
				break;
			}
			output.append(input, start, index - start);
			output.append(s2);
			start = index + s1.length();
		}
	}
	std::ofstream os;
	os.open(file + ".replace");
	if (errno)
	{
		std::cerr << file << ": " << std::strerror(errno) << std::endl;
		return errno;
	}
	os << output;
	os.close();

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
