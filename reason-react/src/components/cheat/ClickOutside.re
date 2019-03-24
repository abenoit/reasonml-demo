[@bs.module "react-click-outside"]
external clickOutside: ReasonReact.reactClass = "default";

[@bs.deriving abstract]
type jsProps = {onClickOutside: ReactEvent.Mouse.t => unit};

let make = (~onClickOutside, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=clickOutside,
    ~props=jsProps(~onClickOutside),
    children,
  );