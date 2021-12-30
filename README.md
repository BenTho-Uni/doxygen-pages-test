# doxygen-pages-test
## Automatically build and deploy Doxygen to github pages after main push

| **Code** | [![][github-img]][github-url]  [![][license-img]][license-url]|
| :----- | :----- |
| **Documentation** | [![][docs-img]][docs-url] |

[docs-img]: https://img.shields.io/badge/docs-latest-blue?style=flat-square
[docs-url]: https://bentho-uni.github.io/doxygen-pages-test/
[github-img]: https://img.shields.io/badge/GitHub-source-brightgreen?style=flat-square
[github-url]: https://github.com/BenTho-Uni/doxygen-pages-test
[license-img]: https://img.shields.io/github/license/BenTho-Uni/libqqc?style=flat-square
[license-url]: https://github.com/BenTho-Uni/doxygen-pages-test/blob/main/LICENSE

Test repository for deploying C++ doxygen to github pages.

The workflow file checks out the rep, builds doxygen and then pushes the
docs/html folder to the gh-pages branch, which gets deployed.

The documentation is available under:
https://bentho-uni.github.io/doxygen-pages-test/index.html

## Setup

Doxygen needed

```
sudo apt install doxygen
```

Make `docs` folder, change to it and create Doxyfile

```
mkdir docs
cd docs
doxygen -g
```

Change Doxyfile to your liking (esp, PROJECT_NAME, INPUT, RECURSIVE,  OUTPUT), 
document code, run doxygen

```
doxygen Doxyfile
```

Check if documentation works, e.g.

```
firefox html/index.html
```

In `.github/workflows/main.yml` change branch from which to build

```
on:
  push:
    branches: [ main ]
  pull_request:
    branches: [ main ]
```

and folder where Doxyfile and doxygen work directory are located. 

```
        # Path to Doxyfile
        doxyfile-path: "./Doxyfile" # default is ./Doxyfile
        # Working directory
        working-directory: "./docs/" # default is .
```

Change where the html files are located

```
      publish_dir: ./docs/html
```

Commit, go to Actions tab on GitHub, see if workflow successfully builds 
doxygen and deploys to gh-pages branch. 

If so, go to GitHub repo 
settings, Pages, Source -> gh-pages, /root, click save. 

Go to Actions tab, wait till page is build. If successfull, you should be able
to see it under https://your_user_name.github.io/your_repo_name/

# Header 2
## SubHeader 1
### SubSubheader 1

# Header 3

# Credits
The [Doxygen](https://www.doxygen.nl/index.html) documentation uses the [doxygen-awesome](https://jothepro.github.io/doxygen-awesome-css/index.html) theme.

Badges by [Shields.io](https://shields.io).
