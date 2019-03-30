open Css;

module Colors = {
  let primary = `hex("fe6050");
  let deepblue = `hex("027381");
  let darkgrey = `hex("333");
};

global("body", [margin(px(0)), fontFamily("Roboto")]);

let title =
  style([
    textAlign(`center),
    backgroundColor(Colors.darkgrey),
    color(Colors.primary),
    padding(px(Spacing.medium)),
    margin(px(0)),
    marginBottom(pt(Spacing.medium)),
  ]);

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