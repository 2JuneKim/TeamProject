#pragma once

#include "LibcurlWrapper.h"
#include <memory>

class HttpAPI {
public:
    HttpAPI();
    HttpAPI(std::shared_ptr<LibcurlWrapper> libcurl);
    ~HttpAPI();
    bool sendGet(std::string url, std::string body, std::string &reponse);
    bool sendPost(std::string url, std::string body, std::string &response);
    bool sendDelete(std::string url, std::string body, std::string &response);
private:
    std::shared_ptr<LibcurlWrapper> libcurl;
    bool sendHttpRequest(std::string method, std::string url, std::string body, std::string &response);
};
