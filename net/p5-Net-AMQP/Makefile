# $NetBSD: Makefile,v 1.2 2014/05/29 23:37:06 wiz Exp $

DISTNAME=	Net-AMQP-0.06
PKGNAME=	p5-${DISTNAME}
PKGREVISION=	1
CATEGORIES=	net
MASTER_SITES=	http://search.cpan.org/CPAN/authors/id/C/CH/CHIPS/

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/CPAN/authors/id/C/CH/CHIPS/
COMMENT=	Advanced Message Queue Protocol (de)serialization and representation
LICENSE=	${PERL5_LICENSE}

DEPENDS+=	p5-XML-LibXML>=2:../../textproc/p5-XML-LibXML
DEPENDS+=	p5-Class-Accessor>=0.34:../../devel/p5-Class-Accessor

PERL5_MODULE_TYPE=	Module::Build
PERL5_PACKLIST=		auto/Net/AMQP/.packlist
USE_LANGUAGES=		# none

.include "../../lang/perl5/module.mk"
.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
