# x1nigo's build of st
My build of the Simple Terminal.

## Patches
- `alpha` (transparency)
- `blinking_cursor` (adds different types of cursors styles)
- `bold-is-not-bright` (used regular colors for bold, not bright)
- `scrollback` (adds a scrollback feature)

## Requirements
- `libxft-bgra` - Without this, st can't render colored emojis and will simply shut down if it sees one. If you don't have colored emojis, then you don't need to install this.

## Notes
If you want to zoom in/out, just press <kbd>Shift</kbd> + <kbd>Ctrl</kbd> then <kbd>j</kbd> and <kbd>k</kbd>.

## References
- For the original version, see http://st.suckless.org/.
