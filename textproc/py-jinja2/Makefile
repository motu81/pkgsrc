# $NetBSD: Makefile,v 1.16 2014/06/09 12:36:51 wiz Exp $

DISTNAME=	Jinja2-2.7.3
PKGNAME=	${PYPKGPREFIX}-${DISTNAME:tl}
CATEGORIES=	textproc python
MASTER_SITES=	http://pypi.python.org/packages/source/J/Jinja2/

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://jinja.pocoo.org/2/
COMMENT=	Small but fast and easy to use stand-alone template engine
LICENSE=	modified-bsd

USE_LANGUAGES=		# none

DEPENDS+=	${PYPKGPREFIX}-markupsafe-[0-9]*:../../textproc/py-markupsafe

SUBST_CLASSES+=		unicode
SUBST_FILES.unicode=	jinja2/*.py jinja2/testsuite/*.py
SUBST_SED.unicode+=	-e "s,u',',g"
SUBST_SED.unicode+=	-e 's,u",",g'
SUBST_STAGE.unicode=	pre-install

.include "../../lang/python/egg.mk"
.include "../../mk/bsd.pkg.mk"
