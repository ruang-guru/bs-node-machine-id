# bs-node-machine-id

Binding of [node-machine-id](https://github.com/automation-stack/node-machine-id), Cross-platform unique machine (desktop) id discovery.

## Usage

### Async

```ocaml
open Js.Promise;

NodeMachineId.machineId()
  |> then(id => id)

/*
  id will return string containing your unique machine, for example, c24b0fe51856497eebb6a2bfcd120247aac0d6334d670bb92e09a00ce8169365
*/

```

### Sync

```ocaml
let id = NodeMachineId.machineIdSync();

/*
id =        c24b0fe51856497eebb6a2bfcd120247aac0d6334d670bb92e09a00ce8169365
*/
```

## Installation

### Use yarn or npm

```shell
$ yarn add bs-node-machine-id
```

### Then update your bsconfig.json

```json
{
  "bs-dependencies": ["bs-node-machine-id"]
}
```
