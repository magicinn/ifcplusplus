
PublicHeaders = SoProfilerStats.h
PrivateHeaders =
ObsoleteHeaders =

##$ BEGIN TEMPLATE Make-Include-Common(profilernodes, annex/Profiler/nodes)
# **************************************************************************
# This template depends on the following variables having been set up before
# its invokation.
#
# PublicHeaders    - header files that should be installed
# PrivateHeaders   - source files that should be distributed, but not
#                    installed - including source-included source files.
# ObsoletedHeaders - header files that should be removed upon installation

# Everything below is autogenerated from a macro, so don't modify
# within the Makefile.am itself. 19991201 mortene.

EXTRA_DIST = $(PrivateHeaders)

if MAC_FRAMEWORK
libprofilernodesincdir = $(MAC_FRAMEWORK_PREFIX)/$(MAC_FRAMEWORK_NAME).framework/Versions/$(MAC_FRAMEWORK_VERSION)/Headers/annex/Profiler/nodes
# hack to change libdir value when installing Mac OS X compiler framework
lib@nop@dir = $(MAC_FRAMEWORK_PREFIX)/$(MAC_FRAMEWORK_NAME).framework/Versions/$(MAC_FRAMEWORK_VERSION)/Libraries
else
libprofilernodesincdir = $(includedir)/Inventor/annex/Profiler/nodes
endif
libprofilernodesinc_HEADERS = $(PublicHeaders)

install-libprofilernodesincHEADERS: $(libprofilernodesinc_HEADERS)
	@$(NORMAL_INSTALL)
	@if test x"$(libprofilernodesinc_HEADERS)" = x""; then :; else \
	  echo " $(mkinstalldirs) $(DESTDIR)$(libprofilernodesincdir)"; \
	  $(mkinstalldirs) $(DESTDIR)$(libprofilernodesincdir); \
	fi
	@list='$(libprofilernodesinc_HEADERS)'; for p in $$list; do \
	  if test -f "$$p"; then d=; else d="$(srcdir)/"; fi; \
	  f="`echo $$p | sed -e 's|^.*/||'`"; \
	  src="$$d$$p"; dst="$(DESTDIR)$(libprofilernodesincdir)/$$f"; \
	  if cmp -s "$$src" "$$dst"; then :; else \
	    echo " $(INSTALL_HEADER) $$src $$dst"; \
	    $(INSTALL_HEADER) "$$src" "$$dst" || exit 1; \
	  fi \
	done
	@list='$(ObsoletedHeaders)'; for f in $$list; do \
	  file="$(DESTDIR)$(libprofilernodesincdir)/$$f"; \
	  if test -x "$$file"; then \
	    echo " rm -f $$file"; \
	    rm -f "$$file"; \
	  fi \
	done; \
	:

##$ END TEMPLATE Make-Include-Common
