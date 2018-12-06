/**
 * CS431: Networks.
 * Assignment 1: HTTP Server
 * @author Marc Magdi
 * Tuesday 30 October 2018
 */

#ifndef HTTP_SERVER_TIMOUT_CALCULATOR_H
#define HTTP_SERVER_TIMOUT_CALCULATOR_H
#include <mutex>
#include <map>

void update_timeout(std::mutex &mtx, std::map<int, std::chrono::system_clock::time_point> &open_sockets);

#endif //HTTP_SERVER_TIMOUT_CALCULATOR_H
