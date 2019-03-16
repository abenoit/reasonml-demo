let component = ReasonReact.statelessComponent(__MODULE__);

let make = (~title, _children) => {
  ...component,
  render: _self => <h1> {ReasonReact.string(title)} </h1>,
};