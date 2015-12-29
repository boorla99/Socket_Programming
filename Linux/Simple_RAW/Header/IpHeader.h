#ifndef __IP_HEADER__
#define __IP_HEADER__

struct ip_hdr{                                                              
	unsigned char ver:4;                                                    
	unsigned char hlen:4;                                                   
	unsigned char tos;                                                      
	unsigned short int t_len;                                               
	unsigned short int ident;                                               
	unsigned char flag:3;                                                   
	unsigned short int frag:13;                                             
	unsigned char ttl;                                                      
	unsigned char protocol;                                                 
	unsigned short int check_sum;                                           
	unsigned int s_addr;                                                    
	unsigned int d_addr;                                                    
} *ip;
  
#endif
