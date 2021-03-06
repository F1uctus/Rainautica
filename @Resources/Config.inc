[Variables]
    ; skin scale
    s=1
    
    ; translation variables
    lang=Russian
    lang_code=ru
    gradMetric=°C
    gradImperial=°F

    fontF=Aller Cyrillic
    fontSz=(#s# * 24)
    fontSzSmall=(#s# * 14)
    fontColorPrimary=f7fafe
    fontColorSecondary=ffd942

    redAccentColor=d54e41
    yellowAccentColor=e8ae27
    blueAccentColor=3eb6ce
    greenAccentColor=c4ef3e

; #################### GLOBAL STYLES

[StringStyle]
    StringStyle=Normal
    StringEffect=None
    FontFace=#fontF#
    FontSize=#fontSz#
    FontColor=#fontcolor_primary#
    AntiAlias=1

[BackgroundStyle]
    Shape=Rectangle 0,0,#skinw#,#skinh# | Extend Opt
    Opt=Fill Color #bgcolor#,#bgopacity# | StrokeWidth 0 
    AntiAlias=1
    UpdateDivider=-1
