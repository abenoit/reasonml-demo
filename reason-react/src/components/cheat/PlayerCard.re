let component = ReasonReact.statelessComponent(__MODULE__);

let make = (~playerName: string, _children) => {
  ...component,
  render: _self =>
    <div className=Styles.container>
      <div className=Styles.avatar />
      <div className=Styles.playerInfo>
        {ReasonReact.string(playerName)}
      </div>
    </div>,
};