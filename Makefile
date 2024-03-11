
build:
	rm -rf site
	mkdir -p site
	cp -r courseware-adoc/images site
	asciidoctor -a source-highlighter=pygments -a stylesdir=`pwd`/courseware-adoc -a stylesheet=theme.css -D site courseware-adoc/index.adoc