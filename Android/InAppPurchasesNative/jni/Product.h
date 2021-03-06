#ifndef __PRODUCT_H__
#define __PRODUCT_H__

#include "JSON.h"

class Product
{
public:
	std::string CurrencyCode;
	std::string Identifier;
	std::string Name;
	int ProductVersionToBundle;
	float LocalPrice;
	int PriceInCents;

	Product();

	Product(const Product& copy);

	void ParseJSON(JSONValue* json);
};

#endif