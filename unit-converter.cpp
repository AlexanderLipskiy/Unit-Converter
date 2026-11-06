#include <iostream>
#include <iomanip>

int main()
{
	constexpr double one_mile{ 1.609344 };
	constexpr double one_pound{ 0.45359237 };
	constexpr double one_gallon{ 3.785411784 };
	constexpr int table_width{ 13 };

	double distance_km{}, weight_kg{}, temperature_C{}, volume_l{};

	std::cout << "Welcome to Unit Converter 1.0!\n\n";
	
	std::cout << "Enter the distance (in km): ";
	std::cin >> distance_km;
	std::cout << "Enter the weight (in kg): ";
	std::cin >> weight_kg;
	std::cout << "Enter the temperature (in d. Celsius): ";
	std::cin >> temperature_C;
	std::cout << "Enter the volume (in liters): ";
	std::cin >> volume_l;

	std::cout << '\n';

	std::cout << "Final Table:\n\n";

	std::cout << std::fixed << std::setprecision(2);
	std::cout << std::left << std::setw(table_width) << "Quantity" << std::right << std::setw(table_width) << "System 1" << std::setw(table_width) << "System 2" << '\n';
	std::cout << std::setfill('-') << std::setw(table_width * 3) << "" << '\n';
	std::cout << std::setfill(' ');
	std::cout << std::left << std::setw(table_width) << "Distance" << std::right << std::setw(table_width) << distance_km << std::setw(table_width) << distance_km / one_mile << '\n';
	std::cout << std::left << std::setw(table_width) << "Weight" << std::right << std::setw(table_width) << weight_kg << std::setw(table_width) << weight_kg / one_pound << '\n';
	std::cout << std::left << std::setw(table_width) << "Temperature" << std::right << std::setw(table_width) << temperature_C << std::setw(table_width) << temperature_C * 9 / 5 + 32 << '\n';
	std::cout << std::left << std::setw(table_width) << "Volume" << std::right << std::setw(table_width) << volume_l << std::setw(table_width) << volume_l / one_gallon << "\n\n";

	std::cout << "Thank you for using Unit Converter!\n";

	return 0;
}