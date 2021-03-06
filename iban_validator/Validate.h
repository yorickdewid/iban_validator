#pragma once
#include <memory>
#include <map>
#include "Specification.h"

class Validate {
public:
	Validate();
	bool isValid(std::string arg);
	void addSpecification(std::unique_ptr<Specification> specPtr);
	void setSelectedSpecification(std::string countryCode);

	std::map<std::string, std::unique_ptr<Specification>> specifications;
	std::unique_ptr<Specification> selectedSpec;
};