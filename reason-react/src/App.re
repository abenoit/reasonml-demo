[@react.component]
let make = (~title) =>
  <div className=Styles.app>
    <h1 className=Styles.title> {React.string(title)} </h1>
    <PlayerCard playerName="Sushiii" level=10 />
  </div>;