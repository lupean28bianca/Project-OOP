object tFormInfo: TtFormInfo
  Left = 279
  Top = 277
  Width = 1139
  Height = 604
  Caption = 'Info'
  Color = clBtnText
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object tMemoInfo: TMemo
    Left = 152
    Top = 32
    Width = 841
    Height = 425
    Color = clMenuText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    Lines.Strings = (
      'ABOUT TETRIS'
      ''
      
        '        Tetris is the addictive puzzle game that started it all,' +
        ' embracing our universal desire to create '
      
        'order out of chaos. The Tetris game was created by Alexey Pajitn' +
        'ov '
      
        'in 1984 the product of Alexey'#8217's computer programming experience ' +
        'and his love of puzzles. '
      
        'In the decades to follow, Tetris became one of the most successf' +
        'ul and recognizable video games, '
      'appearing on nearly every gaming platform available. '
      
        'Click PLAY to start playing one of the world'#8217's most popular puzz' +
        'le games now!'
      ''
      'OBJECTIVE'
      ''
      
        '        The goal of Tetris is to score as many points as possibl' +
        'e by clearing horizontal lines of Blocks. '
      
        'The player must rotate, move, and drop the falling Tetriminos in' +
        'side the Matrix (playing field).'
      
        'Lines are cleared when they are filled with Blocks and have no e' +
        'mpty spaces.'
      
        'As lines are cleared, the level increases and Tetriminos fall fa' +
        'ster, making the game progressively '
      
        'more challenging. If the Blocks land above the top of the playin' +
        'g field, the game is over.')
    ParentFont = False
    TabOrder = 0
  end
  object btnBack: TButton
    Left = 32
    Top = 176
    Width = 97
    Height = 49
    Caption = 'BACK'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS UI Gothic'
    Font.Style = [fsBold, fsItalic]
    ParentFont = False
    TabOrder = 1
    OnClick = btnBackClick
  end
end
