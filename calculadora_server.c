/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "calculadora.h"

double *
suma_1_svc(dupla *argp, struct svc_req *rqstp)
{
	static double  result;

	result = argp -> a + argp -> b;

	return &result;
}

double *
resta_1_svc(dupla *argp, struct svc_req *rqstp)
{
	static double  result;

	result = argp -> a - argp -> b;

	return &result;
}

double *
multi_1_svc(dupla *argp, struct svc_req *rqstp)
{
	static double  result;

	result = argp -> a* argp -> b;

	return &result;
}

double *
div_1_svc(dupla *argp, struct svc_req *rqstp)
{
	static double  result;
	
	if(argp -> b != 0)
	{
		result = argp -> a/ argp -> b;
	}
	else
	{
		result = 0;
	}
	
	return &result;
}
