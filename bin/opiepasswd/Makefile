OPIE_DIST	?= ${SRCTOP}/opie

PROG		 = opiepasswd
SRCS		 = opiepasswd.c
MAN		 = opiepasswd.1

CFLAGS		+= -I${SRCTOP}/lib/libopie
CFLAGS		+= -I${OPIE_DIST}
CFLAGS		+= -DINSECURE_OVERRIDE

LDADD		+= -L${OBJTOP}/lib/libopie -lopie

BINOWN		?= root
BINMODE		 = 4555

.include <bsd.prog.mk>

.PATH: ${OPIE_DIST}
