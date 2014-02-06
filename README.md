mx-user
=======

Simple user configuration for MX


#### TODO beta2

- [x] use standard logo in black for consistent branding
- [x] have a "OK" return upon deleting a user as it does in adding one
- [x] change order of tabs so arranged by approximate frequency of use: add, delete, repair, copy/sync
- [ ] Expand the About button, adding version number and a Help link to /usr/local/share/doc/mxapps.html that I will create later
- [x] make "username" disappear on Add tab when box is clicked
- [x] Change "What to Copy/Sync" to a simple indented sentence--it is not another category


#### TODO before Final:
- Add tab
- Add tab
  - [ ] add "User group (optional)" to the existing "Add User Account" category
  - [ ] When a group is named that does not exist, up pops a dialog box "Create a new group named <groupname>?"
  - [ ] Create a new category "Add Group to system" (addgroup command) using same confirm box as above
  - [ ] Add a list of groups that are automatically granted to a new user (man adduser) somewhere on the screen
- Delete tab
  - [ ] Create a new entry "Delete User Group" (addgroup command) that allows admin to remove an existing user from a specific group, with confirm msg
  - [ ] Create a new category "Delete Group" (addgroup command) that allows a group to be removed from the system, with error message "There is no group of that name in the system" if we can't provide a pull-down menu to select from
- Repair tab
  - [ ] Change "Firefox configs" to "Default browser configs"
  - [ ] Confirm ("Restore default configuration? This will end the world as you know it") and error ("No default browser has been set; please use Settings Manager > Preferred Applications to do so") messages
  - [ ] Create new entry "Xfce4 configs," maybe with subcategory list such as All,Panel only, Thunar only, anything else?
- Copy/Sync tab
  - [ ] Change "Firefox (.mozilla) folder" to "Default browser folder"
  - [ ] Add "Other folder to copy" with a search button; allow multiple folders to be selected
