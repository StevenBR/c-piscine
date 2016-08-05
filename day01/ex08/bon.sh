#!/bin/sh

ldapsearch -Q "cn=*bon*" | grep "cn" | sed '/#/d' | wc -l | sed 's/ //g'
