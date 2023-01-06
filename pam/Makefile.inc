SRCTOP		 = ${.CURDIR}/../..
OBJTOP		 = ${.OBJDIR}/../..

MK_INSTALLLIB	 = no
MK_PROFILE	 = no
SHLIB_MAJOR	 = 6
SHLIB_NAME	?= ${LIB}.so.${SHLIB_MAJOR}
LDADD		+= -lpam

.include "../Makefile.inc"
