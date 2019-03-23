let component = ReasonReact.statelessComponent(__MODULE__);

module Styles = {
  open ReactDOMRe.Style;

  let card = make(~paddingBottom=Spacing.medium, ());
};

let make = (~players: array(Players.player), _children) => {
  ...component,
  render: _self =>
    <div>
      {
        players
        |> Array.map((player: Players.player) =>
             <div style=Styles.card>
               <PlayerCard playerName={player.name} />
             </div>
           )
        |> ReasonReact.array
      }
    </div>,
};