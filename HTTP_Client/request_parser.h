/**
 * CS431 : Networks.
 * Assignment 1 : HTTP Client
 * @author Marc Magdi
 * Tuesday 30 October 2018
 */

#ifndef HTTP_CLIENT_REQUEST_PARSER_H
#define HTTP_CLIENT_REQUEST_PARSER_H

#include "request.h"
#include <vector>

using namespace std;

/**.
 *
 * @param request_line a request a string to parse and build a request object from
 * ex of line: GET file-name host-name (port-number)
 * @return object of request created with all fields initiated
 */
request parse_request(string request_line);

vector<string> split(const string &s, char delim);

#endif //HTTP_CLIENT_REQUEST_PARSER_H
