#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string login;
	std::string postalAddress;
	std::string emailAddress;
	std::string phoneNumber;
	std::string birthday;
	std::string favoriteMeal;
	std::string underwearColor;
	std::string darkestSecret;
public:
	void setContact();
	static void putHeaderContactValue(std::string value);
	void putSomeContact(int index);
	void putAllContact();
};

void Contact::setContact()
{
	std::cout << "ADD: first name > ";
	std::getline(std::cin, firstName);
	std::cout << "ADD: last name > ";
	std::getline(std::cin, lastName);
	std::cout << "ADD: nickname > ";
	std::getline(std::cin, nickname);
	std::cout << "ADD: login > ";
	std::getline(std::cin, login);
	std::cout << "ADD: postal address > ";
	std::getline(std::cin, postalAddress);
	std::cout << "ADD: email address > ";
	std::getline(std::cin, emailAddress);
	std::cout << "ADD: phone number > ";
	std::getline(std::cin, phoneNumber);
	std::cout << "ADD: birthday date > ";
	std::getline(std::cin, birthday);
	std::cout << "ADD: favorite meal > ";
	std::getline(std::cin, favoriteMeal);
	std::cout << "ADD: underwear color > ";
	std::getline(std::cin, underwearColor);
	std::cout << "ADD: darkest secret > ";
	std::getline(std::cin, darkestSecret);
}

void Contact::putHeaderContactValue(std::string value)
{
	if (value.length() > 10)
		std::cout << '|' << value.substr(0, 9) << '.';
	else
		std::cout << '|' << std::setw(10) << value;
}

void Contact::putSomeContact(int index)
{
	std::cout << '|' << std::setw(10) << index;
	putHeaderContactValue(firstName);
	putHeaderContactValue(lastName);
	putHeaderContactValue(nickname);
	std::cout << '|' << std::endl;
}

void Contact::putAllContact()
{
	std::cout << "first name : " << firstName << std::endl;
	std::cout << "last name : " << lastName << std::endl;
	std::cout << "nickname : " << nickname << std::endl;
	std::cout << "login : " << login << std::endl;
	std::cout << "postal address : " << postalAddress << std::endl;
	std::cout << "email address : " << emailAddress << std::endl;
	std::cout << "phone number : " << phoneNumber << std::endl;
	std::cout << "birthday date : " << birthday << std::endl;
	std::cout << "favorite meal : " << favoriteMeal << std::endl;
	std::cout << "underwear color : " << underwearColor << std::endl;
	std::cout << "darkest secret : " << darkestSecret << std::endl;
}

int main()
{
	std::string cmd;
	Contact contacts[8];
	int ctcIndex = 0;

	while (1)
	{
		std::cout << "command > ";
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
		{
			if (ctcIndex < 8)
				contacts[ctcIndex++].setContact();
			else
                std::cout << "ADD: phonebook is full!" << std::endl;
		}
		else if (cmd == "SEARCH")
		{
            if (ctcIndex == 0)
            {
                std::cout << "SERACH: nothing to search" << std::endl;
				continue;
            }
			std::cout << "+----------+----------+----------+----------+" << std::endl;
			std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
			std::cout << "+----------+----------+----------+----------+" << std::endl;
			for (int i = 0;i < ctcIndex;i++)
				contacts[i].putSomeContact(i);
			std::cout << "+----------+----------+----------+----------+" << std::endl;
			std::cout << "SEARCH: index > ";
			std::getline(std::cin, cmd);
			bool flag = true;
			for (int i = 0;i < (int)cmd.length();i++)
				if(!isnumber(cmd[i]))
				{
					flag = false;
					break ;
				}
			int index = flag ? atoi(cmd.c_str()) : -1;
			index = (0 <= index && index < ctcIndex) ? -1 : ctcIndex - 1;
			if (index == -1)
				std::cout << "SERACH: wrong index!" << std::endl;
			else
				contacts[index].putAllContact();
		}
		else if (cmd == "EXIT")
		{
			std::cout << "exit" << std::endl;
			break ;
		}
	}
	return (0);
}
