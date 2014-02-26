Salome installation on CRESCO
=============================

* add `sat` directory to `PATH`

```bash
export PATH=/afs/enea.it/project/fissicu/soft/sat/salomeTools:$PATH
```

* add autocompletion

```bash
source /afs/enea.it/project/fissicu/soft/sat/salomeTools/complete_sat.sh
```

* copy product configuration file

```bash
cp data/Products/SALOME_6_6_0.pyconf ~/.salomeTools/Products/
```

* check product list

```bash
sat config --list
```

* edit `salomeTools.pyconf`
	* set `workDir` to `/afs/enea.it/project/fissicu/soft/sat_install`
	* override editor
    * override salome module path
    * override prerequisite location
    * override prerequisite archive location

```python
__overwrite__:
[
  {
    'TOOLS.common.editor' : 'vim'
    'TOOLS.prepare.archive_dir' : '/afs/enea.it/project/fissicu/soft/sat/ARCHIVES'
    'TOOLS.prerequisite.prereq_root_dir' : '/afs/enea.it/project/fissicu/soft/sat/PREREQUISITE'
    'TOOLS.prerequisite.archive_dir' : '/afs/enea.it/project/fissicu/soft/sat/PREREQUISITES/SOURCES'
  }
]
```
