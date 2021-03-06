# $NetBSD: Makefile,v 1.5 2014/06/04 06:09:44 dsainty Exp $

DISTNAME=	libftdi1-1.0
CATEGORIES=	devel
MASTER_SITES=	http://www.intra2net.com/en/developer/libftdi/download/
EXTRACT_SUFX=	.tar.bz2

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://www.intra2net.com/en/developer/libftdi/
COMMENT=	Userland driver library for FTDI USB chips
LICENSE=	gnu-lgpl-v2.1

USE_LIBTOOL=	yes
USE_CMAKE=	yes
# false warning ? The "cmake" tool is used but not added to USE_TOOLS.
USE_TOOLS+=	pkg-config cmake
USE_LANGUAGES=	c c++

PYTHON_VERSIONS_INCOMPATIBLE=	33 34 # not yet ported as of 1.0

BUILD_DEPENDS+=libusb1-[0-9]*:../../devel/libusb1
# It is better off to have doxygen, but
# clang segfaults while packaging print/luatex
#BUILD_DEPENDS+=doxygen-[0-9]*:../../devel/doxygen

PKGCONFIG_OVERRIDE+=	libftdi1.pc.in
PKGCONFIG_OVERRIDE+=	libftdipp1.pc.in

PLIST_SUBST+=	PYSITELIB=${PYSITELIB}

do-configure:
	(cd $(WRKSRC) ; \
	cmake \
	-DEXAMPLES:BOOL=off \
	-DDOCUMENTATION:BOOL=off \
	-DCMAKE_BUILD_WITH_INSTALL_RPATH=TRUE \
	-DCMAKE_INSTALL_PREFIX=${PREFIX} \
	-DCMAKE_INSTALL_RPATH=${PREFIX}/lib \
	-DCMAKE_INSTALL_RPATH_USE_LINK_PATH=FALSE \
	-DLIBUSB_INCLUDE_DIR=${PREFIX}/include/libusb-1.0 \
	.)
# -DCMAKE_INSTALL_PREFIX=${PREFIX} converts /usr/local to ${PREFIX}

.include "../../devel/boost-headers/buildlink3.mk"
.include "../../devel/boost-libs/buildlink3.mk"
.include "../../devel/libconfuse/buildlink3.mk"
.include "../../devel/libusb/buildlink3.mk"
.include "../../devel/libusb1/buildlink3.mk"
.include "../../devel/swig/buildlink3.mk"
.include "../../lang/python/pyversion.mk"
.include "../../lang/${PYPACKAGE}/buildlink3.mk"
.include "../../lang/python/tool.mk"

.include "../../mk/bsd.pkg.mk"
