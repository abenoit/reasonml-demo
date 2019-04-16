type action = 
  | UpdateName(string)
  | StartEdit
  | StopEdit;

type state = {
  name: string, 
  editMode: bool
};

[@react.component]
let make = (~name, ~level, ~avatar: option(string)=?) => {
  let (state, dispatch) = React.useReducer(
    (state, action) => {
      switch action {
      | UpdateName(name) => {...state, name}
      | StartEdit => {...state, editMode:true}
      | StopEdit => {...state, editMode:false}
      };
    },
    {editMode: false, name}
    );

  <div className=Styles.container>
    <Avatar ?avatar />
    <div className=Styles.player>
      {
        state.editMode ?
          <ClickOutside onClickOutside={_ => dispatch(StopEdit)}>
            <input
              className=Styles.editPlayerInfo
              value=state.name
              onChange={
                evt => UpdateName(evt->ReactEvent.Form.target##value) -> dispatch
              }
            />
          </ClickOutside> :
          <span className=Styles.info onClick={_evt => dispatch(StartEdit)}>
            {ReasonReact.string(state.name)}
          </span>
      }
      <span className=Styles.level>
        {ReasonReact.string("Level " ++ level->string_of_int)}
      </span>
    </div>
  </div>
};