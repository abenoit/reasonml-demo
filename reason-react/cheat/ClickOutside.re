[@bs.module "react-click-outside"] [@react.component]
external make:
  (~onClickOutside: ReactEvent.Mouse.t => unit, ~children: React.element) =>
  React.element =
  "default";