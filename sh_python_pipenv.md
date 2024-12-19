# Managing a Python project's dependencies and virtualenv using pipenv

Initializing `Pipfile` and `Pipfile.lock` OR installing all packages from the existing `Pipfile`:

```sh
pipenv install
```

This command re-locks the lockfile.

Installing a package:

```sh
pipenv install numpy
```

Installing a development environment package:

```sh
pipenv install pytest --dev
```

Uninstalling a package:

```sh
pipenv uninstall numpy
```

Uninstalling all packages:

```sh
pipenv uninstall --all
```

Uninstalling all development environment packages:

```sh
pipenv uninstall --all-dev
```

Installing and using a specific Python version:

```sh
pipenv install --python 3.12
```

Using a specific Python version:

```sh
pipenv --python 3.12
```

Generating `Pipfile.lock` from `Pipfile`:

```sh
pipenv lock
```

Installing all packages from `Pipfile.lock`:

```sh
pipenv sync
# or
pipenv install --ignore-pipfile --deploy
```

This command does not re-lock the lockfile.

Installing all packages from `Pipfile.lock`:

```sh
pipenv install --ignore-pipfile
```

This command re-locks the lockfile.

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
pipenv graph | $PAGER
```

Viewing the virtualenv directory location path:

```sh
pipenv --venv
```

Viewing the project directory location path:

```sh
pipenv --where
```

Opening an installed package in the text editor:

```sh
pipenv open numpy
```

Running the virtualenv shell:

```sh
pipenv shell
```

Exiting the virtualenv shell:

```sh
exit
```

Running a command in the virtualenv shell:

```sh
pipenv run jupyter-lab
```

## Resources

-   [Pipenv: Python Dev Workflow for Humans — pipenv documentation](https://pipenv.pypa.io/en/latest/)
