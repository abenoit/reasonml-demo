[@react.component]
let make = (~title) =>
  <div className=Styles.app>
    <h1 className=Styles.title> {React.string(title)} </h1>
    <PlayerCard
      name="Sushiii"
      level=100
      avatar="./../assets/images/sushiii.png"
    />
    <PlayerCard name="TAG" level=40 />
  </div>;