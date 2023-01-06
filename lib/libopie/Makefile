CONFS		 = opieaccess
CONFSMODE	 = 600
OPIE_DIST	?= ${SRCTOP}/opie
DIST_DIR	 = ${OPIE_DIST}/${.CURDIR:T}
SHLIB_MAJOR	 = 8

LIB		 = opie
SRCS		 =
SRCS		+= accessfile.c
SRCS		+= atob8.c
SRCS		+= btoa8.c
SRCS		+= btoe.c
SRCS		+= btoh.c
SRCS		+= challenge.c
SRCS		+= generator.c
SRCS		+= getsequence.c
SRCS		+= getutmpentry.c
SRCS		+= hash.c
SRCS		+= hashlen.c
SRCS		+= insecure.c
SRCS		+= keycrunch.c
SRCS		+= lock.c
SRCS		+= lookup.c
SRCS		+= newseed.c
SRCS		+= open.c
SRCS		+= parsechallenge.c
SRCS		+= passcheck.c
SRCS		+= passwd.c
SRCS		+= randomchallenge.c
SRCS		+= readpass.c
SRCS		+= readrec.c
SRCS		+= unlock.c
SRCS		+= verify.c
SRCS		+= version.c
SRCS		+= writerec.c
SRCS		+= opieextra.c
INCS		 = ${OPIE_DIST}/opie.h
MAN		 =
MAN		+= ${OPIE_DIST}/opie.4
MAN		+= ${OPIE_DIST}/opiekeys.5
MAN		+= ${OPIE_DIST}/opieaccess.5

CFLAGS		+= -I${.CURDIR} -I${OPIE_DIST} -I${DIST_DIR}

KEYFILE		?= \"/etc/opiekeys\"
CFLAGS		+= -DKEY_FILE=${KEYFILE}

ACCESSFILE	?= \"/etc/opieaccess\"
CFLAGS		+= -DINSECURE_OVERRIDE -DPATH_ACCESS_FILE=${ACCESSFILE}

LDADD		+= -lmd

.include <bsd.lib.mk>

.PATH: ${DIST_DIR}
