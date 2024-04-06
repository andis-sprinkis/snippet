# Managing a Python project's dependencies and virtualenv using pipenv

Installing a package:

```sh
pipenv install numpy
```

Uninstalling a package:

```sh
pipenv uninstall numpy
```

Installing a specific Python version:

```sh
pipenv install --python 3.6
```

Installing all packages from `Pipfile`:

```sh
pipenv install
```

Installing all packages from `Pipfile.lock`:

```sh
pipenv lock
```

Generating `Pipfile.lock` from `Pipfile`:

```sh
pipenv sync
```

Generating `Pipfile.lock` from `Pipfile`, then installing all packages from `Pipfile.lock`:

```sh
pipenv update
```

Verifying that `Pipfile.lock` is aligned with `Pipfile`:

```sh
pipenv verify
```

Viewing the `Pipfile` / `Pipfile.lock` / installed dependency graph:

```sh
pipenv graph
```

Running the virtualenv shell:

```sh
pipenv shell
```

Running a command in the virtualenv shell:

```sh
pipenv run jupyter-lab
```

## Resources

-   [Pipenv: Python Dev Workflow for Humans — pipenv documentation](https://pipenv.pypa.io/en/latest/)
