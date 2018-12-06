# HTTP Server & Client
 This is an implementation of a Web Server and a Web Client that communicate using HTTP/1.1
## HTTP Server
The server handle HTTP/1.1 GET and POST requests to get any file from the server or receive via POST a file from the client. 
It supports persistent connections so it can receive multiple requests through same open connection.
### Timeout
Server has a maximum number of simultanious connections, if the usage of the server is high it updates all open connections to a short timeout. On average usage it can handle to leave connections open for a relatively long time.
## Testing the server
Server was tested using Apache Benchmark and siege and this is a simple diagram for the server response time with 1 million requests.
![DIAGRAM](/screenshots/diagram.png)

## HTTP Client
The client reads a list of requests through an input file  on the following format

    ACTION /filename servername port
    GET /example.html localhost 4444
The action can be a GET or POST request, default port is 80 if no port is submitted.
The client is pipelined. It sends all requests to same server through same persistent connection and start to process the response in order. 
