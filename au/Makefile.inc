# ex:syn=make

AU_LIBS=		${PORTAUDIO_LIBS} ${SNDFILE_LIBS}
AU_CFLAGS=		${PORTAUDIO_CFLAGS} ${SNDFILE_CFLAGS}

AU_LINKS=		ag_au ${AU_LIBS}
AU_LINKS_STATIC=	ag_au_static ${AU_LIBS}
