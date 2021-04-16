#include "Date.h"

// constructor
Date::Date(int year, int month, int day)
{
	setDate(year, month, day);
}
void Date::setDate(int year, int month, int day)
{
	m_month = month;
	m_day = day;
	m_year = year;
}
