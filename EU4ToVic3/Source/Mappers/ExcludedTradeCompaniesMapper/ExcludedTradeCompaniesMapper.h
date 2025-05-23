#ifndef EXCLUDED_TRADE_COMPANIES_MAPPER_H
#define EXCLUDED_TRADE_COMPANIES_MAPPER_H
#include "Parser.h"
#include <filesystem>

namespace mappers
{
class ExcludedTradeCompaniesMapper: commonItems::parser
{
  public:
	ExcludedTradeCompaniesMapper() = default;
	void loadMappingRules(const std::filesystem::path& filePath);

	[[nodiscard]] const auto& getExcludedTCs() const { return excludedTCs; }

  private:
	void registerKeys();

	std::set<std::string> excludedTCs;
};
} // namespace mappers

#endif // EXCLUDED_TRADE_COMPANIES_MAPPER_H