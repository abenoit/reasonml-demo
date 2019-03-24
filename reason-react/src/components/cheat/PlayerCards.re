let component = ReasonReact.statelessComponent(__MODULE__);

let make = (~players: array(Players.player), _children) => {
  ...component,
  render: _self =>
    <div className=Styles.cardList>
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