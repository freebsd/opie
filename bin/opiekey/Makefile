OPIE_DIST	?= ${SRCTOP}/opie

PROG		 = opiekey
SRCS		 = opiekey.c
MAN		 = opiekey.1

CFLAGS		+= -I${SRCTOP}/lib/libopie
CFLAGS		+= -I${OPIE_DIST}
CFLAGS		+= -DINSECURE_OVERRIDE

LDADD		+= -L${OBJTOP}/lib/libopie -lopie

LINKS		+= ${BINDIR}/opiekey ${BINDIR}/otp-md4
LINKS		+= ${BINDIR}/opiekey ${BINDIR}/otp-md5
LINKS		+= ${BINDIR}/opiekey ${BINDIR}/otp-sha1

MLINKS		+= opiekey.1 otp-md4.1
MLINKS		+= opiekey.1 otp-md5.1
MLINKS		+= opiekey.1 otp-sha1.1

.include <bsd.prog.mk>

.PATH: ${OPIE_DIST}
