# DistributedTodoList
> Distributed Todo List Written in C++ (?)

> WIP


## Build
`DistributedTodoList` is using [vcpkg](https://github.com/Microsoft/vcpkg) to manage libraries. 
To configure, vcpkg submodule should be cloned in project root.

```bash
git submodule update --init
```

Install `vcpkg` with [getting started guide](https://github.com/microsoft/vcpkg#getting-started)
For mac, you can install `vcpkg` by below command
```bash
./vcpkg/bootstrap-vcpkg.sh
```

Install dependencies
```bash
./vcpkg/vcpkg install --feature-flags=manifests
```