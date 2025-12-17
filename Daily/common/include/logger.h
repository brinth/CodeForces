#pragma once

#include <fstream>
#include <unordered_map>

namespace CodeForces {

class LoggerBase {

public:
                                    LoggerBase() = default;
    virtual                         ~LoggerBase() = default;

    enum LogLevel {
        ERROR,
        WARN,
        INFO ,
        DEBUG,
        TRACE,
    };

    std::unordered_map<LogLevel, std::string> LogLevelStr = {
        {ERROR, "ERROR"},
        {WARN, "WARN"},
        {INFO, "INFO"},
        {DEBUG, "DEBUG"},
        {TRACE, "TRACE"},
    };

    virtual void                    info(const std::string &msg) { _log_msg(INFO, msg); }
    virtual void                    debug(const std::string &msg) { _log_msg(DEBUG, msg); }
    virtual void                    warn(const std::string &msg) { _log_msg(WARN, msg); }
    virtual void                    error(const std::string &msg) { _log_msg(ERROR, msg); } 

protected:
    LogLevel _log_level = LogLevel::DEBUG;

    virtual void                    _log_msg(const LogLevel &level, const std::string &msg) = 0;
};


class Logger : public LoggerBase {
public:
                                    Logger();
    virtual                         ~Logger();

    void                            init(const std::string &filename);

protected:
    
    virtual void                    _log_msg(const LogLevel &level, const std::string &msg);

private:
    std::ofstream                   _log_file;
    std::string                     _log_filename;
};


} // namespece CodeForces