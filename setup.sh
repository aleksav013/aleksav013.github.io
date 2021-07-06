#!/bin/sh

# Update index pages for LaTeX documents
find src/latex/public -name "index.md" -delete
bin/indexer "src/latex/public"

# Update rss feed and generate static site
bin/rssg rss/index.md "Aleksa Vuckovic" > src/rss.xml
bin/ssg6 src docs "Aleksa Vuckovic" "https://aleksa.cf" >> /dev/null
