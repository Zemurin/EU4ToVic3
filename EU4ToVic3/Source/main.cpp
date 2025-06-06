#include "EU4ToVic3Converter.h"
#include "Log.h"
#include <fstream>

int main(const int argc, const char* argv[])
{
	try
	{
		std::ofstream clearLog("log.txt");
		clearLog.close();

		commonItems::ConverterVersion converterVersion;
		converterVersion.loadVersion(std::filesystem::path("configurables/version.txt"));

		Log(LogLevel::Info) << converterVersion;
		if (argc >= 2)
		{
			Log(LogLevel::Info) << "EU4ToVic3 takes no parameters.";
			Log(LogLevel::Info) << "It uses configuration.txt, configured manually or by the frontend.";
		}
		convertEU4ToVic3(std::move(converterVersion));
		return 0;
	}

	catch (const std::exception& e)
	{
		Log(LogLevel::Error) << e.what();
		return -1;
	}
}