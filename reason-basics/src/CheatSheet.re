/*
 Variables declaration
 */
let units = 10;
let addUnits = (currentCount, gainedUnits) => currentCount + gainedUnits;
let name = "Amelie";
let isWon = false;
let nameAndUnits = ("Amelie", 100);
/* let nameAndUnits = (name, units); */

type player = {
  name: string,
  units: int,
};

let amelie = {name: "Amelie", units: 1000};

/* Alias */
let name = string;

/*
 Block Variable
 */
let block = {
  let a = 1.0;
  let b = 2.5;

  a +. b;
};

/* Js.log2("Cannot access", a); */
/* Js.log2("Block result", block); */

/*
 Option
 */
/* let avatarUrl = Some("Some URL"); */
let avatarUrl = None;

let getAvatar =
  switch (avatarUrl) {
  | Some(url) => url
  | None => "Default avatar URL"
  };

/*
 Variant + pattern matching
 */
type rarities =
  | Common
  | Legendary
  | Epic;

let rewardRarity = Common;

let getRewardRarity =
  switch (rewardRarity) {
  | Common => "Common :|"
  | Legendary => "Legendary"
  | Epic => "WOW AMAZING"
  };

let playersList2 = ["Sushiii", "Chicky"];
let allPlayers = ["Enzo", "TAG", ...playersList2];

Js.log(units);
Js.log(name);
Js.log(isWon);
Js.log(nameAndUnits);
Js.log(amelie);
Js.log(getAvatar);
Js.log(getRewardRarity);