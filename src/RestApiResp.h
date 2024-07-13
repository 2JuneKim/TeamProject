#pragma once

#include <string>

class RestApiResp {
public:
    RestApiResp(bool success, std::string resposne);
    bool getSuccess();
    std::string getResp();
private:
    bool success;
    std::string resp;
};