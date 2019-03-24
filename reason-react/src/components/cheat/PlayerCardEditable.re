type state = {
  isEditState: bool,
  playerName: string,
};

type action =
  | StartEdit
  | UpdateName(string)
  | EndEdit;

let component = ReasonReact.reducerComponent(__MODULE__);

let make = (~playerName: string, _children) => {
  ...component,
  initialState: () => {isEditState: false, playerName},
  reducer: (action, state) =>
    switch (action) {
    | StartEdit => ReasonReact.Update({...state, isEditState: true})
    | UpdateName(newName) =>
      ReasonReact.Update({...state, playerName: newName})
    | EndEdit => ReasonReact.Update({...state, isEditState: false})
    },
  render: self =>
    <div className=Styles.container>
      <div className=Styles.avatar />
      {
        self.state.isEditState ?
          <ClickOutside onClickOutside={_ => self.send(EndEdit)}>
            <input
              className=Styles.editPlayerInfo
              value={self.state.playerName}
              onChange={
                evt =>
                  self.send(UpdateName(evt->ReactEvent.Form.target##value))
              }
            />
          </ClickOutside> :
          <div
            className=Styles.playerInfo onClick={_ => self.send(StartEdit)}>
            {ReasonReact.string(self.state.playerName)}
          </div>
      }
    </div>,
};