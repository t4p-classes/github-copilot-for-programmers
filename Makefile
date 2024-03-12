
build:
	rm -rf site
	mkdir -p site
	cp -r courseware-adoc/images site
	asciidoctor -a source-highlighter=pygments \
		-a pygments-style=monokai \
		-a stylesdir=`pwd`/courseware-adoc \
		-a stylesheet=dark-theme.css \
		-D site \
		courseware-adoc/index.adoc