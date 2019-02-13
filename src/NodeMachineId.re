[@bs.module "node-machine-id"]
external machineId: unit => Js.Promise.t(string) = "machineId";

[@bs.module "node-machine-id"]
external machineIdSync: unit => string = "machineIdSync";