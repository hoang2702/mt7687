/*
 * Generated by WEB converter: Mon Dec 14 10:35:11 2015
 * Do not edit
 */

#include "web_proc.h"
#include "cgi_api.h"


int web__AP_html(struct connstruct *cn, char *datap)
{

	int send_len = 0;

	int total_send_len = 0;
	send_len = WEB_write_blk(cn, datap, 0, 166);

	if(send_len != 166)
 		return send_len;
 	total_send_len += send_len;

 CGI_MT7687AP_SSID(); 

	send_len = WEB_write_blk(cn, datap, 166, 51);

	if(send_len != 51)
 		return send_len;
 	total_send_len += send_len;

 CGI_MT7687AP_PASSWD(); 

	send_len = WEB_write_blk(cn, datap, 217, 48);

	if(send_len != 48)
 		return send_len;
 	total_send_len += send_len;

 CGI_MT7687AP_SSID(); 

	send_len = WEB_write_blk(cn, datap, 265, 52);

	if(send_len != 52)
 		return send_len;
 	total_send_len += send_len;

 CGI_MT7687AP_PASSWD(); 

	send_len = WEB_write_blk(cn, datap, 317, 1074);

	if(send_len != 1074)
 		return send_len;
 	total_send_len += send_len;

	return total_send_len;

}
