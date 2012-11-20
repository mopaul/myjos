#include "ns.h"

extern union Nsipc nsipcbuf;

void
output(envid_t ns_envid)
{
	binaryname = "ns_output";
	// LAB 6: Your code here:
	// 	- read a packet from the network server
	//	- send the packet to the device driver
	static envid_t nsenv;
	int perm, r;
	uint32_t whom, req;
	while(1){
		// recv
		perm = 0;
		req = ipc_recv((int32_t *) &whom, &nsipcbuf, &perm);		
		if (req == NSREQ_OUTPUT && whom == ns_envid) { //TODO
			//send the pkt.
			while( (r = sys_try_send_packet( nsipcbuf.pkt.jp_data, nsipcbuf.pkt.jp_len )) != 0);
		}		
	}
					
	
	
}
