/*
 * Generated by WEB converter: Mon Dec 14 10:35:11 2015
 * Do not edit
 */

#include "web_proc.h"
#include "cgi_api.h"


int web__Test1_html(struct connstruct *cn, char *datap)
{

	int send_len = 0;

	int total_send_len = 0;
	send_len = WEB_write_blk(cn, datap, 0, 173);

	if(send_len != 173)
 		return send_len;
 	total_send_len += send_len;

	return total_send_len;

}
