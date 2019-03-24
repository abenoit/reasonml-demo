let component = ReasonReact.statelessComponent(__MODULE__);

module Styles = {
  open Css;

  let card = style([paddingBottom(pt(Spacing.medium))]);
};

let make = (~players: array(Players.player), _children) => {
  ...component,
  render: _self =>
    <div>
      {
        players
        |> Array.map((player: Players.player) =>
             <div className=Styles.card key={player.name}>
               <PlayerCardEditable playerName={player.name} />
             </div>
           )
        |> ReasonReact.array
      }
    </div>,
};