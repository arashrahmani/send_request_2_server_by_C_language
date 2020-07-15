#include <stdio.h>
char psz_request[100] = {0};
char psz_resource_path[] = "req";
char psz_host_address[] = "51.255.225.216";
char port_no[] = "80";
char* get_request()
{
    sprintf(psz_request, "GET /%s HTTP/1.0\r\nHost: %s:%s\r\nContent-Type: text/plain\r\n\r\n", psz_resource_path, psz_host_address,port_no);
    printf("Created Get Request is below:\n\n\n");
    return psz_request;
}
