open Css;

let title = style([textAlign(`center)]);

let avatar =
  style([
    height(pt(80)),
    width(pt(80)),
    border(px(1), `solid, lightgrey),
    boxShadow(~blur=pt(5), lightgrey),
  ]);

let card = style([padding(pt(Spacing.medium))]);

let cardList = style([display(`flex), flexWrap(`wrap)]);

let container =
  style([
    display(`flex),
    alignItems(`flexStart),
    height(pt(80)),
    width(pt(300)),
    padding(pt(Spacing.large)),
    borderRadius(pt(10)),
    boxShadow(~blur=pt(20), lightgrey),
  ]);

let playerInfo =
  style([
    fontSize(em(1.5)),
    marginLeft(pt(Spacing.medium)),
    hover([cursor(`pointer)]),
  ]);

let editPlayerInfo =
  style([fontSize(em(1.4)), marginLeft(pt(Spacing.medium))]);