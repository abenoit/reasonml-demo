type url = string;

type player = {
  avatar: option(string),
  level: int,
  name: string,
};

let players: array(player) = [|
  {name: "Sushiii", level: 10, avatar: Some("../assets/images/pinkie.png")},
  {name: "--TAG--", level: 22, avatar: None},
|];