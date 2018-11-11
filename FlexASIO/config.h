#pragma once

#include <optional>
#include <string>

namespace flexasio {

	struct Config {
		std::optional<std::string> backend;

		struct Stream {
			std::optional<std::string> device;
			bool wasapiExclusiveMode = false;
		};
		Stream input;
		Stream output;
	};

	std::optional<Config> LoadConfig();

}