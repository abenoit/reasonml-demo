[@bs.module "react-click-outside"]
external clickOutside: ReasonReact.reactClass = "default";

[@bs.deriving abstract]
type jsProps = {
  className: option(string),
  onClickOutside: ReactEvent.Mouse.t => unit,
};

let make = (~className=?, ~onClickOutside, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=clickOutside,
    ~props=jsProps(~className, ~onClickOutside),
    children,
  );