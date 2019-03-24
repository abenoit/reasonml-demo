let component = ReasonReact.statelessComponent(__MODULE__);

let make = (~players: array(Players.player), _children) => {
  ...component,
  render: _self =>
    <div className=Styles.cardList>
      {
        players
        |> Array.map((player: Players.player) =>
             <div className=Styles.card key={player.name}>
               <PlayerCard
                 playerName={player.name}
                 avatar={player.avatar}
                 level={player.level}
               />
             </div>
           )
        |> ReasonReact.array
      }
    </div>,
};