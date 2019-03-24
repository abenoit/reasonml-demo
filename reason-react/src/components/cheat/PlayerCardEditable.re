type state = {
  isEditState: bool,
  playerName: string,
};

type action =
  | StartEdit
  | UpdateName(string)
  | EndEdit;

let component = ReasonReact.reducerComponent(__MODULE__);

module Styles = {
  open Css;

  let avatar =
  style([
      height(pt(100)),
      width(pt(100)),
      border(px(1), `solid, red),
      boxShadow(~blur=pt(5),  lightgrey)
    ]);

    let container =  style([
      display(`flex),
      height(pt(200)),
      width(pt(500)),
      padding(pt(Spacing.large)),
      borderRadius(pt(10)),
      boxShadow(~blur=pt(20), lightgrey),
    ]);

  let playerInfo = style([
  fontSize(em(1.5)),
  paddingLeft(pt(Spacing.medium)),
  hover([cursor(`pointer)])]);

};

let make = (~playerName: string, _children) => {
  ...component,
  initialState: () => {isEditState: false, playerName},
  reducer: (action, state) =>
    switch (action) {
    | StartEdit => ReasonReact.Update({...state, isEditState: true})
    | UpdateName(newName) => ReasonReact.Update({...state, playerName: newName})
    | EndEdit => ReasonReact.Update({...state, isEditState: false})
    },
  render: self =>
    <div className=Styles.container>
      <div className=Styles.avatar/>
      {
        self.state.isEditState ?
          <div> <input value=self.state.playerName onChange={evt => self.send(UpdateName(evt -> ReactEvent.Form.target##value))}/> </div> :
          <div className=Styles.playerInfo onClick={_ => self.send(StartEdit)}>
            {ReasonReact.string(self.state.playerName)}
          </div>
      }
    </div>,
};