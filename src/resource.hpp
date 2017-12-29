#ifndef __RESOURCE_H__
#define __RESOURCE_H__

#ifndef IDC_STATIC
#define IDC_STATIC (-1)
#endif

// Acceleration
#define IDA_MAIN 1

// Menu Id
#define IDM_MAIN 100
#define IDM_TRAY 101
#define IDM_LISTVIEW 102
#define IDM_EDITOR 103

// Dialogs
#define IDD_MAIN 100
#define IDD_EDITOR 101
#define IDD_SETTINGS 102
#define IDD_SETTINGS_GENERAL 103
#define IDD_SETTINGS_INTERFACE 104
#define IDD_SETTINGS_RULES 105
#define IDD_SETTINGS_RULES_BLOCKLIST 106
#define IDD_SETTINGS_RULES_SYSTEM 107
#define IDD_SETTINGS_RULES_CUSTOM 108
#define IDD_SETTINGS_LOG 109

// Main Dlg
#define IDC_LISTVIEW 104
#define IDC_START_BTN 105
#define IDC_SETTINGS_BTN 106
#define IDC_EXIT_BTN 107
#define IDC_STATUSBAR 108

// Notification Dlg
#define IDC_ICON_ID 109
#define IDC_TITLE_ID 110
#define IDC_MUTE_BTN 111
#define IDC_CLOSE_BTN 112
#define IDC_FILE_ID 113
#define IDC_ADDRESS_REMOTE_ID 114
#define IDC_ADDRESS_LOCAL_ID 115
#define IDC_FILTER_ID 116
#define IDC_DATE_ID 117
#define IDC_CREATERULE_ADDR_ID 118
#define IDC_CREATERULE_PORT_ID 119
#define IDC_CREATERULE_TEMP 120
#define IDC_TIMER_CB 121
#define IDC_ALLOW_BTN 122
#define IDC_IGNORE_BTN 123

// Editor Dlg
#define IDC_NAME 124
#define IDC_NAME_EDIT 125
#define IDC_PORTVERSION 126
#define IDC_PORTVERSION_EDIT 127
#define IDC_PROTOCOL 128
#define IDC_PROTOCOL_EDIT 129
#define IDC_DIRECTION 130
#define IDC_DIRECTION_EDIT 131
#define IDC_ACTION 132
#define IDC_ACTION_EDIT 133
#define IDC_RULES 134
#define IDC_RULES_EDIT 135
#define IDC_FILES 136
#define IDC_FILES_LV 137
#define IDC_RULES_WIKI 138
#define IDC_ENABLED_CHK 139

// Settings Dlg
#define IDC_NAV 140
#define IDC_SAVE 141
#define IDC_CLOSE 142

#define IDC_TITLE_GENERAL 143
#define IDC_TITLE_LANGUAGE 144
#define IDC_TITLE_CONFIRMATIONS 145
#define IDC_TITLE_HIGHLIGHTING 146
#define IDC_TITLE_EXPERTS 147
#define IDC_TITLE_NOTIFICATIONS 148
#define IDC_TITLE_LOGGING 149
#define IDC_TITLE_ADVANCED 150

#define IDC_ALWAYSONTOP_CHK 151
#define IDC_LOADONSTARTUP_CHK 152
#define IDC_SKIPUACWARNING_CHK 153
#define IDC_CHECKUPDATES_CHK 154

#define IDC_LANGUAGE_HINT 155
#define IDC_LANGUAGE 156

#define IDC_RULE_ALLOWINBOUND 157
#define IDC_RULE_ALLOWLISTEN 158
#define IDC_RULE_ALLOWLOOPBACK 159

#define IDC_USEFULLBLOCKLIST_CHK 160
#define IDC_USESTEALTHMODE_CHK 161
#define IDC_INSTALLBOOTTIMEFILTERS_CHK 162
#define IDC_PROXYSUPPORT_CHK 163

#define IDC_USEHOSTS_CHK 164
#define IDC_USECERTIFICATES_CHK 165
#define IDC_USENETWORKRESOLUTION_CHK 166

#define IDC_CONFIRMEXIT_CHK 167
#define IDC_CONFIRMDELETE_CHK 168
#define IDC_CONFIRMLOGCLEAR_CHK 169

#define IDC_COLORS_HINT 170

#define IDC_ENABLELOG_CHK 171
#define IDC_LOGPATH 172
#define IDC_LOGPATH_BTN 173

#define IDC_LOGSIZELIMIT_HINT 174
#define IDC_LOGSIZELIMIT_CTRL 175
#define IDC_LOGSIZELIMIT 176

#define IDC_LOGBACKUP_CHK 177

#define IDC_ENABLENOTIFICATIONS_CHK 178
#define IDC_NOTIFICATIONSILENT_CHK 179
#define IDC_NOTIFICATIONDISPLAYTIMEOUT_HINT 180
#define IDC_NOTIFICATIONDISPLAYTIMEOUT_CTRL 181
#define IDC_NOTIFICATIONDISPLAYTIMEOUT 182
#define IDC_NOTIFICATIONTIMEOUT_HINT 183
#define IDC_NOTIFICATIONTIMEOUT_CTRL 184
#define IDC_NOTIFICATIONTIMEOUT 185
#define IDC_NOTIFICATIONNOBLOCKLIST_CHK 186

#define IDC_RULES_BLOCKLIST_HINT 187
#define IDC_RULES_SYSTEM_HINT 188
#define IDC_RULES_CUSTOM_HINT 189

#define IDC_COLORS 190
#define IDC_EDITOR 191

// Main Menu
#define IDM_SETTINGS 192
#define IDM_EXIT 193
#define IDM_PURGE_UNUSED 194
#define IDM_PURGE_ERRORS 195
#define IDM_PURGE_TIMERS 196
#define IDM_PURGE_CACHE 197
#define IDM_FIND 198
#define IDM_FINDNEXT 199
#define IDM_REFRESH 200
#define IDM_ALWAYSONTOP_CHK 201
#define IDM_SHOWFILENAMESONLY_CHK 202
#define IDM_AUTOSIZECOLUMNS_CHK 203
#define IDM_ICONSSMALL 204
#define IDM_ICONSLARGE 205
#define IDM_ICONSISHIDDEN 206
#define IDM_FONT 207
#define IDM_ENABLELOG_CHK 208
#define IDM_ENABLENOTIFICATIONS_CHK 209
#define IDM_LOGSHOW 210
#define IDM_LOGCLEAR 211
#define IDM_WEBSITE 212
#define IDM_CHECKUPDATES 213
#define IDM_ABOUT 214

#define IDM_NOTIFICATIONTEST 215

// Tray Menu
#define IDM_TRAY_SHOW 216
#define IDM_TRAY_START 217
#define IDM_TRAY_MODEWHITELIST 218
#define IDM_TRAY_MODEBLACKLIST 219
#define IDM_TRAY_ENABLELOG_CHK 220
#define IDM_TRAY_ENABLENOTIFICATIONS_CHK 221
#define IDM_TRAY_LOGSHOW 222
#define IDM_TRAY_LOGCLEAR 223
#define IDM_TRAY_LOGSHOW_ERR 224
#define IDM_TRAY_LOGCLEAR_ERR 225
#define IDM_TRAY_SETTINGS 226
#define IDM_TRAY_WEBSITE 227
#define IDM_TRAY_ABOUT 228
#define IDM_TRAY_EXIT 229

// Listview Menu
#define IDM_ADD_FILE 230
#define IDM_ALL_PROCESSES 231
#define IDM_ALL_PACKAGES 232
#define IDM_ALL_SERVICES 233
#define IDM_REFRESH2 234
#define IDM_DISABLENOTIFICATIONS 235
#define IDM_OPENRULESEDITOR 236
#define IDM_EXPLORE 237
#define IDM_COPY 238
#define IDM_CHECK 239
#define IDM_UNCHECK 240
#define IDM_DISABLETIMER 241

#define IDM_ADD 242
#define IDM_EDIT 243
#define IDM_DELETE 244

#define IDM_EXPORT_APPS 245
#define IDM_EXPORT_RULES 246
#define IDM_IMPORT_APPS 247
#define IDM_IMPORT_RULES 248

#define IDM_SELECT_ALL 249
#define IDM_ZOOM 250

#define IDX_PROCESS 1000
#define IDX_PACKAGE 2000
#define IDX_SERVICE 3000
#define IDX_LANGUAGE 4000
#define IDX_RULES_SPECIAL 5000
#define IDX_TIMER 6000

// Strings
#define IDS_UPDATE_NO 1
#define IDS_UPDATE_YES 2
#define IDS_FILE 3
#define IDS_SETTINGS 4
#define IDS_EXIT 5
#define IDS_EDIT 6
#define IDS_PURGE_ERRORS 7
#define IDS_PURGE_UNUSED 8
#define IDS_PURGE_TIMERS 9
#define IDS_PURGE_CACHE 10
#define IDS_FIND 11
#define IDS_FINDNEXT 12
#define IDS_REFRESH 13
#define IDS_VIEW 14
#define IDS_ICONS 15
#define IDS_ICONSSMALL 16
#define IDS_ICONSLARGE 17
#define IDS_ICONSISHIDDEN 18
#define IDS_LANGUAGE 19
#define IDS_FONT 20
#define IDS_HELP 21
#define IDS_WEBSITE 22
#define IDS_CHECKUPDATES 23
#define IDS_DONATE 24
#define IDS_ABOUT 25
#define IDS_TRAY_SHOW 26
#define IDS_TRAY_START 27
#define IDS_TRAY_STOP 28
#define IDS_TRAY_MODE 29
#define IDS_TRAY_RULES 30
#define IDS_TRAY_BLOCKLIST_RULES 31
#define IDS_TRAY_SYSTEM_RULES 32
#define IDS_TRAY_CUSTOM_RULES 33
#define IDS_TRAY_LOG 34
#define IDS_TRAY_LOGERR 35
#define IDS_ADD_FILE 36
#define IDS_ADD_PROCESS 37
#define IDS_ADD_PACKAGE 38
#define IDS_ADD_SERVICE 39
#define IDS_ALL 40
#define IDS_DISABLENOTIFICATIONS 41
#define IDS_OPENRULESEDITOR 42
#define IDS_TIMER 43
#define IDS_DISABLE 44
#define IDS_EXPLORE 45
#define IDS_COPY 46
#define IDS_CHECK 47
#define IDS_UNCHECK 48
#define IDS_ADD 49
#define IDS_EDIT2 50
#define IDS_DELETE 51
#define IDS_EXPORT 52
#define IDS_IMPORT 53
#define IDS_EXPORT_XML 54
#define IDS_IMPORT_XML 55
#define IDS_MODE_WHITELIST 56
#define IDS_MODE_BLACKLIST 57
#define IDS_RULE_ALLOWINBOUND 58
#define IDS_RULE_ALLOWLISTEN 59
#define IDS_RULE_ALLOWLOOPBACK 60
#define IDS_HIGHLIGHT_INVALID 61
#define IDS_HIGHLIGHT_NETWORK 62
#define IDS_HIGHLIGHT_PACKAGE 63
#define IDS_HIGHLIGHT_PICO 64
#define IDS_HIGHLIGHT_SERVICE 65
#define IDS_HIGHLIGHT_SIGNED 66
#define IDS_HIGHLIGHT_SILENT 67
#define IDS_HIGHLIGHT_SPECIAL 68
#define IDS_HIGHLIGHT_SYSTEM 69
#define IDS_HIGHLIGHT_TEMP 70
#define IDS_EDITOR 71
#define IDS_NAME 72
#define IDS_RULE 73
#define IDS_PORTVERSION 74
#define IDS_PROTOCOL 75
#define IDS_DIRECTION 76
#define IDS_ACTION 77
#define IDS_DATE 78
#define IDS_FILEPATH 79
#define IDS_SIGNATURE 80
#define IDS_ADDRESS 81
#define IDS_FILTER 82
#define IDS_NOTES 83
#define IDS_ADDED 84
#define IDS_APPLYTO 85
#define IDS_TIMELEFT 86
#define IDS_SIGN_SIGNED 87
#define IDS_SIGN_UNSIGNED 88
#define IDS_GROUP_ALLOWED 89
#define IDS_GROUP_BLOCKED 90
#define IDS_GROUP_ENABLED 91
#define IDS_GROUP_SPECIAL 92
#define IDS_GROUP_DISABLED 93
#define IDS_DIRECTION_1 94
#define IDS_DIRECTION_2 95
#define IDS_DIRECTION_3 96
#define IDS_ACTION_1 97
#define IDS_ACTION_2 98
#define IDS_ACTION_3 99
#define IDS_ACTION_4 100
#define IDS_RULE_TITLE_2 101
#define IDS_RULES_WIKI 102
#define IDS_ENABLERULE_CHK 103
#define IDS_SETTINGS_1 104
#define IDS_SETTINGS_3 105
#define IDS_SAVE 106
#define IDS_CLOSE 107
#define IDS_TITLE_GENERAL 108
#define IDS_TITLE_LANGUAGE 109
#define IDS_TITLE_CONFIRMATIONS 110
#define IDS_TITLE_HIGHLIGHTING 111
#define IDS_TITLE_EXPERTS 112
#define IDS_TITLE_LOGGING 113
#define IDS_TITLE_NOTIFICATIONS 114
#define IDS_TITLE_ADVANCED 115
#define IDS_ALWAYSONTOP_CHK 116
#define IDS_LOADONSTARTUP_CHK 117
#define IDS_SHOWFILENAMESONLY_CHK 118
#define IDS_AUTOSIZECOLUMNS_CHK 119
#define IDS_SKIPUACWARNING_CHK 120
#define IDS_CHECKUPDATES_CHK 121
#define IDS_LANGUAGE_HINT 122
#define IDS_USEFULLBLOCKLIST_CHK 123
#define IDS_USEFULLBLOCKLIST_HINT 124
#define IDS_USESTEALTHMODE_CHK 125
#define IDS_USESTEALTHMODE_HINT 126
#define IDS_INSTALLBOOTTIMEFILTERS_CHK 127
#define IDS_INSTALLBOOTTIMEFILTERS_HINT 128
#define IDS_PROXYSUPPORT_CHK 129
#define IDS_PROXYSUPPORT_HINT 130
#define IDS_USEHOSTS_CHK 131
#define IDS_USECERTIFICATES_CHK 132
#define IDS_USENETWORKRESOLUTION_CHK 133
#define IDS_DISABLEWINDOWSFIREWALL_CHK 134
#define IDS_ENABLEWINDOWSFIREWALL_CHK 135
#define IDS_CONFIRMEXIT_CHK 136
#define IDS_CONFIRMDELETE_CHK 137
#define IDS_CONFIRMLOGCLEAR_CHK 138
#define IDS_COLORS_HINT 139
#define IDS_ENABLELOG_CHK 140
#define IDS_LOGSHOW 141
#define IDS_LOGCLEAR 142
#define IDS_LOGSIZELIMIT_HINT 143
#define IDS_LOGBACKUP_CHK 144
#define IDS_ENABLENOTIFICATIONS_CHK 145
#define IDS_NOTIFICATIONSILENT_CHK 146
#define IDS_NOTIFICATIONDISPLAYTIMEOUT_HINT 147
#define IDS_NOTIFICATIONTIMEOUT_HINT 148
#define IDS_NOTIFICATIONNOBLOCKLIST_CHK 149
#define IDS_RULES_BLOCKLIST_HINT 150
#define IDS_RULES_SYSTEM_HINT 151
#define IDS_RULES_CUSTOM_HINT 152
#define IDS_NOTIFY_CREATERULE_ADDRESS 153
#define IDS_NOTIFY_CREATERULE_PORT 154
#define IDS_NOTIFY_CREATERULE_TEMP 155
#define IDS_NOTIFY_DISABLENOTIFICATIONS 156
#define IDS_NOTIFY_TOOLTIP 157
#define IDS_NOTIFY_TOOLTIP2 158
#define IDS_QUESTION 159
#define IDS_QUESTION_DELETE 160
#define IDS_QUESTION_START 161
#define IDS_QUESTION_STOP 162
#define IDS_QUESTION_MODE 163
#define IDS_QUESTION_EXIT 164
#define IDS_QUESTION_LISTEN 165
#define IDS_QUESTION_EXPERT 166
#define IDS_QUESTION_TIMER 167
#define IDS_QUESTION_TIMERS 168
#define IDS_QUESTION_FLAG_CHK 169
#define IDS_STATUS_TOTAL 170
#define IDS_STATUS_SELECTED 171
#define IDS_STATUS_EMPTY 172
#define IDS_STATUS_ERROR 173
#define IDS_STATUS_SYNTAX_ERROR 174

// RC data
#define IDR_RULES_BLOCKLIST 1
#define IDR_RULES_SYSTEM 2

// Icons
#define IDI_MAIN 100
#define IDI_ACTIVE IDI_MAIN
#define IDI_INACTIVE 101
#define IDI_ALLOW 102
#define IDI_BLOCK 103
#define IDI_MUTE 104
#define IDI_CLOSE 105

#endif // __RESOURCE_H__
