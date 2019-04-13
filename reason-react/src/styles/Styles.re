open Css;

module Colors = {
  let primary = `hex("fe6050");
  let deepblue = `hex("027381");
  let darkgrey = `hex("333");
  let ligthgrey1 = `hex("eff3f5");
};

global("body", [margin(px(0)), fontFamily("Roboto")]);

let app =
  style([
    height(vh(100.)),
    display(`grid),
    gridTemplateRows([pt(50), `repeat((`autoFill, pt(110)))]),
    gridTemplateColumns([`repeat((`num(3), pt(250)))]),
    gridGap(pt(Spacing.medium)),
    backgroundColor(Colors.ligthgrey1),
  ]);

let title =
  style([
    gridColumn(1, 4),
    textAlign(`center),
    alignSelf(`center),
    backgroundColor(Colors.darkgrey),
    color(Colors.primary),
    padding(px(Spacing.medium)),
    margin(px(0)),
  ]);

let avatar =
  style([
    borderRadius(pt(2)),
    height(pt(80)),
    minWidth(pt(80)),
    border(px(1), `solid, Colors.ligthgrey1),
    boxShadow(~blur=pt(5), lightgrey),
    backgroundColor(Colors.ligthgrey1),
  ]);

let card = style([padding(pt(Spacing.medium))]);

let cardList = style([display(`flex), flexWrap(`wrap)]);

let container =
  style([
    display(`flex),
    alignItems(`flexStart),
    padding(pt(Spacing.large)),
    borderRadius(pt(5)),
    backgroundColor(white),
    /* boxShadow(~blur=pt(20), lightgrey), */
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

let editPlayerInfo = style([fontSize(em(1.4)), width(pt(100))]);