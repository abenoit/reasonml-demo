let component = ReasonReact.statelessComponent(__MODULE__);

let make = (~title, _children) => {
  ...component,
  render: _self =>
    <div>
      <h1 className=Styles.title> {ReasonReact.string(title)} </h1>
      <PlayerCards players=Players.players />
    </div>,
};