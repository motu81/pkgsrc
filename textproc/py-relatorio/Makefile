# $NetBSD: Makefile,v 1.6 2014/06/28 22:59:33 joerg Exp $

DISTNAME=	relatorio-0.6.0
PKGNAME=	${PYPKGPREFIX}-${DISTNAME}
CATEGORIES=	textproc python
MASTER_SITES=	http://pypi.python.org/packages/source/r/relatorio/

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://relatorio.openhex.org/
COMMENT=	Templating library able to output odt and pdf files
LICENSE=	gnu-gpl-v3

DEPENDS+=	${PYPKGPREFIX}-genshi>=0.5:../../www/py-genshi
DEPENDS+=	${PYPKGPREFIX}-lxml>=2.0:../../textproc/py-lxml
DEPENDS+=	${PYPKGPREFIX}-pycha-[0-9]*:../../graphics/py-pycha
DEPENDS+=	${PYPKGPREFIX}-yaml-[0-9]*:../../textproc/py-yaml

USE_LANGUAGES=		#none
PYTHON_VERSIONED_DEPENDENCIES=	cairo
PYTHON_VERSIONS_INCOMPATIBLE=	26 33 34 # py-gtk2 via py-pycha

.include "../../lang/python/versioned_dependencies.mk"
.include "../../lang/python/egg.mk"
.include "../../mk/bsd.pkg.mk"
