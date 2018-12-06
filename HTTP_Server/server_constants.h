/**
 * CS431: Networks.
 * Assignment 1: HTTP Server
 * @author Marc Magdi
 * Tuesday 30 October 2018
 */
#ifndef HTTP_Server_CONSTANTS_H
#define HTTP_Server_CONSTANTS_H

#include <string>
#include <map>

#define GET 0
#define POST 1

const std::string REQUEST_HEADER_END = "\r\n\r\n";
const int SERVER_BUFFER_SIZE = 1024;
const int MAX_SIMULTANEOUS_CONNECTIONS = 1000;

#endif //HTTP_Server_CONSTANTS_H
