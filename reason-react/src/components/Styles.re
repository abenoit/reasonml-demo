open Css;

module Colors = {
  let primary = `hex("ff322d");
  let deepblue = `hex("027381");
};

global("body", [fontFamily("Roboto")]);

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

let player =
  style([
    display(`flex),
    marginLeft(pt(Spacing.medium)),
    flexDirection(`column),
  ]);

let info =
  style([
    color(Colors.deepblue),
    fontSize(em(1.5)),
    hover([cursor(`pointer)]),
  ]);

let level =
  style([
    textAlign(`left),
    color(Colors.primary),
    fontSize(em(0.85)),
    marginTop(pt(Spacing.small)),
  ]);

let editPlayerInfo =
  style([fontSize(em(1.4)), marginLeft(pt(Spacing.medium))]);