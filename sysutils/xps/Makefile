# $NetBSD: Makefile,v 1.43 2014/05/29 23:37:33 wiz Exp $

DISTNAME=	xps-4.2
PKGREVISION=	6
CATEGORIES=	sysutils
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=motif-pstree/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://motif-pstree.sourceforge.net/
COMMENT=	Displays the Unix process list as a hierarchical tree

USE_TOOLS+=		gmake perl pod2man pod2html
GNU_CONFIGURE=		yes
CONFIGURE_ARGS+=	x_applibdir=${PREFIX}/lib/X11/app-defaults

CFLAGS.NetBSD+=	-D_KMEMUSER

post-extract:
	${LN} -s FreeBSD ${WRKSRC}/src/DragonFly

.include "../../mk/motif.buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
