# $NetBSD: Makefile,v 1.14 2014/05/29 23:36:14 wiz Exp $

DISTNAME=	Regexp-Shellish-0.93
PKGNAME=	p5-${DISTNAME}
PKGREVISION=	8
CATEGORIES=	devel perl5
MASTER_SITES=	http://search.cpan.org/CPAN/authors/id/R/RB/RBS/

MAINTAINER=	pkgsrc-users@NetBSD.org
COMMENT=	Perl module for shell-like regular expressions

PKG_INSTALLATION_TYPES=	overwrite pkgviews

PERL5_PACKLIST=		auto/Regexp/Shellish/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
