#include <stdio.h>
#include <stdalign.h>

int main()
{
	setlocale(0, "");

	char number[] = "";
	char binary_whole[] = "", binary_factorial[] = "";
	char number_whole[] = "", number_factorial[] = "";
	char k[] = "1";
	int whole = 0, factorial = 0;
	int x = 0, x_1 = 0;
	int a = 1;

	printf("\tВведите десятичное число: ");
	gets(number);

	const char number_1[] = number;
	size_t size = sizeof number_1 - 1; 
	
	for (size_t i = 0; i < size; ++i)
	{
		int k = i; 
		if (number[i] == ',')
		{
			i++;

			int k = 0; 
			for (int j = i; j < size; j++)
			{
				number_factorial[k] += number[j];
				k++;
			}

			break;
		}

		number_whole[k] += number[i];
		k++;
	}	

	whole = (int)(number_whole);
	factorial = (int)(number_factorial);

	//while (whole)
	//{
	//	x_1 = whole % 2;
	//	whole /= 2;
	//	
	//	x = 10 * x + x_1;
	//}

	//printf("%d", x);

	return 0;
}

//for (int i = 0; i < number.length(); i++)
//{
//	if (number[i] == ',')
//	{
//		i++;
//
//		for (int j = i; j < number.length(); j++)
//			number_factorial += number[j];
//
//		break;
//	}
//
//	number_whole += number[i];
//}
//
//whole = std::stoi(number_whole);
//factorial = std::stoi(number_factorial);
//
//while (whole)
//{
//	x_1 = whole % 2;
//	whole /= 2;
//
//	x = 10 * x + x_1;
//}
//
//binary_whole = std::to_string(x);
//
//for (int i = 0; i < number_factorial.length() - 1; i++)
//	k += '0';
//
//int k_1 = std::stoi(k);
//
//while (factorial > 10)
//{
//	factorial *= 2;
//
//	if (factorial >= k_1)
//	{
//		std::string str = std::to_string(factorial);
//
//		if (factorial > 199 && str[str.length() - 1] == '0')
//		{
//			std::string value_str = std::to_string(factorial);
//			std::string value_str_1;
//
//			for (int i = 0; i < value_str.length() - 1; i++)
//				value_str_1 += value_str[i];
//
//			factorial = std::stoi(value_str_1);
//
//			binary_factorial = '0';
//		}
//		else
//		{
//			factorial = factorial - k_1;
//
//			binary_factorial += '1';
//		}
//	}
//	else
//		binary_factorial += '0';
//}
//
//std::cout << "\t" << binary_whole << "," << binary_factorial;
//
//return 0;