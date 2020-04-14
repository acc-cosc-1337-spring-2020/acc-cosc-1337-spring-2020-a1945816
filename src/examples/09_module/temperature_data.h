//temperature_data.h
#include "temperature.h"
#include <fstream>
#include<string>
#include<vector>

#ifndef TEMPERATURE_DATA_H
#define TEMPERATURE_DATA_H

class TemperatureData 
{
public:
	void save_temp(std::vector<Temperature>& ts);
	std::vector<Temperature> get_temps() const;
private:
	const std::string file_name{ "temperature.dat" };
};


#endif // !TEMPERATURE_DATA_H
