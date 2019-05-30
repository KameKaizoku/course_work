#include "Patient.h"

#include <string>

Patient::Patient(int pday, int pmonth, int pyear, int pulse_rate)
{
	//this->age = age;
	this->pday = pday;
	this->pmonth = pmonth;
	this->pyear = pyear;
	this->pulse_rate = pulse_rate;
}
Patient::Patient(int pulse_b, int cil_b, int dial_b, int pulse_a, int cil_a, int dial_a)
{
	this->pulse_b = pulse_b;
	this->cil_b = cil_b;
	this->dial_b = dial_b;
	this->pulse_a = pulse_a;
	this->cil_a = cil_a;
	this->dial_a = dial_a;

}
Patient::~Patient()
{
}

void Patient::your_age()
{
	int seconds = time(NULL);

	int sec_365 = 365 * 24 * 60 * 60;
	int sec_366 = 366 * 24 * 60 * 60;
	int sec_4 = 3 * sec_365 + sec_366;
	int year = 0;


	while (seconds - sec_4 > 0)
	{
		seconds -= sec_4;
		year += 4;
	}

	while (seconds - sec_365 > 0)
	{
		seconds -= sec_365;
		year++;
	}
	year += 1970;
	int month_30 = 30 * 24 * 60 * 60;
	int month_28 = 28 * 24 * 60 * 60;
	int month_29 = 29 * 24 * 60 * 60;
	int month_31 = 31 * 24 * 60 * 60;
	int month = 0;
	int buffer_sec;
	while (seconds > 0)
	{
		month++;
		buffer_sec = seconds;
		if ((month < 8 && month % 2 == 1) || (month > 7 && month % 2 == 0))
		{

			seconds -= month_31;
		}
		else
		{
			if (month == 2 && year % 4 != 0)
			{

				seconds -= month_28;
			}

			else if (month == 2 && year % 4 == 0)
			{

				seconds -= month_29;
			}
			else
			{
				seconds -= month_30;
			}

		}

	}

	int day = 0;
	//std::cout << buffer_sec << " " << seconds << std::endl;
	int sec_day = 24 * 60 * 60;
	buffer_sec += 3 * 60 * 60;
	day = buffer_sec / sec_day;
	if (buffer_sec%sec_day != 0) day++;



	age = year - pyear - 1;
	if (pmonth < month) age++;
	else
	{
		if (pmonth == month)
		{
			if (pday <= day) age++;
		}
	}

//	return age;
}

double Patient::is_pressure_normal()
{
	double pulse_pressure_b = cil_b - dial_b; //вычсление пульсового давления
	int pulse_pressure_a = cil_a - dial_a;
	double kr = double(pulse_pressure_a - pulse_pressure_b) / (pulse_a - pulse_b);
	return kr;
	//return "fg";
}

std::string Patient::is_pulse_normal() //функция проверки пульса. (Функция с перегрузкой)

{
	

	if (age < 1)
	{
		if (pulse_rate >= 102 && pulse_rate <= 162) return "Показатели в норме";
		else
		{
			if ((pulse_rate - 162) > 0) deviation = pulse_rate - 162;
			else deviation = 102 - pulse_rate;

			return "Показатели не в норме";
		}
	}

	if (age >= 1 && age <= 2)
	{
		if (pulse_rate >= 94 && pulse_rate <= 154) return "Показатели в норме";
		else
		{
			if ((pulse_rate - 154) > 0) deviation = pulse_rate - 154;
			else deviation = 94 - pulse_rate;

			return "Показатели не в норме";
		}
	}

	if (age > 2 && age <= 6)
	{
		if (pulse_rate >= 94 && pulse_rate <= 154) return "Показатели в норме";
		else
		{
			if ((pulse_rate - 154) > 0) deviation = pulse_rate - 154;
			else deviation = 94 - pulse_rate;

			return "Показатели не в норме";
		}
	}

	if (age > 6 && age <= 8)
	{
		if (pulse_rate >= 78 && pulse_rate <= 118) return "Показатели в норме";
		else
		{
			if ((pulse_rate - 118) > 0) deviation = pulse_rate - 118;
			else deviation = 74 - pulse_rate;

			return "Показатели не в норме";
		}
	}

	if (age > 8 && age <= 10)
	{
		if (pulse_rate >= 68 && pulse_rate <= 106) return "Показатели в норме";
		else
		{
			if ((pulse_rate - 106) > 0) deviation = pulse_rate - 106;
			else deviation = 63 - pulse_rate;

			return "Показатели не в норме";
		}
	}

	if (age > 10 && age <= 12)
	{
		if (pulse_rate >= 60 && pulse_rate <= 100) return "Показатели в норме";
		else
		{
			if ((pulse_rate - 100) > 0) deviation = pulse_rate - 100;
			else deviation = 60 - pulse_rate;

			return "Показатели не в норме";
		}
	}

	if (age > 12 && age <= 15)
	{
		if (pulse_rate >= 55 && pulse_rate <= 95) return "Показатели в норме";
		else
		{
			if ((pulse_rate - 95) > 0) deviation = pulse_rate - 95;
			else deviation = 55 - pulse_rate;

			return "Показатели не в норме";
		}
	}

	if (age > 15 && age <= 50)
	{
		if (pulse_rate >= 64 && pulse_rate <= 84) return "Показатели в норме";
		else
		{
			if ((pulse_rate - 84) > 0) deviation = pulse_rate - 84;
			else deviation = 64 - pulse_rate;

			return "Показатели не в норме";
		}
	}

	if (age > 50 && age <= 60)
	{
		if (pulse_rate >= 64 && pulse_rate <= 84) return "Показатели в норме";
		else
		{
			if ((pulse_rate - 84) > 0) deviation = pulse_rate - 84;
			else deviation = 64 - pulse_rate;

			return "Показатели не в норме";
		}
	}

	if (age > 60)
	{
		if (pulse_rate >= 69 && pulse_rate <= 89) return "Показатели в норме";
		else
		{
			if ((pulse_rate - 89) > 0) deviation = pulse_rate - 89;
			else deviation = 69 - pulse_rate;

			return "Показатели не в норме";
		}
	}
	//else return 0;
}
 