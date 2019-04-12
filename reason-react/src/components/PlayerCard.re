module ClickOutside = {
  [@bs.module "react-click-outside"] [@react.component]
  external make:
    (~onClickOutside: ReactEvent.Mouse.t => unit, ~children: React.element) =>
    React.element =
    "default";
};

[@react.component]
let make = (~playerName, ~level) => {
  let (playerName, setPlayerName) = React.useState(() => playerName);
  let (isEditState, setEditableState) = React.useState(() => false);

  <div className=Styles.container>
    <div className=Styles.avatar />
    <div className=Styles.player>
      {
        isEditState ?
          <ClickOutside onClickOutside={_ => setEditableState(_ => false)}>
            <input
              className=Styles.editPlayerInfo
              value=playerName
              onChange={
                evt => setPlayerName(evt->ReactEvent.Form.target##value)
              }
            />
          </ClickOutside> :
          <span
            className=Styles.info onClick={_ => setEditableState(_ => true)}>
            {React.string(playerName)}
          </span>
      }
      <span className=Styles.level>
        {level |> string_of_int |> React.string}
      </span>
    </div>
  </div>;
};