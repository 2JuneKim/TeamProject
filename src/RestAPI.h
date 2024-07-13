#pragma once

#include <string>
#include "RestApiResp.h"

class RestAPI {
public:
    RestAPI(std::string ip, std::string port);
    virtual RestApiResp signup(std::string id, std::string pwd) = 0;
    virtual RestApiResp login(std::string id, std::string pwd, std::string nonce) = 0;
    virtual RestApiResp logout(std::string sessionID) = 0;
    virtual RestApiResp roomCreate(std::string sessionID, std::string roomName) = 0;
    virtual RestApiResp roomList(std::string sessionID) = 0;
    virtual RestApiResp messageSend(std::string sessionID, std::string roomName, std::string message) = 0;
    virtual RestApiResp messageSend(std::string sessionID, std::string roomName) = 0;
protected:
    std::string getURL();

private:
    std::string ip;
    std::string port;
};