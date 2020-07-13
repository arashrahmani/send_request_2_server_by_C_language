#include <stdio.h>
char* getRequest(int argc, char *argv[])
{
    char pszRequest[100]= {0};
    char pszResourcePath[]="2016/04/create-xml-request-in-c-for-server.html";
    char pszHostAddress[]="IP OR URL";
    sprintf(pszRequest, "GET /%s HTTP/1.1\r\nHost: %s\r\nContent-Type: text/plain\r\n\r\n", pszResourcePath, pszHostAddress);
    printf("Created Get Request is below:\n\n\n");
    return pszRequest;
}
