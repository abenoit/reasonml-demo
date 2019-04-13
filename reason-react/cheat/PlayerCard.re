[@react.component]
let make = (~name, ~level, ~avatar: option(string)=?) => {
  let (editMode, setEditMode) = React.useState(() => false);
  let (playerName, setPlayerName) = React.useState(() => name);

  <div className=Styles.container>
    <div className=Styles.avatar>
      {
        let avatarUrl =
          switch (avatar) {
          | None => "./../assets/images/avatar-default.png"
          | Some(url) => url
          };
        <img src=avatarUrl height="100%" />;
      }
    </div>
    <div className=Styles.player>
      {
        editMode ?
          <ClickOutside onClickOutside={_ => setEditMode(_ => false)}>
            <input
              className=Styles.editPlayerInfo
              value=playerName
              onChange={
                evt => setPlayerName(evt->ReactEvent.Form.target##value)
              }
            />
          </ClickOutside> :
          <span className=Styles.info onClick={_evt => setEditMode(_ => true)}>
            {ReasonReact.string(playerName)}
          </span>
      }
      <span className=Styles.level>
        {ReasonReact.string("Level " ++ level->string_of_int)}
      </span>
    </div>
  </div>;
};