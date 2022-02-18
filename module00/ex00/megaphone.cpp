#include <iostream>

using namespace std;

void uppercase_ft(string s)
{
	for(size_t i = 0; i < s.length(); i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
		    cout << (char)(s[i] - 32);
        else
            cout << (char)s[i];
    }
}

int	main(int argc, char *argv[])
{
	if (argc > 1)
		for (int i = 1; i < argc; i++)
			uppercase_ft(argv[i]);
	else
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	cout << endl;
	return (0);
}