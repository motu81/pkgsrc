# $NetBSD: Makefile,v 1.2 2014/05/29 23:36:15 wiz Exp $

DISTNAME=		Return-MultiLevel-0.03
PKGNAME=		p5-${DISTNAME}
PKGREVISION=		1
CATEGORIES=		devel perl5
MASTER_SITES=		${MASTER_SITE_PERL_CPAN:=../by-authors/id/M/MA/MAUKE/}

MAINTAINER=		wen@NetBSD.org
HOMEPAGE=		http://search.cpan.org/dist/Return-MulitiLevel/
COMMENT=		Perl module to enable returning from a nested call stack
LICENSE=		${PERL5_LICENSE}

USE_LANGUAGES=		# empty
PERL5_PACKLIST=		auto/Return/MultiLevel/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
