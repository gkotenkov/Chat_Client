#include "client.h"

Client::Client(QString &userName, QString &hostName, quint16 port, quint16 roomNum)
    :userName(userName), hostName(hostName), port(port), roomNum(roomNum)
{
    lastMessageTime = QTime();
}

Client::~Client()
{

}

//------------getters-----------
const QString& Client::getUserName() {return userName;}  //не напутал ли я тут с возвращаемым типом?

const QString &Client::getHostName() {return hostName;}

quint16 Client::getPort() {return port;}

quint16 Client::getRoomNum() {return roomNum;}

const QTime &Client::getLastMessageTime() {return lastMessageTime;}

//------------setters-----------
void Client::setUserName(QString userName)
{
    this->userName = userName;
}

void Client::setHostName(QString hostName)
{
    this->hostName = hostName;
}

void Client::setPort(quint16 port)
{
    this->port = port;
}

void Client::setRoomNum(quint16 roomNum)
{
    this->roomNum = roomNum;
}

void Client::setLastMessageTime()
{
    this->lastMessageTime = QTime::currentTime();
}
