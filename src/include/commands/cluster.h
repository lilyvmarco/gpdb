/*-------------------------------------------------------------------------
 *
 * cluster.h--
 *    header file for postgres cluster command stuff 
 *
 * Copyright (c) 1994-5, Regents of the University of California
 *
 * $Id: cluster.h,v 1.2 1997/08/19 21:38:06 momjian Exp $
 *
 *-------------------------------------------------------------------------
 */
#ifndef	CLUSTER_H
#define	CLUSTER_H

/*
 * defines for contant stuff
 */
#define _TEMP_RELATION_KEY_ 		"clXXXXXXXX"
#define _SIZE_OF_TEMP_RELATION_KEY_ 	11


/*
 * functions
 */
extern void cluster(char oldrelname[], char oldindexname[]);

#endif	/* CLUSTER_H */
