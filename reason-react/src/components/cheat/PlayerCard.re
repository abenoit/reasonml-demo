let component = ReasonReact.statelessComponent(__MODULE__);

module Styles = {
  open ReactDOMRe.Style;

  let avatar =
    make(~height="100px", ~width="100px", ~border="1px solid lightgrey", ());

  let container =
    make(
      ~display="flex",
      ~height="200px",
      ~width="500px",
      ~padding=Spacing.large,
      ~borderRadius="10pt",
      ~boxShadow=" 0px 0 20px lightgrey",
      ~fontFamily="Roboto",
      (),
    );

  let playerInfo = make(~paddingLeft=Spacing.medium, ());
};

let make = (~playerName: string, _children) => {
  ...component,
  render: _self =>
    <div style=Styles.container>
      <div style=Styles.avatar />
      <div style=Styles.playerInfo> {ReasonReact.string(playerName)} </div>
    </div>,
};