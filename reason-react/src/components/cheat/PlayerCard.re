let component = ReasonReact.statelessComponent(__MODULE__);

module Styles = {
  open Css;

  let avatar =
    style([
      height(pt(100)),
      width(pt(100)),
      border(px(1), `solid, red),
      boxShadow(~blur=pt(5), lightgrey),
    ]);

  let container =
    style([
      display(`flex),
      height(pt(200)),
      width(pt(500)),
      padding(pt(Spacing.large)),
      borderRadius(pt(10)),
      boxShadow(~blur=pt(20), lightgrey),
    ]);
  let playerInfo =
    style([fontSize(em(1.5)), paddingLeft(pt(Spacing.medium))]);
};

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