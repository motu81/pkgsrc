# $NetBSD: Makefile,v 1.6 2014/06/25 06:03:37 richard Exp $

.include "../../devel/py-trytond/Makefile.common"
DISTNAME=	trytond_account_invoice-${TRYTOND_VERSION}
PKGNAME=	${PYPKGPREFIX}-${DISTNAME:S/_/-/g}
CATEGORIES=	finance python
MASTER_SITES=	${TRYTON_SITES}

MAINTAINER=	rodent@NetBSD.org
HOMEPAGE=	http://www.tryton.org/
COMMENT=	Account invoice module of the Tryton application platform
LICENSE=	gnu-gpl-v3

DEPENDS+=	${PYPKGPREFIX}-python-sql-[0-9]*:../../databases/py-python-sql
DEPENDS+=	${PYPKGPREFIX}-trytond-account-product-[0-9]*:../../finance/py-trytond-account-product
DEPENDS+=	${PYPKGPREFIX}-trytond-product-[0-9]*:../../misc/py-trytond-product
DEPENDS+=	${PYPKGPREFIX}-trytond-account-[0-9]*:../../finance/py-trytond-account
DEPENDS+=	${PYPKGPREFIX}-trytond-company-[0-9]*:../../misc/py-trytond-company
DEPENDS+=	${PYPKGPREFIX}-trytond-party-[0-9]*:../../misc/py-trytond-party
DEPENDS+=	${PYPKGPREFIX}-trytond-currency-[0-9]*:../../finance/py-trytond-currency
DEPENDS+=	${PYPKGPREFIX}-trytond-[0-9]*:../../devel/py-trytond

USE_LANGUAGES=	# none

PYTHON_VERSIONED_DEPENDENCIES=	dateutil

REPLACE_PYTHON+=	tests/test_account_invoice.py

.include "../../lang/python/application.mk"
.include "../../lang/python/egg.mk"
.include "../../lang/python/versioned_dependencies.mk"
.include "../../mk/bsd.pkg.mk"
