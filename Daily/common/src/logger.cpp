#include <fstream>
#include "logger.h"


namespace CodeForces {

Logger :: Logger() {
    // NOP
}

Logger :: ~Logger() {
    // NOP
}

void Logger :: init(const std::string &filename) {
    if (filename.empty()) {
        return;
    }
    _log_filename = filename;
}

void Logger :: _log_msg(const LogLevel &level, const std::string &msg) {
    std::string log_header = "[CodeForces]";
    if (_log_level >= level) {
        _log_file.open(_log_filename, std::ios::app);
        if (_log_file.is_open()) {
            _log_file << log_header << "[" << LogLevelStr[level] << "] - " <<  msg << std::endl;
            _log_file.close();
        }
    }
}


} // namespace CodeForces