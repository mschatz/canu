
/**************************************************************************
 * This file is part of Celera Assembler, a software program that 
 * assembles whole-genome shotgun reads into contigs and scaffolds.
 * Copyright (C) 1999-2004, Applera Corporation. All rights reserved.
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received (LICENSE.txt) a copy of the GNU General Public 
 * License along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *************************************************************************/
/*********************************************************************
   CVS_ID:  $Id: MicroHetPartitionsREZ.h,v 1.1.1.1 2004-04-14 13:53:23 catmandew Exp $
 *********************************************************************/
#ifndef PARTITIONSREZ_H
#define PARTITIONSREZ_H

typedef struct{
  int *part;
  int len;
  int groups;
} Partition_t;

typedef struct{
  int *set;
  int len;
} Marker_t;

void        print_part(Partition_t *p);
Partition_t *allocate_partition(int len);
void        free_partition(Partition_t *p);

void        print_marker(Marker_t *m);
Marker_t    *allocate_marker(int len);
void        free_marker(Marker_t *m);

#define AUGMENT_THRESHOLD 0.6

#endif
