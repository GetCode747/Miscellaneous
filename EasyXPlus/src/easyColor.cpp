#include "easyColor.h"

namespace EasyXPlus
{
	//////////////////////////////////////////////////////////////////////
	//								RGB

	Rgb::Rgb(unsigned char R, unsigned char G, unsigned char B)
	{
		colorValue = RGB(R, G, B);
	}

	/////////////////////////////////////////////////////////////////////

	Rgb::Rgb(COLORREF colorValue)
	{
		this->colorValue = colorValue;
	}

	/////////////////////////////////////////////////////////////////////

	COLORREF Rgb::toColorref() const
	{
		return colorValue;
	}

	/////////////////////////////////////////////////////////////////////

	bool Rgb::operator == (const Rgb otherColor) const
	{
		return this->colorValue == otherColor.colorValue;
	}

	/////////////////////////////////////////////////////////////////////

	bool Rgb::operator != (const Rgb otherColor) const
	{
		return !(*this == otherColor);
	}

	/////////////////////////////////////////////////////////////////////

	const unsigned char Rgb::getR() const
	{
		return GetRValue(colorValue);
	}

	/////////////////////////////////////////////////////////////////////

	const unsigned char Rgb::getG() const
	{
		return GetGValue(colorValue);
	}

	/////////////////////////////////////////////////////////////////////

	const unsigned char Rgb::getB() const
	{
		return GetBValue(colorValue);
	}

}