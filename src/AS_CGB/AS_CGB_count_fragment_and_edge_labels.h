
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
 * $Id: AS_CGB_count_fragment_and_edge_labels.h,v 1.1.1.1 2004-04-14 13:49:43 catmandew Exp $
 *
 * Module:
 *
 * Description:
 *
 *******************************************************************/

#ifndef AS_CGB_COUNT_FRAGMENT_AND_EDGE_LABELS_INCLUDE
#define AS_CGB_COUNT_FRAGMENT_AND_EDGE_LABELS_INCLUDE

void count_fragment_and_edge_labels
(
 Tfragment frags[],
 Tedge     edges[],
 char      comment[]);

#endif // AS_CGB_COUNT_FRAGMENT_AND_EDGE_LABELS_INCLUDE
