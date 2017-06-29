#!/bin/python

import sys


n = int(raw_input().strip())
i=0
for i in range (1,11):
    print ('%d x %d = %d'%(n,i,n*i))
