```sh
text=\
"LOREM IPSUM-DOLOR SIT AMET QUI MINIM
labore adipisicing-minim sint cillum sint cupidatat
voluptate dolor-minim nulla est proident nostrud
officia pariatur-ut officia sit irure elit
esse ea-nulla sunt ex occaecat reprehenderit
excepteur duis-sunt velit enim voluptate laboris"
```

```sh
echo $text | column
```

```
LOREM IPSUM-DOLOR SIT AMET QUI MINIM                    officia pariatur-ut officia sit irure elit
labore adipisicing-minim sint cillum sint cupidatat     esse ea-nulla sunt ex occaecat reprehenderit
voluptate dolor-minim nulla est proident nostrud        excepteur duis-sunt velit enim voluptate laboris
```

```sh
echo $text | column -t
```

```
LOREM      IPSUM-DOLOR        SIT      AMET    QUI        MINIM
labore     adipisicing-minim  sint     cillum  sint       cupidatat
voluptate  dolor-minim        nulla    est     proident   nostrud
officia    pariatur-ut        officia  sit     irure      elit
esse       ea-nulla           sunt     ex      occaecat   reprehenderit
excepteur  duis-sunt          velit    enim    voluptate  laboris
```
