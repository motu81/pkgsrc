# $NetBSD: Makefile,v 1.9 2014/06/06 09:53:29 obache Exp $

DISTNAME=	suse_openssl-${SUSE_VERSION}
PKGREVISION=	8
CATEGORIES=	emulators
RPMUPDPKGS+=	libopenssl1_0_0-1.0.1h-11.48.1.${SUSE_ARCH}

MAINTAINER=	pkgsrc-users@NetBSD.org
COMMENT=	Linux compatibility package for OpenSSL

EMUL_MODULES.linux=	base

.include "../../emulators/suse131_linux/Makefile.common"
.include "../../mk/bsd.pkg.mk"
