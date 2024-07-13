#pragma once

#include <memory>
#include "RestAPI.h"
#include "HttpAPI.h"

class RestApiImpl : public RestAPI {
public:
    RestApiImpl();
    RestApiImpl(std::string ip, std::string port);
    RestApiImpl(std::shared_ptr<HttpAPI> httpApi);
    virtual RestApiResp signup(std::string id, std::string pwd) override;
    virtual RestApiResp login(std::string id, std::string pwd, std::string nonce) override;
    virtual RestApiResp logout(std::string sessionID) override;
    virtual RestApiResp roomCreate(std::string sessionID, std::string roomName) override;
    virtual RestApiResp roomList(std::string sessionID) override;
    virtual RestApiResp messageSend(std::string sessionID, std::string roomName, std::string message) override;
    virtual RestApiResp messageSend(std::string sessionID, std::string roomName) override;
protected:
    std::string getURL();

private:
    std::shared_ptr<HttpAPI> httpApi;
};