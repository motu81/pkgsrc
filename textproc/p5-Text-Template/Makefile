# $NetBSD: Makefile,v 1.30 2014/05/29 23:37:44 wiz Exp $
#

DISTNAME=	Text-Template-1.46
PKGNAME=	p5-${DISTNAME}
PKGREVISION=	1
SVR4_PKGNAME=	p5tte
CATEGORIES=	textproc perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=Text/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/Text-Template/
COMMENT=	Perl5 library for generating form letters
LICENSE=	artistic AND gnu-gpl-v2

PERL5_PACKLIST=		auto/Text/Template/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
