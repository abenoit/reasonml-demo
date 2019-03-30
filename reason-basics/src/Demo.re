let name = "Amélie";

let addUnits = (currentCount, gainedUnites) => currentCount + gainedUnites;

let addUnits2 = addUnits(10);

type player = {
  name: string,
  units: int,
};

let amelie = {name: "Amelie", units: 10000};

let block = {
  let a = 1;

  a;
};

let avatarUrl = Some("Une url d'avatar");
let getAvatar =
  switch (avatarUrl) {
  | None => "Default URL"
  | Some(url) => url
  };

type rarities =
  | Common
  | Legendary
  | Epic;

let rewardRarity = Common;

let lqlq =
  switch (rewardRarity) {
  | Common => "Common"
  | _ => "Lala"
  };

Js.log(lqlq);