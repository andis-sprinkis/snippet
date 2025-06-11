# The tmux default key bindings

```
$ tmux -V
tmux 3.5a
```

```
$ tmux list-keys
bind-key    -T copy-mode    Escape                 send-keys -X cancel
bind-key    -T copy-mode    Space                  send-keys -X page-down
bind-key    -T copy-mode    ,                      send-keys -X jump-reverse
bind-key    -T copy-mode    \;                     send-keys -X jump-again
bind-key    -T copy-mode    F                      command-prompt -1 -p "(jump backward)" { send-keys -X jump-backward "%%" }
bind-key    -T copy-mode    N                      send-keys -X search-reverse
bind-key    -T copy-mode    P                      send-keys -X toggle-position
bind-key    -T copy-mode    R                      send-keys -X rectangle-toggle
bind-key    -T copy-mode    T                      command-prompt -1 -p "(jump to backward)" { send-keys -X jump-to-backward "%%" }
bind-key    -T copy-mode    X                      send-keys -X set-mark
bind-key    -T copy-mode    f                      command-prompt -1 -p "(jump forward)" { send-keys -X jump-forward "%%" }
bind-key    -T copy-mode    g                      command-prompt -p "(goto line)" { send-keys -X goto-line "%%" }
bind-key    -T copy-mode    n                      send-keys -X search-again
bind-key    -T copy-mode    q                      send-keys -X cancel
bind-key    -T copy-mode    r                      send-keys -X refresh-from-pane
bind-key    -T copy-mode    t                      command-prompt -1 -p "(jump to forward)" { send-keys -X jump-to-forward "%%" }
bind-key    -T copy-mode    MouseDown1Pane         select-pane
bind-key    -T copy-mode    MouseDrag1Pane         select-pane \; send-keys -X begin-selection
bind-key    -T copy-mode    MouseDragEnd1Pane      send-keys -X copy-pipe-and-cancel
bind-key    -T copy-mode    WheelUpPane            select-pane \; send-keys -X -N 5 scroll-up
bind-key    -T copy-mode    WheelDownPane          select-pane \; send-keys -X -N 5 scroll-down
bind-key    -T copy-mode    DoubleClick1Pane       select-pane \; send-keys -X select-word \; run-shell -d 0.3 \; send-keys -X copy-pipe-and-cancel
bind-key    -T copy-mode    TripleClick1Pane       select-pane \; send-keys -X select-line \; run-shell -d 0.3 \; send-keys -X copy-pipe-and-cancel
bind-key    -T copy-mode    Home                   send-keys -X start-of-line
bind-key    -T copy-mode    End                    send-keys -X end-of-line
bind-key    -T copy-mode    NPage                  send-keys -X page-down
bind-key    -T copy-mode    PPage                  send-keys -X page-up
bind-key    -T copy-mode    Up                     send-keys -X cursor-up
bind-key    -T copy-mode    Down                   send-keys -X cursor-down
bind-key    -T copy-mode    Left                   send-keys -X cursor-left
bind-key    -T copy-mode    Right                  send-keys -X cursor-right
bind-key    -T copy-mode    M-1                    command-prompt -N -I 1 -p (repeat) { send-keys -N "%%" }
bind-key    -T copy-mode    M-2                    command-prompt -N -I 2 -p (repeat) { send-keys -N "%%" }
bind-key    -T copy-mode    M-3                    command-prompt -N -I 3 -p (repeat) { send-keys -N "%%" }
bind-key    -T copy-mode    M-4                    command-prompt -N -I 4 -p (repeat) { send-keys -N "%%" }
bind-key    -T copy-mode    M-5                    command-prompt -N -I 5 -p (repeat) { send-keys -N "%%" }
bind-key    -T copy-mode    M-6                    command-prompt -N -I 6 -p (repeat) { send-keys -N "%%" }
bind-key    -T copy-mode    M-7                    command-prompt -N -I 7 -p (repeat) { send-keys -N "%%" }
bind-key    -T copy-mode    M-8                    command-prompt -N -I 8 -p (repeat) { send-keys -N "%%" }
bind-key    -T copy-mode    M-9                    command-prompt -N -I 9 -p (repeat) { send-keys -N "%%" }
bind-key    -T copy-mode    M-<                    send-keys -X history-top
bind-key    -T copy-mode    M->                    send-keys -X history-bottom
bind-key    -T copy-mode    M-R                    send-keys -X top-line
bind-key    -T copy-mode    M-b                    send-keys -X previous-word
bind-key    -T copy-mode    M-f                    send-keys -X next-word-end
bind-key    -T copy-mode    M-m                    send-keys -X back-to-indentation
bind-key    -T copy-mode    M-r                    send-keys -X middle-line
bind-key    -T copy-mode    M-v                    send-keys -X page-up
bind-key    -T copy-mode    M-w                    send-keys -X copy-pipe-and-cancel
bind-key    -T copy-mode    M-x                    send-keys -X jump-to-mark
bind-key    -T copy-mode    "M-{"                  send-keys -X previous-paragraph
bind-key    -T copy-mode    "M-}"                  send-keys -X next-paragraph
bind-key    -T copy-mode    M-Up                   send-keys -X halfpage-up
bind-key    -T copy-mode    M-Down                 send-keys -X halfpage-down
bind-key    -T copy-mode    C-Space                send-keys -X begin-selection
bind-key    -T copy-mode    C-a                    send-keys -X start-of-line
bind-key    -T copy-mode    C-b                    send-keys -X cursor-left
bind-key    -T copy-mode    C-c                    send-keys -X cancel
bind-key    -T copy-mode    C-e                    send-keys -X end-of-line
bind-key    -T copy-mode    C-f                    send-keys -X cursor-right
bind-key    -T copy-mode    C-g                    send-keys -X clear-selection
bind-key    -T copy-mode    C-k                    send-keys -X copy-pipe-end-of-line-and-cancel
bind-key    -T copy-mode    C-n                    send-keys -X cursor-down
bind-key    -T copy-mode    C-p                    send-keys -X cursor-up
bind-key    -T copy-mode    C-r                    command-prompt -i -I "#{pane_search_string}" -T search -p "(search up)" { send-keys -X search-backward-incremental "%%" }
bind-key    -T copy-mode    C-s                    command-prompt -i -I "#{pane_search_string}" -T search -p "(search down)" { send-keys -X search-forward-incremental "%%" }
bind-key    -T copy-mode    C-v                    send-keys -X page-down
bind-key    -T copy-mode    C-w                    send-keys -X copy-pipe-and-cancel
bind-key    -T copy-mode    C-Up                   send-keys -X scroll-up
bind-key    -T copy-mode    C-Down                 send-keys -X scroll-down
bind-key    -T copy-mode    C-M-b                  send-keys -X previous-matching-bracket
bind-key    -T copy-mode    C-M-f                  send-keys -X next-matching-bracket
bind-key    -T copy-mode-vi Enter                  send-keys -X copy-pipe-and-cancel
bind-key    -T copy-mode-vi Escape                 send-keys -X clear-selection
bind-key    -T copy-mode-vi Space                  send-keys -X begin-selection
bind-key    -T copy-mode-vi \#                     send-keys -FX search-backward "#{copy_cursor_word}"
bind-key    -T copy-mode-vi \$                     send-keys -X end-of-line
bind-key    -T copy-mode-vi \%                     send-keys -X next-matching-bracket
bind-key    -T copy-mode-vi *                      send-keys -FX search-forward "#{copy_cursor_word}"
bind-key    -T copy-mode-vi ,                      send-keys -X jump-reverse
bind-key    -T copy-mode-vi /                      command-prompt -T search -p "(search down)" { send-keys -X search-forward "%%" }
bind-key    -T copy-mode-vi 0                      send-keys -X start-of-line
bind-key    -T copy-mode-vi 1                      command-prompt -N -I 1 -p (repeat) { send-keys -N "%%" }
bind-key    -T copy-mode-vi 2                      command-prompt -N -I 2 -p (repeat) { send-keys -N "%%" }
bind-key    -T copy-mode-vi 3                      command-prompt -N -I 3 -p (repeat) { send-keys -N "%%" }
bind-key    -T copy-mode-vi 4                      command-prompt -N -I 4 -p (repeat) { send-keys -N "%%" }
bind-key    -T copy-mode-vi 5                      command-prompt -N -I 5 -p (repeat) { send-keys -N "%%" }
bind-key    -T copy-mode-vi 6                      command-prompt -N -I 6 -p (repeat) { send-keys -N "%%" }
bind-key    -T copy-mode-vi 7                      command-prompt -N -I 7 -p (repeat) { send-keys -N "%%" }
bind-key    -T copy-mode-vi 8                      command-prompt -N -I 8 -p (repeat) { send-keys -N "%%" }
bind-key    -T copy-mode-vi 9                      command-prompt -N -I 9 -p (repeat) { send-keys -N "%%" }
bind-key    -T copy-mode-vi :                      command-prompt -p "(goto line)" { send-keys -X goto-line "%%" }
bind-key    -T copy-mode-vi \;                     send-keys -X jump-again
bind-key    -T copy-mode-vi ?                      command-prompt -T search -p "(search up)" { send-keys -X search-backward "%%" }
bind-key    -T copy-mode-vi A                      send-keys -X append-selection-and-cancel
bind-key    -T copy-mode-vi B                      send-keys -X previous-space
bind-key    -T copy-mode-vi D                      send-keys -X copy-pipe-end-of-line-and-cancel
bind-key    -T copy-mode-vi E                      send-keys -X next-space-end
bind-key    -T copy-mode-vi F                      command-prompt -1 -p "(jump backward)" { send-keys -X jump-backward "%%" }
bind-key    -T copy-mode-vi G                      send-keys -X history-bottom
bind-key    -T copy-mode-vi H                      send-keys -X top-line
bind-key    -T copy-mode-vi J                      send-keys -X scroll-down
bind-key    -T copy-mode-vi K                      send-keys -X scroll-up
bind-key    -T copy-mode-vi L                      send-keys -X bottom-line
bind-key    -T copy-mode-vi M                      send-keys -X middle-line
bind-key    -T copy-mode-vi N                      send-keys -X search-reverse
bind-key    -T copy-mode-vi P                      send-keys -X toggle-position
bind-key    -T copy-mode-vi T                      command-prompt -1 -p "(jump to backward)" { send-keys -X jump-to-backward "%%" }
bind-key    -T copy-mode-vi V                      send-keys -X select-line
bind-key    -T copy-mode-vi W                      send-keys -X next-space
bind-key    -T copy-mode-vi X                      send-keys -X set-mark
bind-key    -T copy-mode-vi ^                      send-keys -X back-to-indentation
bind-key    -T copy-mode-vi b                      send-keys -X previous-word
bind-key    -T copy-mode-vi e                      send-keys -X next-word-end
bind-key    -T copy-mode-vi f                      command-prompt -1 -p "(jump forward)" { send-keys -X jump-forward "%%" }
bind-key    -T copy-mode-vi g                      send-keys -X history-top
bind-key    -T copy-mode-vi h                      send-keys -X cursor-left
bind-key    -T copy-mode-vi j                      send-keys -X cursor-down
bind-key    -T copy-mode-vi k                      send-keys -X cursor-up
bind-key    -T copy-mode-vi l                      send-keys -X cursor-right
bind-key    -T copy-mode-vi n                      send-keys -X search-again
bind-key    -T copy-mode-vi o                      send-keys -X other-end
bind-key    -T copy-mode-vi q                      send-keys -X cancel
bind-key    -T copy-mode-vi r                      send-keys -X refresh-from-pane
bind-key    -T copy-mode-vi t                      command-prompt -1 -p "(jump to forward)" { send-keys -X jump-to-forward "%%" }
bind-key    -T copy-mode-vi v                      send-keys -X rectangle-toggle
bind-key    -T copy-mode-vi w                      send-keys -X next-word
bind-key    -T copy-mode-vi z                      send-keys -X scroll-middle
bind-key    -T copy-mode-vi \{                     send-keys -X previous-paragraph
bind-key    -T copy-mode-vi \}                     send-keys -X next-paragraph
bind-key    -T copy-mode-vi MouseDown1Pane         select-pane
bind-key    -T copy-mode-vi MouseDrag1Pane         select-pane \; send-keys -X begin-selection
bind-key    -T copy-mode-vi MouseDragEnd1Pane      send-keys -X copy-pipe-and-cancel
bind-key    -T copy-mode-vi WheelUpPane            select-pane \; send-keys -X -N 5 scroll-up
bind-key    -T copy-mode-vi WheelDownPane          select-pane \; send-keys -X -N 5 scroll-down
bind-key    -T copy-mode-vi DoubleClick1Pane       select-pane \; send-keys -X select-word \; run-shell -d 0.3 \; send-keys -X copy-pipe-and-cancel
bind-key    -T copy-mode-vi TripleClick1Pane       select-pane \; send-keys -X select-line \; run-shell -d 0.3 \; send-keys -X copy-pipe-and-cancel
bind-key    -T copy-mode-vi BSpace                 send-keys -X cursor-left
bind-key    -T copy-mode-vi Home                   send-keys -X start-of-line
bind-key    -T copy-mode-vi End                    send-keys -X end-of-line
bind-key    -T copy-mode-vi NPage                  send-keys -X page-down
bind-key    -T copy-mode-vi PPage                  send-keys -X page-up
bind-key    -T copy-mode-vi Up                     send-keys -X cursor-up
bind-key    -T copy-mode-vi Down                   send-keys -X cursor-down
bind-key    -T copy-mode-vi Left                   send-keys -X cursor-left
bind-key    -T copy-mode-vi Right                  send-keys -X cursor-right
bind-key    -T copy-mode-vi M-x                    send-keys -X jump-to-mark
bind-key    -T copy-mode-vi C-b                    send-keys -X page-up
bind-key    -T copy-mode-vi C-c                    send-keys -X cancel
bind-key    -T copy-mode-vi C-d                    send-keys -X halfpage-down
bind-key    -T copy-mode-vi C-e                    send-keys -X scroll-down
bind-key    -T copy-mode-vi C-f                    send-keys -X page-down
bind-key    -T copy-mode-vi C-h                    send-keys -X cursor-left
bind-key    -T copy-mode-vi C-j                    send-keys -X copy-pipe-and-cancel
bind-key    -T copy-mode-vi C-u                    send-keys -X halfpage-up
bind-key    -T copy-mode-vi C-v                    send-keys -X rectangle-toggle
bind-key    -T copy-mode-vi C-y                    send-keys -X scroll-up
bind-key    -T copy-mode-vi C-Up                   send-keys -X scroll-up
bind-key    -T copy-mode-vi C-Down                 send-keys -X scroll-down
bind-key    -T prefix       Space                  next-layout
bind-key    -T prefix       !                      break-pane
bind-key    -T prefix       \"                     split-window
bind-key    -T prefix       \#                     list-buffers
bind-key    -T prefix       \$                     command-prompt -I "#S" { rename-session "%%" }
bind-key    -T prefix       \%                     split-window -h
bind-key    -T prefix       &                      confirm-before -p "kill-window #W? (y/n)" kill-window
bind-key    -T prefix       \'                     command-prompt -T window-target -p index { select-window -t ":%%" }
bind-key    -T prefix       (                      switch-client -p
bind-key    -T prefix       )                      switch-client -n
bind-key    -T prefix       ,                      command-prompt -I "#W" { rename-window "%%" }
bind-key    -T prefix       -                      delete-buffer
bind-key    -T prefix       .                      command-prompt -T target { move-window -t "%%" }
bind-key    -T prefix       /                      command-prompt -k -p key { list-keys -1N "%%" }
bind-key    -T prefix       0                      select-window -t :=0
bind-key    -T prefix       1                      select-window -t :=1
bind-key    -T prefix       2                      select-window -t :=2
bind-key    -T prefix       3                      select-window -t :=3
bind-key    -T prefix       4                      select-window -t :=4
bind-key    -T prefix       5                      select-window -t :=5
bind-key    -T prefix       6                      select-window -t :=6
bind-key    -T prefix       7                      select-window -t :=7
bind-key    -T prefix       8                      select-window -t :=8
bind-key    -T prefix       9                      select-window -t :=9
bind-key    -T prefix       :                      command-prompt
bind-key    -T prefix       \;                     last-pane
bind-key    -T prefix       <                      display-menu -T "#[align=centre]#{window_index}:#{window_name}" -x W -y W "#{?#{>:#{session_windows},1},,-}Swap Left" l { swap-window -t :-1 } "#{?#{>:#{session_windows},1},,-}Swap Right" r { swap-window -t :+1 } "#{?pane_marked_set,,-}Swap Marked" s { swap-window } '' Kill X { kill-window } Respawn R { respawn-window -k } "#{?pane_marked,Unmark,Mark}" m { select-pane -m } Rename n { command-prompt -F -I "#W" { rename-window -t "#{window_id}" "%%" } } '' "New After" w { new-window -a } "New At End" W { new-window }
bind-key    -T prefix       =                      choose-buffer -Z
bind-key    -T prefix       >                      display-menu -T "#[align=centre]#{pane_index} (#{pane_id})" -x P -y P "#{?#{m/r:(copy|view)-mode,#{pane_mode}},Go To Top,}" < { send-keys -X history-top } "#{?#{m/r:(copy|view)-mode,#{pane_mode}},Go To Bottom,}" > { send-keys -X history-bottom } '' "#{?mouse_word,Search For #[underscore]#{=/9/...:mouse_word},}" C-r { if-shell -F "#{?#{m/r:(copy|view)-mode,#{pane_mode}},0,1}" "copy-mode -t=" ; send-keys -X -t = search-backward "#{q:mouse_word}" } "#{?mouse_word,Type #[underscore]#{=/9/...:mouse_word},}" C-y { copy-mode -q ; send-keys -l "#{q:mouse_word}" } "#{?mouse_word,Copy #[underscore]#{=/9/...:mouse_word},}" c { copy-mode -q ; set-buffer "#{q:mouse_word}" } "#{?mouse_line,Copy Line,}" l { copy-mode -q ; set-buffer "#{q:mouse_line}" } '' "#{?mouse_hyperlink,Type #[underscore]#{=/9/...:mouse_hyperlink},}" C-h { copy-mode -q ; send-keys -l "#{q:mouse_hyperlink}" } "#{?mouse_hyperlink,Copy #[underscore]#{=/9/...:mouse_hyperlink},}" h { copy-mode -q ; set-buffer "#{q:mouse_hyperlink}" } '' "Horizontal Split" h { split-window -h } "Vertical Split" v { split-window -v } '' "#{?#{>:#{window_panes},1},,-}Swap Up" u { swap-pane -U } "#{?#{>:#{window_panes},1},,-}Swap Down" d { swap-pane -D } "#{?pane_marked_set,,-}Swap Marked" s { swap-pane } '' Kill X { kill-pane } Respawn R { respawn-pane -k } "#{?pane_marked,Unmark,Mark}" m { select-pane -m } "#{?#{>:#{window_panes},1},,-}#{?window_zoomed_flag,Unzoom,Zoom}" z { resize-pane -Z }
bind-key    -T prefix       ?                      list-keys -N
bind-key    -T prefix       C                      customize-mode -Z
bind-key    -T prefix       D                      choose-client -Z
bind-key    -T prefix       E                      select-layout -E
bind-key    -T prefix       L                      switch-client -l
bind-key    -T prefix       M                      select-pane -M
bind-key    -T prefix       [                      copy-mode
bind-key    -T prefix       ]                      paste-buffer -p
bind-key    -T prefix       c                      new-window
bind-key    -T prefix       d                      detach-client
bind-key    -T prefix       f                      command-prompt { find-window -Z "%%" }
bind-key    -T prefix       i                      display-message
bind-key    -T prefix       l                      last-window
bind-key    -T prefix       m                      select-pane -m
bind-key    -T prefix       n                      next-window
bind-key    -T prefix       o                      select-pane -t :.+
bind-key    -T prefix       p                      previous-window
bind-key    -T prefix       q                      display-panes
bind-key    -T prefix       r                      refresh-client
bind-key    -T prefix       s                      choose-tree -Zs
bind-key    -T prefix       t                      clock-mode
bind-key    -T prefix       w                      choose-tree -Zw
bind-key    -T prefix       x                      confirm-before -p "kill-pane #P? (y/n)" kill-pane
bind-key    -T prefix       z                      resize-pane -Z
bind-key    -T prefix       \{                     swap-pane -U
bind-key    -T prefix       \}                     swap-pane -D
bind-key    -T prefix       \~                     show-messages
bind-key -r -T prefix       DC                     refresh-client -c
bind-key    -T prefix       PPage                  copy-mode -u
bind-key -r -T prefix       Up                     select-pane -U
bind-key -r -T prefix       Down                   select-pane -D
bind-key -r -T prefix       Left                   select-pane -L
bind-key -r -T prefix       Right                  select-pane -R
bind-key    -T prefix       M-1                    select-layout even-horizontal
bind-key    -T prefix       M-2                    select-layout even-vertical
bind-key    -T prefix       M-3                    select-layout main-horizontal
bind-key    -T prefix       M-4                    select-layout main-vertical
bind-key    -T prefix       M-5                    select-layout tiled
bind-key    -T prefix       M-6                    select-layout main-horizontal-mirrored
bind-key    -T prefix       M-7                    select-layout main-vertical-mirrored
bind-key    -T prefix       M-n                    next-window -a
bind-key    -T prefix       M-o                    rotate-window -D
bind-key    -T prefix       M-p                    previous-window -a
bind-key -r -T prefix       M-Up                   resize-pane -U 5
bind-key -r -T prefix       M-Down                 resize-pane -D 5
bind-key -r -T prefix       M-Left                 resize-pane -L 5
bind-key -r -T prefix       M-Right                resize-pane -R 5
bind-key    -T prefix       C-b                    send-prefix
bind-key    -T prefix       C-o                    rotate-window
bind-key    -T prefix       C-z                    suspend-client
bind-key -r -T prefix       C-Up                   resize-pane -U
bind-key -r -T prefix       C-Down                 resize-pane -D
bind-key -r -T prefix       C-Left                 resize-pane -L
bind-key -r -T prefix       C-Right                resize-pane -R
bind-key -r -T prefix       S-Up                   refresh-client -U 10
bind-key -r -T prefix       S-Down                 refresh-client -D 10
bind-key -r -T prefix       S-Left                 refresh-client -L 10
bind-key -r -T prefix       S-Right                refresh-client -R 10
bind-key    -T root         MouseDown1Pane         select-pane -t = \; send-keys -M
bind-key    -T root         MouseDown1Status       select-window -t =
bind-key    -T root         MouseDown2Pane         select-pane -t = \; if-shell -F "#{||:#{pane_in_mode},#{mouse_any_flag}}" { send-keys -M } { paste-buffer -p }
bind-key    -T root         MouseDown3Pane         if-shell -F -t = "#{||:#{mouse_any_flag},#{&&:#{pane_in_mode},#{?#{m/r:(copy|view)-mode,#{pane_mode}},0,1}}}" { select-pane -t = ; send-keys -M } { display-menu -T "#[align=centre]#{pane_index} (#{pane_id})" -t = -x M -y M "#{?#{m/r:(copy|view)-mode,#{pane_mode}},Go To Top,}" < { send-keys -X history-top } "#{?#{m/r:(copy|view)-mode,#{pane_mode}},Go To Bottom,}" > { send-keys -X history-bottom } '' "#{?mouse_word,Search For #[underscore]#{=/9/...:mouse_word},}" C-r { if-shell -F "#{?#{m/r:(copy|view)-mode,#{pane_mode}},0,1}" "copy-mode -t=" ; send-keys -X -t = search-backward "#{q:mouse_word}" } "#{?mouse_word,Type #[underscore]#{=/9/...:mouse_word},}" C-y { copy-mode -q ; send-keys -l "#{q:mouse_word}" } "#{?mouse_word,Copy #[underscore]#{=/9/...:mouse_word},}" c { copy-mode -q ; set-buffer "#{q:mouse_word}" } "#{?mouse_line,Copy Line,}" l { copy-mode -q ; set-buffer "#{q:mouse_line}" } '' "#{?mouse_hyperlink,Type #[underscore]#{=/9/...:mouse_hyperlink},}" C-h { copy-mode -q ; send-keys -l "#{q:mouse_hyperlink}" } "#{?mouse_hyperlink,Copy #[underscore]#{=/9/...:mouse_hyperlink},}" h { copy-mode -q ; set-buffer "#{q:mouse_hyperlink}" } '' "Horizontal Split" h { split-window -h } "Vertical Split" v { split-window -v } '' "#{?#{>:#{window_panes},1},,-}Swap Up" u { swap-pane -U } "#{?#{>:#{window_panes},1},,-}Swap Down" d { swap-pane -D } "#{?pane_marked_set,,-}Swap Marked" s { swap-pane } '' Kill X { kill-pane } Respawn R { respawn-pane -k } "#{?pane_marked,Unmark,Mark}" m { select-pane -m } "#{?#{>:#{window_panes},1},,-}#{?window_zoomed_flag,Unzoom,Zoom}" z { resize-pane -Z } }
bind-key    -T root         MouseDown3Status       display-menu -T "#[align=centre]#{window_index}:#{window_name}" -t = -x W -y W "#{?#{>:#{session_windows},1},,-}Swap Left" l { swap-window -t :-1 } "#{?#{>:#{session_windows},1},,-}Swap Right" r { swap-window -t :+1 } "#{?pane_marked_set,,-}Swap Marked" s { swap-window } '' Kill X { kill-window } Respawn R { respawn-window -k } "#{?pane_marked,Unmark,Mark}" m { select-pane -m } Rename n { command-prompt -F -I "#W" { rename-window -t "#{window_id}" "%%" } } '' "New After" w { new-window -a } "New At End" W { new-window }
bind-key    -T root         MouseDown3StatusLeft   display-menu -T "#[align=centre]#{session_name}" -t = -x M -y W Next n { switch-client -n } Previous p { switch-client -p } '' Renumber N { move-window -r } Rename n { command-prompt -I "#S" { rename-session "%%" } } '' "New Session" s { new-session } "New Window" w { new-window }
bind-key    -T root         MouseDrag1Pane         if-shell -F "#{||:#{pane_in_mode},#{mouse_any_flag}}" { send-keys -M } { copy-mode -M }
bind-key    -T root         MouseDrag1Border       resize-pane -M
bind-key    -T root         WheelUpPane            if-shell -F "#{||:#{pane_in_mode},#{mouse_any_flag}}" { send-keys -M } { copy-mode -e }
bind-key    -T root         WheelUpStatus          previous-window
bind-key    -T root         WheelDownStatus        next-window
bind-key    -T root         DoubleClick1Pane       select-pane -t = \; if-shell -F "#{||:#{pane_in_mode},#{mouse_any_flag}}" { send-keys -M } { copy-mode -H ; send-keys -X select-word ; run-shell -d 0.3 ; send-keys -X copy-pipe-and-cancel }
bind-key    -T root         TripleClick1Pane       select-pane -t = \; if-shell -F "#{||:#{pane_in_mode},#{mouse_any_flag}}" { send-keys -M } { copy-mode -H ; send-keys -X select-line ; run-shell -d 0.3 ; send-keys -X copy-pipe-and-cancel }
bind-key    -T root         M-MouseDown3Pane       display-menu -T "#[align=centre]#{pane_index} (#{pane_id})" -t = -x M -y M "#{?#{m/r:(copy|view)-mode,#{pane_mode}},Go To Top,}" < { send-keys -X history-top } "#{?#{m/r:(copy|view)-mode,#{pane_mode}},Go To Bottom,}" > { send-keys -X history-bottom } '' "#{?mouse_word,Search For #[underscore]#{=/9/...:mouse_word},}" C-r { if-shell -F "#{?#{m/r:(copy|view)-mode,#{pane_mode}},0,1}" "copy-mode -t=" ; send-keys -X -t = search-backward "#{q:mouse_word}" } "#{?mouse_word,Type #[underscore]#{=/9/...:mouse_word},}" C-y { copy-mode -q ; send-keys -l "#{q:mouse_word}" } "#{?mouse_word,Copy #[underscore]#{=/9/...:mouse_word},}" c { copy-mode -q ; set-buffer "#{q:mouse_word}" } "#{?mouse_line,Copy Line,}" l { copy-mode -q ; set-buffer "#{q:mouse_line}" } '' "#{?mouse_hyperlink,Type #[underscore]#{=/9/...:mouse_hyperlink},}" C-h { copy-mode -q ; send-keys -l "#{q:mouse_hyperlink}" } "#{?mouse_hyperlink,Copy #[underscore]#{=/9/...:mouse_hyperlink},}" h { copy-mode -q ; set-buffer "#{q:mouse_hyperlink}" } '' "Horizontal Split" h { split-window -h } "Vertical Split" v { split-window -v } '' "#{?#{>:#{window_panes},1},,-}Swap Up" u { swap-pane -U } "#{?#{>:#{window_panes},1},,-}Swap Down" d { swap-pane -D } "#{?pane_marked_set,,-}Swap Marked" s { swap-pane } '' Kill X { kill-pane } Respawn R { respawn-pane -k } "#{?pane_marked,Unmark,Mark}" m { select-pane -m } "#{?#{>:#{window_panes},1},,-}#{?window_zoomed_flag,Unzoom,Zoom}" z { resize-pane -Z }
bind-key    -T root         M-MouseDown3Status     display-menu -T "#[align=centre]#{window_index}:#{window_name}" -t = -x W -y W "#{?#{>:#{session_windows},1},,-}Swap Left" l { swap-window -t :-1 } "#{?#{>:#{session_windows},1},,-}Swap Right" r { swap-window -t :+1 } "#{?pane_marked_set,,-}Swap Marked" s { swap-window } '' Kill X { kill-window } Respawn R { respawn-window -k } "#{?pane_marked,Unmark,Mark}" m { select-pane -m } Rename n { command-prompt -F -I "#W" { rename-window -t "#{window_id}" "%%" } } '' "New After" w { new-window -a } "New At End" W { new-window }
bind-key    -T root         M-MouseDown3StatusLeft display-menu -T "#[align=centre]#{session_name}" -t = -x M -y W Next n { switch-client -n } Previous p { switch-client -p } '' Renumber N { move-window -r } Rename n { command-prompt -I "#S" { rename-session "%%" } } '' "New Session" s { new-session } "New Window" w { new-window }
```

```
$ tmux list-keys -N
C-b Space   Select next layout
C-b !       Break pane to a new window
C-b "       Split window vertically
C-b #       List all paste buffers
C-b $       Rename current session
C-b %       Split window horizontally
C-b &       Kill current window
C-b '       Prompt for window index to select
C-b (       Switch to previous client
C-b )       Switch to next client
C-b ,       Rename current window
C-b -       Delete the most recent paste buffer
C-b .       Move the current window
C-b /       Describe key binding
C-b 0       Select window 0
C-b 1       Select window 1
C-b 2       Select window 2
C-b 3       Select window 3
C-b 4       Select window 4
C-b 5       Select window 5
C-b 6       Select window 6
C-b 7       Select window 7
C-b 8       Select window 8
C-b 9       Select window 9
C-b :       Prompt for a command
C-b ;       Move to the previously active pane
C-b =       Choose a paste buffer from a list
C-b ?       List key bindings
C-b C       Customize options
C-b D       Choose and detach a client from a list
C-b E       Spread panes out evenly
C-b L       Switch to the last client
C-b M       Clear the marked pane
C-b [       Enter copy mode
C-b ]       Paste the most recent paste buffer
C-b c       Create a new window
C-b d       Detach the current client
C-b f       Search for a pane
C-b i       Display window information
C-b l       Select the previously current window
C-b m       Toggle the marked pane
C-b n       Select the next window
C-b o       Select the next pane
C-b p       Select the previous window
C-b q       Display pane numbers
C-b r       Redraw the current client
C-b s       Choose a session from a list
C-b t       Show a clock
C-b w       Choose a window from a list
C-b x       Kill the active pane
C-b z       Zoom the active pane
C-b {       Swap the active pane with the pane above
C-b }       Swap the active pane with the pane below
C-b ~       Show messages
C-b DC      Reset so the visible part of the window follows the cursor
C-b PPage   Enter copy mode and scroll up
C-b Up      Select the pane above the active pane
C-b Down    Select the pane below the active pane
C-b Left    Select the pane to the left of the active pane
C-b Right   Select the pane to the right of the active pane
C-b M-1     Set the even-horizontal layout
C-b M-2     Set the even-vertical layout
C-b M-3     Set the main-horizontal layout
C-b M-4     Set the main-vertical layout
C-b M-5     Select the tiled layout
C-b M-6     Set the main-horizontal-mirrored layout
C-b M-7     Set the main-vertical-mirrored layout
C-b M-n     Select the next window with an alert
C-b M-o     Rotate through the panes in reverse
C-b M-p     Select the previous window with an alert
C-b M-Up    Resize the pane up by 5
C-b M-Down  Resize the pane down by 5
C-b M-Left  Resize the pane left by 5
C-b M-Right Resize the pane right by 5
C-b C-b     Send the prefix key
C-b C-o     Rotate through the panes
C-b C-z     Suspend the current client
C-b C-Up    Resize the pane up
C-b C-Down  Resize the pane down
C-b C-Left  Resize the pane left
C-b C-Right Resize the pane right
C-b S-Up    Move the visible part of the window up
C-b S-Down  Move the visible part of the window down
C-b S-Left  Move the visible part of the window left
C-b S-Right Move the visible part of the window right
```
