let component = ReasonReact.statelessComponent(__MODULE__);

/* let getAvatar =
   fun
   | Some(url) => url
   | None => "./../assets/images/avatar-default.png"; */

let make = (~playerName, ~avatar, ~level, _children) => {
  ...component,
  render: _self =>
    <div className=Styles.container>
      <div className=Styles.avatar>
        {
          let url =
            switch (avatar) {
            | Some(url) => url
            | None => "./../assets/images/avatar-default.png"
            };
          <img src=url height="100%" />;
        }
        ReasonReact.null
      </div>
      <div className=Styles.player>
        <span className=Styles.info> {ReasonReact.string(playerName)} </span>
        <span className=Styles.level>
          {"Level " ++ (level |> string_of_int) |> ReasonReact.string}
        </span>
      </div>
    </div>,
};