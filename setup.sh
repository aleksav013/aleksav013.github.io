#!/bin/sh

# Update index pages for LaTeX documents
## find src/latex/public -name "index.md" -delete
## bin/indexer "src/latex/public"
# Currently not needed, uncomment previous 2 lines when changing LaTeX filesystem

# Update rss feed and generate static site
rm docs/.files
bin/rssg src/rss.md "Aleksa Vuckovic" > src/rss.xml
bin/ssg6 src docs "Aleksa Vuckovic" "https://aleksa.cf" >> /dev/null
