let component = ReasonReact.statelessComponent(__MODULE__);

let make = (~title, _children) => {
  ...component,
  render: _self =>
    <div className=Styles.title>
      <h1> {ReasonReact.string(title)} </h1>
      <PlayerCards players=Players.players />
    </div>,
};