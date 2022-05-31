# txt-wiz-cli

## Table of Contents

- txt_wiz_cli
  - [str.hpp](./include/str.hpp)
  - [str.cpp](./src/str.cpp)
    - [capitalize](#capitalize)
      - [capitalize.hpp](./include/capitalize.hpp)
      - [capitalize.cpp](./src/capitalize.cpp)
    - [reverse](#reverse)
      - [reverse.hpp](./include/reverse.hpp)
      - [reverse.cpp](./src/reverse.cpp)
    - [replace](#replace)
      - [replace.hpp](./include/replace.hpp)
      - [replace.cpp](./src/replace.cpp)
    - [split](#split)
      - [split.hpp](./include/split.hpp)
      - [split.cpp](./src/split.cpp)
    - [evaluate](#evaluate)
      - [evaluate.hpp](./include/evaluate.hpp)
      - [evaluate.cpp](./src/evaluate.cpp)
    - [find](#find)
      - [find.hpp](./include/find.hpp)
      - [find.cpp](./src/find.cpp)
  - [txt.hpp](./include/txt.hpp)
  - [txt.cpp](./src/txt.cpp)
    - indent
      - [indent.hpp](./include/indent.hpp)
      - [indent.cpp](./src/indent.cpp)
    - txtwrap
      - [txtwrap.hpp](./include/txtwrap.hpp)
      - [txtwrap.cpp](./src/txtwrap.cpp)
    - diff
      - [diff.hpp](./include/diff.hpp)
      - [diff.cpp](./src/diff.cpp)
    - slide-show
      - [slide-show.hpp](./include/slide_show.hpp)
      - [slide-show.cpp](./src/slide_show.cpp)
 
 
 ## Usage
 
 ### capitalize
 `./txt_wiz_cli str capitalize <string>`
 
  input : `./txt_wiz_cli str capitalize "mini project"`
  
  output : `Mini Project`
  
  
 ### reverse
 `./txt_wiz_cli str reverse <string>`
 
  input : `./txt_wiz_cli str reverse "mini project"`
  
  output : `tcejorp inim`
  
  
 ### replace
 `./txt_wiz_cli str reverse <old> <new> <string>`
 
  input : `./txt_wiz_cli str reverse "mini" "nini" "mini project"`
  
  output : `nini project`
  
  
 ### split
 `./txt_wiz_cli str split <string> <delimiter>`
 
  input : ` ./txt-wiz-cli str split "advanced-programming-mini-project" "-"`
  
  output : `{advanced, programming, mini, project}`
  
  
 ### evaluate
 `./txt_wiz_cli str evaluate <number-string> <base>`
 
  input : ` ./txt-wiz-cli str evaluate "A2" 16`
  
  output : `162`
  
  
 ### find
 `./txt_wiz_cli str find <match> <string>`
 
  input : `./txt-wiz-cli str find "mi--" "mini Project"`
  
  output : `mini`
  
  
  
