# $NetBSD: Makefile,v 1.3 2014/05/17 16:10:42 wiz Exp $

DISTNAME=	skytools-3.2
PKGREVISION=	1
CATEGORIES=	databases
MASTER_SITES=	http://pgfoundry.org/frs/download.php/3622/

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://pgfoundry.org/projects/skytools
COMMENT=	Tools for PostgreSQL for queueing, replication and failover
LICENSE=	isc

DEPENDS+=	${PYPKGPREFIX}-psycopg2-[0-9]*:../../databases/py-psycopg2
DEPENDS+=	rsync-[0-9]*:../../net/rsync

USE_LANGUAGES=	c
GNU_CONFIGURE=	yes

USE_TOOLS+=	awk gmake grep sed

PY_PATCHPLIST=	yes
PY_NO_EGG=	no
PLIST_SUBST+=	PYVERSSUFFIX=${PYVERSSUFFIX}
PRINT_PLIST_AWK+=	{ gsub("-py${PYVERSSUFFIX}.egg-info", \
				"-py$${PYVERSSUFFIX}.egg-info") }

REPLACE_PYTHON+=	scripts/*.py
REPLACE_PYTHON+=	python/*.py
REPLACE_PYTHON+=	python/skytools/*.py
REPLACE_PYTHON+=	python/pgq/*.py
REPLACE_PYTHON+=	python/pgq/cascade/*.py
REPLACE_PYTHON+=	python/londiste/*.py
REPLACE_PYTHON+=	python/londiste/handlers/*.py
REPLACE_PYTHON+=	misc/*.py
REPLACE_PYTHON+=	*.py
REPLACE_PYTHON+=	tests/setadm/*.py
REPLACE_PYTHON+=	tests/londiste/*.py
REPLACE_PYTHON+=	tests/skylog/*.py
REPLACE_PYTHON+=	tests/cascade/*.py
REPLACE_PYTHON+=	tests/localconsumer/*.py
REPLACE_PYTHON+=	tests/quoting/*.py

.include "../../mk/pgsql.buildlink3.mk"
.include "../../lang/python/application.mk"
.include "../../lang/python/extension.mk"
.include "../../mk/bsd.pkg.mk"
