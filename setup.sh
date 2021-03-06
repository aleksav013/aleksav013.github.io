#!/bin/sh

# Update index pages for LaTeX documents
find src/other/latex/public -name "index.md" -delete
bin/indexer "src/other/latex/public"
# Currently not needed, uncomment previous 2 lines when changing LaTeX filesystem

# Update rss feed and generate static site
cd rss/ || exit
for i in *; do
    lowdown "$i" > "${i%.*}.html"
done
cd ..

rm docs/.files
bin/rssg rss.md "Aleksa Vuckovic" > src/rss.xml
cp -rf rss/*.html docs/rss/
bin/ssg6 src docs "Aleksa Vuckovic" "https://aleksa.cf" >> /dev/null
